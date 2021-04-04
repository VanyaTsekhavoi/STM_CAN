/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated with
    libedssharp Object Dictionary Editor v0.8-122-g6c02323

    https://github.com/CANopenNode/CANopenNode
    https://github.com/robincornelius/libedssharp

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: NucleoBoardPCanroject.xdd
        File Version: 

        Created:      3/30/2021 4:13:47 PM
        Created By:   
        Modified:     3/30/2021 4:55:24 PM
        Modified By:  

    Device Info:
        Vendor Name:  
        Vendor ID:    
        Product Name: NucleoBoard
        Product ID:   5

        Description:  
*******************************************************************************/

#ifndef OD_H
#define OD_H
/*******************************************************************************
    Counters of OD objects
*******************************************************************************/
#define OD_CNT_NMT 1
#define OD_CNT_EM 1
#define OD_CNT_SYNC 1
#define OD_CNT_SYNC_PROD 1
#define OD_CNT_STORAGE 1
#define OD_CNT_TIME 1
#define OD_CNT_EM_PROD 1
#define OD_CNT_HB_CONS 1
#define OD_CNT_HB_PROD 1
#define OD_CNT_SDO_SRV 1
#define OD_CNT_SDO_CLI 1
#define OD_CNT_RPDO 4
#define OD_CNT_TPDO 4


/*******************************************************************************
    OD data declaration of all groups
*******************************************************************************/
typedef struct {
    uint32_t x1005_deviceType;
    uint32_t x100A_COB_ID_SYNCMessage;
    uint32_t x100B_communicationCyclePeriod;
    uint32_t x100C_synchronousWindowLength;
    uint32_t x1017_COB_IDTimeStampObject;
    uint32_t x1019_COB_ID_EMCY;
    uint16_t x101A_inhibitTimeEMCY;
    uint8_t x101B_consumerHeartbeatTime_sub0;
    uint32_t x101B_consumerHeartbeatTime[8];
    uint16_t x101C_producerHeartbeatTime;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t vendor_ID;
        uint32_t productCode;
        uint32_t revisionNumber;
        uint32_t serialNumber;
    } x101D_identity;
    uint8_t x101E_synchronousCounterOverflowValue;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDClientToServerTx;
        uint32_t COB_IDServerToClientRx;
        uint8_t node_IDOfTheSDOServer;
    } x1285_SDOClientParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1405_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1406_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1407_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1408_RPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1605_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1606_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1607_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1608_RPDOMappingParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1805_TPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1806_TPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1807_TPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1808_TPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1A05_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1A06_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1A07_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject_1;
        uint32_t applicationObject_2;
        uint32_t applicationObject_3;
        uint32_t applicationObject_4;
        uint32_t applicationObject_5;
        uint32_t applicationObject_6;
        uint32_t applicationObject_7;
        uint32_t applicationObject_8;
    } x1A08_TPDOMappingParameter;
} OD_PERSIST_COMM_t;

typedef struct {
    uint8_t x1006_errorRegister;
    uint8_t x1008_pre_definedErrorField_sub0;
    uint32_t x1008_pre_definedErrorField[8];
    uint8_t x1015_storeParameters_sub0;
    uint32_t x1015_storeParameters[4];
    uint8_t x1016_restoreDefaultParameters_sub0;
    uint32_t x1016_restoreDefaultParameters[4];
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDClientToServerRx;
        uint32_t COB_IDServerToClientTx;
    } x1205_SDOServerParameter;
} OD_RAM_t;

extern OD_PERSIST_COMM_t OD_PERSIST_COMM;
extern OD_RAM_t OD_RAM;
extern OD_t *OD;


