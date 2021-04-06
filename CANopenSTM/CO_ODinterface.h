 
 #ifndef CO_OD_INTERFACE_H
 #define CO_OD_INTERFACE_H
  
 #include "CO_driver.h"
  
 #ifdef __cplusplus
 extern "C" {
 #endif
  
 #ifndef OD_size_t
  
 #define OD_size_t uint32_t
  
 #define OD_flagsPDO_t uint32_t
 #endif
  
 #define OD_attr_t uint8_t
  
 typedef enum {
     ODA_SDO_R = 0x01, 
     ODA_SDO_W = 0x02, 
     ODA_SDO_RW = 0x03, 
     ODA_TPDO = 0x04, 
     ODA_RPDO = 0x08, 
     ODA_TRPDO = 0x0C, 
     ODA_TSRDO = 0x10, 
     ODA_RSRDO = 0x20, 
     ODA_TRSRDO = 0x30, 
     ODA_MB = 0x40, 
     ODA_STR = 0x80 
 } OD_attributes_t;
  
  
 typedef enum {
 /* !!!! WARNING !!!!
  * If changing these values, change also OD_getSDOabCode() function!
  */
     ODR_PARTIAL = -1,
     ODR_OK = 0,
     ODR_OUT_OF_MEM = 1,
     ODR_UNSUPP_ACCESS = 2,
     ODR_WRITEONLY = 3,
     ODR_READONLY = 4,
     ODR_IDX_NOT_EXIST = 5,
     ODR_NO_MAP = 6,
     ODR_MAP_LEN = 7,
     ODR_PAR_INCOMPAT = 8,
     ODR_DEV_INCOMPAT = 9,
     ODR_HW = 10,
     ODR_TYPE_MISMATCH = 11,
     ODR_DATA_LONG = 12,
     ODR_DATA_SHORT = 13,
     ODR_SUB_NOT_EXIST = 14,
     ODR_INVALID_VALUE = 15,
     ODR_VALUE_HIGH = 16,
     ODR_VALUE_LOW = 17,
     ODR_MAX_LESS_MIN = 18,
     ODR_NO_RESOURCE = 19,
     ODR_GENERAL = 20,
     ODR_DATA_TRANSF = 21,
     ODR_DATA_LOC_CTRL = 22,
     ODR_DATA_DEV_STATE = 23,
     ODR_OD_MISSING = 23,
     ODR_NO_DATA = 25,
     ODR_COUNT = 26
 } ODR_t;
  
  
 typedef struct {
     uint16_t index;
     uint8_t subIndex;
     uint8_t subEntriesCount;
     OD_attr_t attribute;
     OD_flagsPDO_t *flagsPDO;
 } OD_subEntry_t;
  
  
 typedef struct {
     void *dataObjectOriginal;
     void *object;
     OD_size_t dataLength;
     OD_size_t dataOffset;
 } OD_stream_t;
  
  
 typedef struct {
     OD_stream_t stream;
     OD_size_t (*read)(OD_stream_t *stream, uint8_t subIndex,
                       void *buf, OD_size_t count, ODR_t *returnCode);
     OD_size_t (*write)(OD_stream_t *stream, uint8_t subIndex,
                        const void *buf, OD_size_t count, ODR_t *returnCode);
 } OD_IO_t;
  
  
 typedef struct {
     uint16_t index;
     uint8_t subEntriesCount;
     uint8_t odObjectType;
     const void *odObject;
 } OD_entry_t;
  
  
 typedef struct {
     uint16_t size;
     const OD_entry_t *list;
 } OD_t;
  
  
 OD_size_t OD_readOriginal(OD_stream_t *stream, uint8_t subIndex,
                           void *buf, OD_size_t count, ODR_t *returnCode);
  
  
 OD_size_t OD_writeOriginal(OD_stream_t *stream, uint8_t subIndex,
                            const void *buf, OD_size_t count, ODR_t *returnCode);
  
  
 const OD_entry_t *OD_find(const OD_t *od, uint16_t index);
  
  
 ODR_t OD_getSub(const OD_entry_t *entry, uint8_t subIndex,
                 OD_subEntry_t *subEntry, OD_IO_t *io, bool_t odOrig);
  
  
 static inline uint16_t OD_getIndex(const OD_entry_t *entry) {
     return entry->index;
 }
  
  
 static inline void OD_rwRestart(OD_stream_t *stream) {
     stream->dataOffset = 0;
 }
  
  
 uint32_t OD_getSDOabCode(ODR_t returnCode);
  
  
 ODR_t OD_extensionIO_init(const OD_entry_t *entry,
                           void *object,
                           OD_size_t (*read)(OD_stream_t *stream,
                                             uint8_t subIndex,
                                             void *buf,
                                             OD_size_t count,
                                             ODR_t *returnCode),
                           OD_size_t (*write)(OD_stream_t *stream,
                                              uint8_t subIndex,
                                              const void *buf,
                                              OD_size_t count,
                                              ODR_t *returnCode));
  
  
 ODR_t OD_get_i8(const OD_entry_t *entry, uint8_t subIndex,
                 int8_t *val, bool_t odOrig);
 ODR_t OD_get_i16(const OD_entry_t *entry, uint8_t subIndex,
                  int16_t *val, bool_t odOrig);
 ODR_t OD_get_i32(const OD_entry_t *entry, uint8_t subIndex,
                  int32_t *val, bool_t odOrig);
 ODR_t OD_get_i64(const OD_entry_t *entry, uint8_t subIndex,
                  int64_t *val, bool_t odOrig);
 ODR_t OD_get_u8(const OD_entry_t *entry, uint8_t subIndex,
                 uint8_t *val, bool_t odOrig);
 ODR_t OD_get_u16(const OD_entry_t *entry, uint8_t subIndex,
                  uint16_t *val, bool_t odOrig);
 ODR_t OD_get_u32(const OD_entry_t *entry, uint8_t subIndex,
                  uint32_t *val, bool_t odOrig);
 ODR_t OD_get_u64(const OD_entry_t *entry, uint8_t subIndex,
                  uint64_t *val, bool_t odOrig);
 ODR_t OD_get_r32(const OD_entry_t *entry, uint8_t subIndex,
                  float32_t *val, bool_t odOrig);
 ODR_t OD_get_r64(const OD_entry_t *entry, uint8_t subIndex,
                  float64_t *val, bool_t odOrig);
  
 ODR_t OD_set_i8(const OD_entry_t *entry, uint8_t subIndex,
                 int8_t val, bool_t odOrig);
 ODR_t OD_set_i16(const OD_entry_t *entry, uint8_t subIndex,
                  int16_t val, bool_t odOrig);
 ODR_t OD_set_i32(const OD_entry_t *entry, uint8_t subIndex,
                  int32_t val, bool_t odOrig);
 ODR_t OD_set_i64(const OD_entry_t *entry, uint8_t subIndex,
                  int64_t val, bool_t odOrig);
 ODR_t OD_set_u8(const OD_entry_t *entry, uint8_t subIndex,
                 uint8_t val, bool_t odOrig);
 ODR_t OD_set_u16(const OD_entry_t *entry, uint8_t subIndex,
                  uint16_t val, bool_t odOrig);
 ODR_t OD_set_u32(const OD_entry_t *entry, uint8_t subIndex,
                  uint32_t val, bool_t odOrig);
 ODR_t OD_set_u64(const OD_entry_t *entry, uint8_t subIndex,
                  uint64_t val, bool_t odOrig);
 ODR_t OD_set_r32(const OD_entry_t *entry, uint8_t subIndex,
                  float32_t val, bool_t odOrig);
 ODR_t OD_set_r64(const OD_entry_t *entry, uint8_t subIndex,
                  float64_t val, bool_t odOrig);
  
 ODR_t OD_getPtr_i8(const OD_entry_t *entry, uint8_t subIndex, int8_t **val);
 ODR_t OD_getPtr_i16(const OD_entry_t *entry, uint8_t subIndex, int16_t **val);
 ODR_t OD_getPtr_i32(const OD_entry_t *entry, uint8_t subIndex, int32_t **val);
 ODR_t OD_getPtr_i64(const OD_entry_t *entry, uint8_t subIndex, int64_t **val);
 ODR_t OD_getPtr_u8(const OD_entry_t *entry, uint8_t subIndex, uint8_t **val);
 ODR_t OD_getPtr_u16(const OD_entry_t *entry, uint8_t subIndex, uint16_t **val);
 ODR_t OD_getPtr_u32(const OD_entry_t *entry, uint8_t subIndex, uint32_t **val);
 ODR_t OD_getPtr_u64(const OD_entry_t *entry, uint8_t subIndex, uint64_t **val);
 ODR_t OD_getPtr_r32(const OD_entry_t *entry, uint8_t subIndex, float32_t **val);
 ODR_t OD_getPtr_r64(const OD_entry_t *entry, uint8_t subIndex, float64_t **val);
 ODR_t OD_getPtr_vs(const OD_entry_t *entry, uint8_t subIndex,
                    char **val, OD_size_t *dataLength);
 ODR_t OD_getPtr_os(const OD_entry_t *entry, uint8_t subIndex,
                    uint8_t **val, OD_size_t *dataLength);
 ODR_t OD_getPtr_us(const OD_entry_t *entry, uint8_t subIndex,
                    uint16_t **val, OD_size_t *dataLength); /* CO_ODgetSetters */
  
  
 #if defined OD_DEFINITION || defined CO_DOXYGEN
  
 typedef enum {
     ODT_VAR = 0x01,
     ODT_ARR = 0x02,
     ODT_REC = 0x03,
  
     ODT_EVAR = 0x11,
     ODT_EARR = 0x12,
     ODT_EREC = 0x13,
  
     ODT_TYPE_MASK = 0x0F,
     ODT_EXTENSION_MASK = 0x10
 } OD_objectTypes_t;
  
 typedef struct {
     void *data; 
     OD_attr_t attribute; 
     OD_size_t dataLength; 
 } OD_obj_var_t;
  
 typedef struct {
     uint8_t *data0; 
     void *data; 
     OD_attr_t attribute0; 
     OD_attr_t attribute; 
     OD_size_t dataElementLength; 
     OD_size_t dataElementSizeof; 
 } OD_obj_array_t;
  
 typedef struct {
     void *data; 
     uint8_t subIndex; 
     OD_attr_t attribute; 
     OD_size_t dataLength; 
 } OD_obj_record_t;
  
 typedef struct {
     void *object;
     OD_size_t (*read)(OD_stream_t *stream, uint8_t subIndex,
                       void *buf, OD_size_t count, ODR_t *returnCode);
     OD_size_t (*write)(OD_stream_t *stream, uint8_t subIndex,
                        const void *buf, OD_size_t count, ODR_t *returnCode);
 } OD_extensionIO_t;
  
 typedef struct {
     OD_extensionIO_t *extIO;
     OD_flagsPDO_t *flagsPDO;
     const void *odObjectOriginal;
 } OD_obj_extended_t;
  /* CO_ODdefinition */
  
 #endif /* defined OD_DEFINITION */
  /* CO_ODinterface */
  
 #ifdef __cplusplus
 }
 #endif /*__cplusplus*/
  
 #endif /* CO_OD_INTERFACE_H */

