/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated with
    libedssharp Object Dictionary Editor v0.8-122-g6c02323

    https://github.com/CANopenNode/CANopenNode
    https://github.com/robincornelius/libedssharp

    DON'T EDIT THIS FILE MANUALLY, UNLESS YOU KNOW WHAT YOU ARE DOING !!!!
*******************************************************************************/

#define OD_DEFINITION
#include "301/CO_ODinterface.h"
#include "OD.h"

#if CO_VERSION_MAJOR < 4
#error This Object dictionary is compatible with CANopenNode V4.0 and above!
#endif

/*******************************************************************************
    OD data initialization of all groups
*******************************************************************************/
OD_PERSIST_COMM_t OD_PERSIST_COMM = {
    .x1005_deviceType = 0x00000000,
    .x100A_COB_ID_SYNCMessage = 0x00000080,
    .x100B_communicationCyclePeriod = 0x00000000,
    .x100C_synchronousWindowLength = 0x00000000,
    .x1017_COB_IDTimeStampObject = 0x00000100,
    .x1019_COB_ID_EMCY = 0x00000080,
    .x101A_inhibitTimeEMCY = 0x0000,
    .x101B_consumerHeartbeatTime_sub0 = 0x08,
    .x101B_consumerHeartbeatTime = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x101C_producerHeartbeatTime = 0x0000,
    .x101D_identity = {
        .highestSub_indexSupported = 0x04,
        .vendor_ID = 0x00000000,
        .productCode = 0x00000000,
        .revisionNumber = 0x00000000,
        .serialNumber = 0x00000000
    },
    .x101E_synchronousCounterOverflowValue = 0x00,
    .x1285_SDOClientParameter = {
        .highestSub_indexSupported = 0x03,
        .COB_IDClientToServerTx = 0x80000000,
        .COB_IDServerToClientRx = 0x80000000,
        .node_IDOfTheSDOServer = 0x01
    },
    .x1405_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000200,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1406_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000300,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1407_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000400,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1408_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000500,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1605_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1606_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1607_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1608_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1805_TPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x06,
        .COB_IDUsedByTPDO = 0xC0000180,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1806_TPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x06,
        .COB_IDUsedByTPDO = 0xC0000280,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1807_TPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x06,
        .COB_IDUsedByTPDO = 0xC0000380,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1808_TPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x06,
        .COB_IDUsedByTPDO = 0xC0000480,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1A05_TPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1A06_TPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1A07_TPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    },
    .x1A08_TPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject_1 = 0x00000000,
        .applicationObject_2 = 0x00000000,
        .applicationObject_3 = 0x00000000,
        .applicationObject_4 = 0x00000000,
        .applicationObject_5 = 0x00000000,
        .applicationObject_6 = 0x00000000,
        .applicationObject_7 = 0x00000000,
        .applicationObject_8 = 0x00000000
    }
};

OD_RAM_t OD_RAM = {
    .x1006_errorRegister = 0x00,
    .x1008_pre_definedErrorField_sub0 = 0x00,
    .x1008_pre_definedErrorField = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x1015_storeParameters_sub0 = 0x04,
    .x1015_storeParameters = {0x00000001, 0x00000001, 0x00000001, 0x00000001},
    .x1016_restoreDefaultParameters_sub0 = 0x04,
    .x1016_restoreDefaultParameters = {0x00000001, 0x00000001, 0x00000001, 0x00000001},
    .x1205_SDOServerParameter = {
        .highestSub_indexSupported = 0x02,
        .COB_IDClientToServerRx = 0x00000600,
        .COB_IDServerToClientTx = 0x00000580
    }
};