/*******************************************************************************
    Object dictionary entries - shortcuts
*******************************************************************************/
#define OD_ENTRY_H1005 &OD->list[0]
#define OD_ENTRY_H1006 &OD->list[1]
#define OD_ENTRY_H1008 &OD->list[2]
#define OD_ENTRY_H100A &OD->list[3]
#define OD_ENTRY_H100B &OD->list[4]
#define OD_ENTRY_H100C &OD->list[5]
#define OD_ENTRY_H1015 &OD->list[6]
#define OD_ENTRY_H1016 &OD->list[7]
#define OD_ENTRY_H1017 &OD->list[8]
#define OD_ENTRY_H1019 &OD->list[9]
#define OD_ENTRY_H101A &OD->list[10]
#define OD_ENTRY_H101B &OD->list[11]
#define OD_ENTRY_H101C &OD->list[12]
#define OD_ENTRY_H101D &OD->list[13]
#define OD_ENTRY_H101E &OD->list[14]
#define OD_ENTRY_H1205 &OD->list[15]
#define OD_ENTRY_H1285 &OD->list[16]
#define OD_ENTRY_H1405 &OD->list[17]
#define OD_ENTRY_H1406 &OD->list[18]
#define OD_ENTRY_H1407 &OD->list[19]
#define OD_ENTRY_H1408 &OD->list[20]
#define OD_ENTRY_H1605 &OD->list[21]
#define OD_ENTRY_H1606 &OD->list[22]
#define OD_ENTRY_H1607 &OD->list[23]
#define OD_ENTRY_H1608 &OD->list[24]
#define OD_ENTRY_H1805 &OD->list[25]
#define OD_ENTRY_H1806 &OD->list[26]
#define OD_ENTRY_H1807 &OD->list[27]
#define OD_ENTRY_H1808 &OD->list[28]
#define OD_ENTRY_H1A05 &OD->list[29]
#define OD_ENTRY_H1A06 &OD->list[30]
#define OD_ENTRY_H1A07 &OD->list[31]
#define OD_ENTRY_H1A08 &OD->list[32]


/*******************************************************************************
    Object dictionary entries - shortcuts with names
*******************************************************************************/
#define OD_ENTRY_H1005_deviceType &OD->list[0]
#define OD_ENTRY_H1006_errorRegister &OD->list[1]
#define OD_ENTRY_H1008_pre_definedErrorField &OD->list[2]
#define OD_ENTRY_H100A_COB_ID_SYNCMessage &OD->list[3]
#define OD_ENTRY_H100B_communicationCyclePeriod &OD->list[4]
#define OD_ENTRY_H100C_synchronousWindowLength &OD->list[5]
#define OD_ENTRY_H1015_storeParameters &OD->list[6]
#define OD_ENTRY_H1016_restoreDefaultParameters &OD->list[7]
#define OD_ENTRY_H1017_COB_IDTimeStampObject &OD->list[8]
#define OD_ENTRY_H1019_COB_ID_EMCY &OD->list[9]
#define OD_ENTRY_H101A_inhibitTimeEMCY &OD->list[10]
#define OD_ENTRY_H101B_consumerHeartbeatTime &OD->list[11]
#define OD_ENTRY_H101C_producerHeartbeatTime &OD->list[12]
#define OD_ENTRY_H101D_identity &OD->list[13]
#define OD_ENTRY_H101E_synchronousCounterOverflowValue &OD->list[14]
#define OD_ENTRY_H1205_SDOServerParameter &OD->list[15]
#define OD_ENTRY_H1285_SDOClientParameter &OD->list[16]
#define OD_ENTRY_H1405_RPDOCommunicationParameter &OD->list[17]
#define OD_ENTRY_H1406_RPDOCommunicationParameter &OD->list[18]
#define OD_ENTRY_H1407_RPDOCommunicationParameter &OD->list[19]
#define OD_ENTRY_H1408_RPDOCommunicationParameter &OD->list[20]
#define OD_ENTRY_H1605_RPDOMappingParameter &OD->list[21]
#define OD_ENTRY_H1606_RPDOMappingParameter &OD->list[22]
#define OD_ENTRY_H1607_RPDOMappingParameter &OD->list[23]
#define OD_ENTRY_H1608_RPDOMappingParameter &OD->list[24]
#define OD_ENTRY_H1805_TPDOCommunicationParameter &OD->list[25]
#define OD_ENTRY_H1806_TPDOCommunicationParameter &OD->list[26]
#define OD_ENTRY_H1807_TPDOCommunicationParameter &OD->list[27]
#define OD_ENTRY_H1808_TPDOCommunicationParameter &OD->list[28]
#define OD_ENTRY_H1A05_TPDOMappingParameter &OD->list[29]
#define OD_ENTRY_H1A06_TPDOMappingParameter &OD->list[30]
#define OD_ENTRY_H1A07_TPDOMappingParameter &OD->list[31]
#define OD_ENTRY_H1A08_TPDOMappingParameter &OD->list[32]

#endif /* OD_H */
