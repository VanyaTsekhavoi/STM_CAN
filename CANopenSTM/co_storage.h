#ifndef CO_STORAGE_H__
#define CO_STORAGE_H__

#ifdef __cplusplus
extern "C" {
#endif

void co_storage_init(CO_t* CO);
void co_storage_read_od(const CO_OD_entry_t *odi, int od_size);

#ifdef __cplusplus
}
#endif /*__cplusplus*/

/** @} */
#endif