/*******************************************************************************
    All OD objects (constant definitions)
*******************************************************************************/
typedef struct {
    OD_obj_var_t o_1005_deviceType;
    OD_obj_var_t o_1006_errorRegister;
    OD_obj_array_t o_1008_pre_definedErrorField;
    OD_obj_var_t o_100A_COB_ID_SYNCMessage;
    OD_obj_var_t o_100B_communicationCyclePeriod;
    OD_obj_var_t o_100C_synchronousWindowLength;
    OD_obj_array_t o_1015_storeParameters;
    OD_obj_array_t o_1016_restoreDefaultParameters;
    OD_obj_var_t o_1017_COB_IDTimeStampObject;
    OD_obj_var_t o_1019_COB_ID_EMCY;
    OD_obj_var_t o_101A_inhibitTimeEMCY;
    OD_obj_array_t o_101B_consumerHeartbeatTime;
    OD_obj_var_t o_101C_producerHeartbeatTime;
    OD_obj_record_t o_101D_identity[5];
    OD_obj_var_t o_101E_synchronousCounterOverflowValue;
    OD_obj_record_t o_1205_SDOServerParameter[3];
    OD_obj_record_t o_1285_SDOClientParameter[4];
    OD_obj_record_t o_1405_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1406_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1407_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1408_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1605_RPDOMappingParameter[9];
    OD_obj_record_t o_1606_RPDOMappingParameter[9];
    OD_obj_record_t o_1607_RPDOMappingParameter[9];
    OD_obj_record_t o_1608_RPDOMappingParameter[9];
    OD_obj_record_t o_1805_TPDOCommunicationParameter[6];
    OD_obj_record_t o_1806_TPDOCommunicationParameter[6];
    OD_obj_record_t o_1807_TPDOCommunicationParameter[6];
    OD_obj_record_t o_1808_TPDOCommunicationParameter[6];
    OD_obj_record_t o_1A05_TPDOMappingParameter[9];
    OD_obj_record_t o_1A06_TPDOMappingParameter[9];
    OD_obj_record_t o_1A07_TPDOMappingParameter[9];
    OD_obj_record_t o_1A08_TPDOMappingParameter[9];
} ODObjs_t;

