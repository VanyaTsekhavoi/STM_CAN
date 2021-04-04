#include "canopen_link.h"
//#include "platform_reset.h"
#include "co_storage.h"


static inline void timebase_init()
{
	SysTick->LOAD = 0xffffffff;
	SysTick->VAL = 0;
	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;
}

static inline int32_t timebase_mark(int32_t *m)
{
	int32_t mark = (1 << 24) - SysTick->VAL - 1;
	int32_t prev = *m;
	*m = mark;		

	return (mark - prev + (1 << 24)) & ((1 << 24) - 1);
}


static CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
static int32_t clk = 0;
static int32_t clk_mhz = 1;
static int32_t process_timer = 0;
static int32_t ticks_per_ms = 0;

void canopen_link_init()
{
	const int canbr[] = {1000, 800, 500, 250, 125, 100, 50, 20, 10, 2000, 3000}; 
    extern const CO_OD_entry_t CO_OD[CO_OD_NoOfElements];

	co_storage_read_od(CO_OD, CO_OD_NoOfElements);

	if(OD_CANBitRate > sizeof(canbr) / sizeof(int))
	{
		OD_CANBitRate = 2;
	}

	if(CO_init((int32_t)CAN1, OD_CANNodeID, canbr[OD_CANBitRate]) != CO_ERROR_NO)
	{
		platform_do_reset();
	}

	co_storage_init(CO);

	CO_CANsetNormalMode(CO->CANmodule[0]);

	timebase_init();
	timebase_mark(&clk);
	clk_mhz = HAL_RCC_GetHCLKFreq() / 1000000;
	ticks_per_ms = HAL_RCC_GetHCLKFreq() / 1000;
}

void canopen_link_poll()
{
	int32_t dclk = timebase_mark(&clk);
	int32_t delta_us = dclk / clk_mhz;
	process_timer += dclk;

	CO_CANinterrupt(CO->CANmodule[0]);

	if(CO->CANmodule[0]->CANnormal) 
	{
		bool_t syncWas = CO_process_SYNC_RPDO(CO, delta_us);
		CO_process_TPDO(CO, syncWas, delta_us);
	}

	if(process_timer > ticks_per_ms)
	{
		process_timer -= ticks_per_ms;
		reset = CO_process(CO, 1, NULL);
		switch(reset)
		{
			case CO_RESET_APP:
				platform_do_reset();
				break;
			case CO_RESET_COMM:
				{
					CO_delete((int32_t)CAN1);
					canopen_link_init();
				}
				break;
			default:
				break;
		}
	}
}