static CO_PROGMEM ODObjs_t ODObjs = {
    .o_1005_deviceType = {
        .dataOrig = &OD_PERSIST_COMM.x1005_deviceType,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1006_errorRegister = {
        .dataOrig = &OD_RAM.x1006_errorRegister,
        .attribute = ODA_SDO_R | ODA_TRPDO,
        .dataLength = 1
    },
    .o_1008_pre_definedErrorField = {
        .dataOrig0 = &OD_RAM.x1008_pre_definedErrorField_sub0,
        .dataOrig = &OD_RAM.x1008_pre_definedErrorField[0],
        .attribute0 = ODA_SDO_RW,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_100A_COB_ID_SYNCMessage = {
        .dataOrig = &OD_PERSIST_COMM.x100A_COB_ID_SYNCMessage,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_100B_communicationCyclePeriod = {
        .dataOrig = &OD_PERSIST_COMM.x100B_communicationCyclePeriod,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_100C_synchronousWindowLength = {
        .dataOrig = &OD_PERSIST_COMM.x100C_synchronousWindowLength,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1015_storeParameters = {
        .dataOrig0 = &OD_RAM.x1015_storeParameters_sub0,
        .dataOrig = &OD_RAM.x1015_storeParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1016_restoreDefaultParameters = {
        .dataOrig0 = &OD_RAM.x1016_restoreDefaultParameters_sub0,
        .dataOrig = &OD_RAM.x1016_restoreDefaultParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1017_COB_IDTimeStampObject = {
        .dataOrig = &OD_PERSIST_COMM.x1017_COB_IDTimeStampObject,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1019_COB_ID_EMCY = {
        .dataOrig = &OD_PERSIST_COMM.x1019_COB_ID_EMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_101A_inhibitTimeEMCY = {
        .dataOrig = &OD_PERSIST_COMM.x101A_inhibitTimeEMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_101B_consumerHeartbeatTime = {
        .dataOrig0 = &OD_PERSIST_COMM.x101B_consumerHeartbeatTime_sub0,
        .dataOrig = &OD_PERSIST_COMM.x101B_consumerHeartbeatTime[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_101C_producerHeartbeatTime = {
        .dataOrig = &OD_PERSIST_COMM.x101C_producerHeartbeatTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_101D_identity = {
        {
            .dataOrig = &OD_PERSIST_COMM.x101D_identity.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x101D_identity.vendor_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x101D_identity.productCode,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x101D_identity.revisionNumber,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x101D_identity.serialNumber,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_101E_synchronousCounterOverflowValue = {
        .dataOrig = &OD_PERSIST_COMM.x101E_synchronousCounterOverflowValue,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_1205_SDOServerParameter = {
        {
            .dataOrig = &OD_RAM.x1205_SDOServerParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1205_SDOServerParameter.COB_IDClientToServerRx,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1205_SDOServerParameter.COB_IDServerToClientTx,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1285_SDOClientParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1285_SDOClientParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1285_SDOClientParameter.COB_IDClientToServerTx,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1285_SDOClientParameter.COB_IDServerToClientRx,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1285_SDOClientParameter.node_IDOfTheSDOServer,
            .subIndex = 3,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1405_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1405_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1405_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1405_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1405_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1406_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1406_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1406_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1406_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1406_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1407_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1407_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1407_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1407_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1407_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1408_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1408_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1408_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1408_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1408_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1605_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1605_RPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1606_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1606_RPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1607_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1607_RPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1608_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1608_RPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1805_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1805_TPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1805_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1805_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1805_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1805_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1805_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1806_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1806_TPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1806_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1806_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1806_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1806_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1806_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1807_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1807_TPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1807_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1807_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1807_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1807_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1807_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1808_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1808_TPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1808_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1808_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1808_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1808_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1808_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1A05_TPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A05_TPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A06_TPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A06_TPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A07_TPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A07_TPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A08_TPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A08_TPDOMappingParameter.applicationObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    }
};


/*******************************************************************************
    Object dictionary
*******************************************************************************/
static OD_entry_t ODList[] = {
    {0x1005, 0x01, ODT_VAR, &ODObjs.o_1005_deviceType, NULL},
    {0x1006, 0x01, ODT_VAR, &ODObjs.o_1006_errorRegister, NULL},
    {0x1008, 0x09, ODT_ARR, &ODObjs.o_1008_pre_definedErrorField, NULL},
    {0x100A, 0x01, ODT_VAR, &ODObjs.o_100A_COB_ID_SYNCMessage, NULL},
    {0x100B, 0x01, ODT_VAR, &ODObjs.o_100B_communicationCyclePeriod, NULL},
    {0x100C, 0x01, ODT_VAR, &ODObjs.o_100C_synchronousWindowLength, NULL},
    {0x1015, 0x05, ODT_ARR, &ODObjs.o_1015_storeParameters, NULL},
    {0x1016, 0x05, ODT_ARR, &ODObjs.o_1016_restoreDefaultParameters, NULL},
    {0x1017, 0x01, ODT_VAR, &ODObjs.o_1017_COB_IDTimeStampObject, NULL},
    {0x1019, 0x01, ODT_VAR, &ODObjs.o_1019_COB_ID_EMCY, NULL},
    {0x101A, 0x01, ODT_VAR, &ODObjs.o_101A_inhibitTimeEMCY, NULL},
    {0x101B, 0x09, ODT_ARR, &ODObjs.o_101B_consumerHeartbeatTime, NULL},
    {0x101C, 0x01, ODT_VAR, &ODObjs.o_101C_producerHeartbeatTime, NULL},
    {0x101D, 0x05, ODT_REC, &ODObjs.o_101D_identity, NULL},
    {0x101E, 0x01, ODT_VAR, &ODObjs.o_101E_synchronousCounterOverflowValue, NULL},
    {0x1205, 0x03, ODT_REC, &ODObjs.o_1205_SDOServerParameter, NULL},
    {0x1285, 0x04, ODT_REC, &ODObjs.o_1285_SDOClientParameter, NULL},
    {0x1405, 0x04, ODT_REC, &ODObjs.o_1405_RPDOCommunicationParameter, NULL},
    {0x1406, 0x04, ODT_REC, &ODObjs.o_1406_RPDOCommunicationParameter, NULL},
    {0x1407, 0x04, ODT_REC, &ODObjs.o_1407_RPDOCommunicationParameter, NULL},
    {0x1408, 0x04, ODT_REC, &ODObjs.o_1408_RPDOCommunicationParameter, NULL},
    {0x1605, 0x09, ODT_REC, &ODObjs.o_1605_RPDOMappingParameter, NULL},
    {0x1606, 0x09, ODT_REC, &ODObjs.o_1606_RPDOMappingParameter, NULL},
    {0x1607, 0x09, ODT_REC, &ODObjs.o_1607_RPDOMappingParameter, NULL},
    {0x1608, 0x09, ODT_REC, &ODObjs.o_1608_RPDOMappingParameter, NULL},
    {0x1805, 0x06, ODT_REC, &ODObjs.o_1805_TPDOCommunicationParameter, NULL},
    {0x1806, 0x06, ODT_REC, &ODObjs.o_1806_TPDOCommunicationParameter, NULL},
    {0x1807, 0x06, ODT_REC, &ODObjs.o_1807_TPDOCommunicationParameter, NULL},
    {0x1808, 0x06, ODT_REC, &ODObjs.o_1808_TPDOCommunicationParameter, NULL},
    {0x1A05, 0x09, ODT_REC, &ODObjs.o_1A05_TPDOMappingParameter, NULL},
    {0x1A06, 0x09, ODT_REC, &ODObjs.o_1A06_TPDOMappingParameter, NULL},
    {0x1A07, 0x09, ODT_REC, &ODObjs.o_1A07_TPDOMappingParameter, NULL},
    {0x1A08, 0x09, ODT_REC, &ODObjs.o_1A08_TPDOMappingParameter, NULL},
    {0x0000, 0x00, 0, NULL, NULL}
};

static OD_t _OD = {
    (sizeof(ODList) / sizeof(ODList[0])) - 1,
    &ODList[0]
};

OD_t *OD = &_OD;
