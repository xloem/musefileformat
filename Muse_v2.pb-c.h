/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Muse_v2.proto */

#ifndef PROTOBUF_C_Muse_5fv2_2eproto__INCLUDED
#define PROTOBUF_C_Muse_5fv2_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Muse2__DataCollection Muse2__DataCollection;
typedef struct _Muse2__Data Muse2__Data;
typedef struct _Muse2__EEG Muse2__EEG;
typedef struct _Muse2__Quantization Muse2__Quantization;
typedef struct _Muse2__Accelerometer Muse2__Accelerometer;
typedef struct _Muse2__Annotation Muse2__Annotation;
typedef struct _Muse2__Battery Muse2__Battery;
typedef struct _Muse2__Version Muse2__Version;
typedef struct _Muse2__Config Muse2__Config;
typedef struct _Muse2__EEGDroppedSamples Muse2__EEGDroppedSamples;
typedef struct _Muse2__ACCDroppedSamples Muse2__ACCDroppedSamples;
typedef struct _Muse2__ComputingDevice Muse2__ComputingDevice;
typedef struct _Muse2__DSP Muse2__DSP;


/* --- enums --- */

/*
 * This allows us to identify the extension data type.
 */
typedef enum _Muse2__Data__Datatype {
  MUSE2__DATA__DATATYPE__EEG = 0,
  MUSE2__DATA__DATATYPE__QUANT = 1,
  MUSE2__DATA__DATATYPE__ACCEL = 2,
  MUSE2__DATA__DATATYPE__BATTERY = 3,
  MUSE2__DATA__DATATYPE__VERSION = 4,
  MUSE2__DATA__DATATYPE__CONFIG = 5,
  MUSE2__DATA__DATATYPE__ANNOTATION = 6,
  MUSE2__DATA__DATATYPE__HISTOGRAM = 7,
  MUSE2__DATA__DATATYPE__ALGVALUE = 8,
  MUSE2__DATA__DATATYPE__DSP = 9,
  MUSE2__DATA__DATATYPE__COMPUTING_DEVICE = 10,
  MUSE2__DATA__DATATYPE__EEG_DROPPED = 11,
  MUSE2__DATA__DATATYPE__ACC_DROPPED = 12,
  MUSE2__DATA__DATATYPE__CALM_APP = 13,
  MUSE2__DATA__DATATYPE__CALM_ALG = 14
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MUSE2__DATA__DATATYPE)
} Muse2__Data__Datatype;
typedef enum _Muse2__Annotation__Format {
  MUSE2__ANNOTATION__FORMAT__PLAIN_STRING = 0,
  MUSE2__ANNOTATION__FORMAT__JSON = 1,
  MUSE2__ANNOTATION__FORMAT__OSC = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MUSE2__ANNOTATION__FORMAT)
} Muse2__Annotation__Format;
typedef enum _Muse2__HeadLocations {
  /*
   * All head locations http://www.bem.fi/book/13/13.htm#03
   */
  MUSE2__HEAD_LOCATIONS__NZ = 1,
  MUSE2__HEAD_LOCATIONS__FP1 = 2,
  MUSE2__HEAD_LOCATIONS__FPZ = 3,
  MUSE2__HEAD_LOCATIONS__FP2 = 4,
  MUSE2__HEAD_LOCATIONS__AF7 = 5,
  MUSE2__HEAD_LOCATIONS__AF3 = 6,
  MUSE2__HEAD_LOCATIONS__AFZ = 7,
  MUSE2__HEAD_LOCATIONS__AF4 = 8,
  MUSE2__HEAD_LOCATIONS__AF8 = 9,
  MUSE2__HEAD_LOCATIONS__F9 = 10,
  MUSE2__HEAD_LOCATIONS__F7 = 11,
  MUSE2__HEAD_LOCATIONS__F5 = 12,
  MUSE2__HEAD_LOCATIONS__F3 = 13,
  MUSE2__HEAD_LOCATIONS__F1 = 14,
  MUSE2__HEAD_LOCATIONS__FZ = 15,
  MUSE2__HEAD_LOCATIONS__F2 = 16,
  MUSE2__HEAD_LOCATIONS__F4 = 17,
  MUSE2__HEAD_LOCATIONS__F6 = 18,
  MUSE2__HEAD_LOCATIONS__F8 = 19,
  MUSE2__HEAD_LOCATIONS__F10 = 20,
  MUSE2__HEAD_LOCATIONS__FT9 = 21,
  MUSE2__HEAD_LOCATIONS__FT7 = 22,
  MUSE2__HEAD_LOCATIONS__FC5 = 23,
  MUSE2__HEAD_LOCATIONS__FC3 = 24,
  MUSE2__HEAD_LOCATIONS__FC1 = 25,
  MUSE2__HEAD_LOCATIONS__FCZ = 26,
  MUSE2__HEAD_LOCATIONS__FC2 = 27,
  MUSE2__HEAD_LOCATIONS__FC4 = 28,
  MUSE2__HEAD_LOCATIONS__FC6 = 29,
  MUSE2__HEAD_LOCATIONS__FT8 = 30,
  MUSE2__HEAD_LOCATIONS__FT10 = 31,
  MUSE2__HEAD_LOCATIONS__A1 = 32,
  MUSE2__HEAD_LOCATIONS__T9 = 33,
  MUSE2__HEAD_LOCATIONS__T7 = 34,
  MUSE2__HEAD_LOCATIONS__C5 = 35,
  MUSE2__HEAD_LOCATIONS__C3 = 36,
  MUSE2__HEAD_LOCATIONS__C1 = 37,
  MUSE2__HEAD_LOCATIONS__CZ = 38,
  MUSE2__HEAD_LOCATIONS__C2 = 39,
  MUSE2__HEAD_LOCATIONS__C4 = 40,
  MUSE2__HEAD_LOCATIONS__C6 = 41,
  MUSE2__HEAD_LOCATIONS__T8 = 42,
  MUSE2__HEAD_LOCATIONS__T10 = 43,
  MUSE2__HEAD_LOCATIONS__A2 = 44,
  MUSE2__HEAD_LOCATIONS__TP9 = 45,
  MUSE2__HEAD_LOCATIONS__TP7 = 46,
  MUSE2__HEAD_LOCATIONS__CP5 = 47,
  MUSE2__HEAD_LOCATIONS__CP3 = 48,
  MUSE2__HEAD_LOCATIONS__CP1 = 49,
  MUSE2__HEAD_LOCATIONS__CPZ = 50,
  MUSE2__HEAD_LOCATIONS__CP2 = 51,
  MUSE2__HEAD_LOCATIONS__CP4 = 52,
  MUSE2__HEAD_LOCATIONS__CP6 = 53,
  MUSE2__HEAD_LOCATIONS__TP8 = 54,
  MUSE2__HEAD_LOCATIONS__TP10 = 55,
  MUSE2__HEAD_LOCATIONS__P9 = 56,
  MUSE2__HEAD_LOCATIONS__P7 = 57,
  MUSE2__HEAD_LOCATIONS__P5 = 58,
  MUSE2__HEAD_LOCATIONS__P3 = 59,
  MUSE2__HEAD_LOCATIONS__P1 = 60,
  MUSE2__HEAD_LOCATIONS__PZ = 61,
  MUSE2__HEAD_LOCATIONS__P2 = 62,
  MUSE2__HEAD_LOCATIONS__P4 = 63,
  MUSE2__HEAD_LOCATIONS__P6 = 64,
  MUSE2__HEAD_LOCATIONS__P8 = 65,
  MUSE2__HEAD_LOCATIONS__P10 = 66,
  MUSE2__HEAD_LOCATIONS__PO7 = 67,
  MUSE2__HEAD_LOCATIONS__PO3 = 68,
  MUSE2__HEAD_LOCATIONS__POZ = 69,
  MUSE2__HEAD_LOCATIONS__PO4 = 70,
  MUSE2__HEAD_LOCATIONS__PO8 = 71,
  MUSE2__HEAD_LOCATIONS__O1 = 72,
  MUSE2__HEAD_LOCATIONS__OZ = 73,
  MUSE2__HEAD_LOCATIONS__O2 = 74,
  MUSE2__HEAD_LOCATIONS__IZ = 75,
  MUSE2__HEAD_LOCATIONS__AUX1 = 76,
  MUSE2__HEAD_LOCATIONS__AUX2 = 77,
  MUSE2__HEAD_LOCATIONS__AUX3 = 78,
  MUSE2__HEAD_LOCATIONS__AUX4 = 79,
  MUSE2__HEAD_LOCATIONS__MUSE_LEFT_AUX = 80,
  MUSE2__HEAD_LOCATIONS__MUSE_RIGHT_AUX = 81
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MUSE2__HEAD_LOCATIONS)
} Muse2__HeadLocations;
typedef enum _Muse2__EEGUnits {
  MUSE2__EEGUNITS__EEG_MICROVOLTS = 1,
  MUSE2__EEGUNITS__EEG_MUSE1_RAW = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MUSE2__EEGUNITS)
} Muse2__EEGUnits;
typedef enum _Muse2__AccelerometerUnits {
  MUSE2__ACCELEROMETER_UNITS__ACC_GFORCE = 1,
  MUSE2__ACCELEROMETER_UNITS__ACC_MUSE1_RAW = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MUSE2__ACCELEROMETER_UNITS)
} Muse2__AccelerometerUnits;

/* --- messages --- */

struct  _Muse2__DataCollection
{
  ProtobufCMessage base;
  size_t n_collection;
  Muse2__Data **collection;
};
#define MUSE2__DATA_COLLECTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__data_collection__descriptor) \
    , 0,NULL }


struct  _Muse2__Data
{
  ProtobufCMessage base;
  /*
   * The time that this event occurred. The precision is down to microseconds.
   */
  double timestamp;
  Muse2__Data__Datatype datatype;
  /*
   * The config_id here maps to a Config message.
   * This is the sensor configuration for this data.
   * This id allows data from multiple devices to be recorded to a single file.
   */
  protobuf_c_boolean has_config_id;
  uint64_t config_id;
};
#define MUSE2__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__data__descriptor) \
    , 0, MUSE2__DATA__DATATYPE__EEG, 0, 0 }


struct  _Muse2__EEG
{
  ProtobufCMessage base;
  size_t n_values;
  float *values;
  protobuf_c_boolean has_drl;
  float drl;
  protobuf_c_boolean has_ref;
  float ref;
};
#define MUSE2__EEG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__eeg__descriptor) \
    , 0,NULL, 0, 0, 0, 0 }


/*
 * Possible quantization values are 1, 2, 4, 8, 16, 32, 64, 128
 */
struct  _Muse2__Quantization
{
  ProtobufCMessage base;
  size_t n_values;
  uint32_t *values;
};
#define MUSE2__QUANTIZATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__quantization__descriptor) \
    , 0,NULL }


/*
 * Accelerometer values are stored as milli-G's
 */
struct  _Muse2__Accelerometer
{
  ProtobufCMessage base;
  /*
   * forward_back
   */
  protobuf_c_boolean has_acc1;
  float acc1;
  /*
   * up_down
   */
  protobuf_c_boolean has_acc2;
  float acc2;
  /*
   * left_right
   */
  protobuf_c_boolean has_acc3;
  float acc3;
};
#define MUSE2__ACCELEROMETER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__accelerometer__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


/*
 * You can use this message to record application-level events.
 */
struct  _Muse2__Annotation
{
  ProtobufCMessage base;
  /*
   * This is additional data for the event, can be in any format specified 
   * by the Format enum. 
   */
  char *event_data;
  /*
   * This specifies the string format of event_data.
   */
  protobuf_c_boolean has_event_data_format;
  Muse2__Annotation__Format event_data_format;
  /*
   * This can be used to classify events, for example "blink" or "error".
   */
  char *event_type;
  /*
   * This can be used to pair events together or give them unique IDs.
   */
  char *event_id;
  /*
   * This can be used to indicate this is a sub-event of another event.
   */
  char *parent_id;
};
#define MUSE2__ANNOTATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__annotation__descriptor) \
    , NULL, 0, MUSE2__ANNOTATION__FORMAT__PLAIN_STRING, NULL, NULL, NULL }


struct  _Muse2__Battery
{
  ProtobufCMessage base;
  protobuf_c_boolean has_percent_remaining;
  uint32_t percent_remaining;
  protobuf_c_boolean has_battery_fuel_gauge_millivolts;
  uint32_t battery_fuel_gauge_millivolts;
  protobuf_c_boolean has_battery_adc_millivolts;
  uint32_t battery_adc_millivolts;
  protobuf_c_boolean has_temperature_celsius;
  int32_t temperature_celsius;
};
#define MUSE2__BATTERY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__battery__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0 }


/*
 * This indicates the version of the Muse that was used with this recording.
 */
struct  _Muse2__Version
{
  ProtobufCMessage base;
  char *hardware_version;
  char *firmware_headset_version;
  char *firmware_type;
  char *firmware_bootloader_version;
  char *build_number;
  char *protocol_version;
};
#define MUSE2__VERSION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__version__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL }


/*
 * This indicates the configuration of a specific Muse specified by the config_id.
 */
struct  _Muse2__Config
{
  ProtobufCMessage base;
  /*
   * Global configuration
   */
  char *mac_addr;
  char *serial_number;
  char *preset;
  /*
   * Network protocol
   */
  protobuf_c_boolean has_compression_enabled;
  protobuf_c_boolean compression_enabled;
  /*
   * EEG data
   */
  protobuf_c_boolean has_filters_enabled;
  protobuf_c_boolean filters_enabled;
  protobuf_c_boolean has_notch_frequency_hz;
  uint32_t notch_frequency_hz;
  protobuf_c_boolean has_eeg_sample_frequency_hz;
  uint32_t eeg_sample_frequency_hz;
  protobuf_c_boolean has_eeg_output_frequency_hz;
  uint32_t eeg_output_frequency_hz;
  protobuf_c_boolean has_eeg_samples_bitwidth;
  uint32_t eeg_samples_bitwidth;
  protobuf_c_boolean has_eeg_channel_count;
  uint32_t eeg_channel_count;
  /*
   * raw string, converted to eeg_locations
   */
  char *eeg_channel_layout;
  protobuf_c_boolean has_eeg_downsample;
  uint32_t eeg_downsample;
  protobuf_c_boolean has_eeg_units;
  Muse2__EEGUnits eeg_units;
  /*
   * derived from eeg_channel_layout
   */
  size_t n_eeg_locations;
  Muse2__HeadLocations *eeg_locations;
  protobuf_c_boolean has_eeg_conversion_factor;
  float eeg_conversion_factor;
  /*
   * Analog Front End Gain
   */
  protobuf_c_boolean has_afe_gain;
  float afe_gain;
  /*
   * DRLREF data
   */
  protobuf_c_boolean has_drlref_data_enabled;
  protobuf_c_boolean drlref_data_enabled;
  protobuf_c_boolean has_drlref_conversion_factor;
  float drlref_conversion_factor;
  protobuf_c_boolean has_drlref_sample_frequency_hz;
  uint32_t drlref_sample_frequency_hz;
  /*
   * Accelerometer data
   */
  protobuf_c_boolean has_acc_data_enabled;
  protobuf_c_boolean acc_data_enabled;
  protobuf_c_boolean has_acc_units;
  Muse2__AccelerometerUnits acc_units;
  protobuf_c_boolean has_acc_conversion_factor;
  float acc_conversion_factor;
  protobuf_c_boolean has_acc_sample_frequency_hz;
  uint32_t acc_sample_frequency_hz;
  /*
   * Battery data
   */
  protobuf_c_boolean has_battery_data_enabled;
  protobuf_c_boolean battery_data_enabled;
  /*
   * This is a bootstrap value since battery info is only emitted every few seconds
   */
  protobuf_c_boolean has_battery_percent_remaining;
  uint32_t battery_percent_remaining;
  /*
   * This is a bootstrap value since battery info is only emitted every few seconds
   */
  protobuf_c_boolean has_battery_millivolts;
  uint32_t battery_millivolts;
  /*
   * Error data (hardware/firmware level errors)
   */
  protobuf_c_boolean has_error_data_enabled;
  protobuf_c_boolean error_data_enabled;
};
#define MUSE2__CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__config__descriptor) \
    , NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, MUSE2__EEGUNITS__EEG_MICROVOLTS, 0,NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MUSE2__ACCELEROMETER_UNITS__ACC_GFORCE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  _Muse2__EEGDroppedSamples
{
  ProtobufCMessage base;
  protobuf_c_boolean has_num;
  uint32_t num;
};
#define MUSE2__EEG__DROPPED_SAMPLES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__eeg__dropped_samples__descriptor) \
    , 0, 0 }


struct  _Muse2__ACCDroppedSamples
{
  ProtobufCMessage base;
  protobuf_c_boolean has_num;
  uint32_t num;
};
#define MUSE2__ACC__DROPPED_SAMPLES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__acc__dropped_samples__descriptor) \
    , 0, 0 }


struct  _Muse2__ComputingDevice
{
  ProtobufCMessage base;
  /*
   * e.g. "Android", "iOS", "OSX"
   */
  char *os_type;
  /*
   * e.g. "1.0.9", "7.0.3", "6.1.3"
   */
  char *os_version;
  /*
   * conventional name: "Samsung Galaxy Note 3", "Macbook Pro"
   */
  char *hardware_model_name;
  /*
   * unique model name: "SM-N900W8", "MacBookPro10,1"
   */
  char *hardware_model_id;
  /*
   * this includes instruction set
   */
  char *processor_name;
  /*
   * e.g. "1000MHz"
   */
  char *processor_speed;
  /*
   * e.g. 2, 4, 6
   */
  protobuf_c_boolean has_number_of_processors;
  uint32_t number_of_processors;
  /*
   * e.g. “500MB”
   */
  char *memory_size;
  /*
   * e.g."2.1 + EDR", "4.0"
   */
  char *bluetooth_version;
  /*
   * e.g. "EST", "PDT"
   */
  char *time_zone;
  /*
   * e.g. -14000, 7200
   */
  protobuf_c_boolean has_time_zone_offset_seconds;
  int32_t time_zone_offset_seconds;
};
#define MUSE2__COMPUTING_DEVICE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__computing_device__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, NULL, NULL, 0, 0 }


struct  _Muse2__DSP
{
  ProtobufCMessage base;
  char *type;
  size_t n_float_array;
  float *float_array;
  size_t n_int_array;
  uint32_t *int_array;
  char *version;
};
#define MUSE2__DSP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&muse2__dsp__descriptor) \
    , NULL, 0,NULL, 0,NULL, NULL }


/* Muse2__DataCollection methods */
void   muse2__data_collection__init
                     (Muse2__DataCollection         *message);
size_t muse2__data_collection__get_packed_size
                     (const Muse2__DataCollection   *message);
size_t muse2__data_collection__pack
                     (const Muse2__DataCollection   *message,
                      uint8_t             *out);
size_t muse2__data_collection__pack_to_buffer
                     (const Muse2__DataCollection   *message,
                      ProtobufCBuffer     *buffer);
Muse2__DataCollection *
       muse2__data_collection__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__data_collection__free_unpacked
                     (Muse2__DataCollection *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Data methods */
void   muse2__data__init
                     (Muse2__Data         *message);
size_t muse2__data__get_packed_size
                     (const Muse2__Data   *message);
size_t muse2__data__pack
                     (const Muse2__Data   *message,
                      uint8_t             *out);
size_t muse2__data__pack_to_buffer
                     (const Muse2__Data   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Data *
       muse2__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__data__free_unpacked
                     (Muse2__Data *message,
                      ProtobufCAllocator *allocator);
/* Muse2__EEG methods */
void   muse2__eeg__init
                     (Muse2__EEG         *message);
size_t muse2__eeg__get_packed_size
                     (const Muse2__EEG   *message);
size_t muse2__eeg__pack
                     (const Muse2__EEG   *message,
                      uint8_t             *out);
size_t muse2__eeg__pack_to_buffer
                     (const Muse2__EEG   *message,
                      ProtobufCBuffer     *buffer);
Muse2__EEG *
       muse2__eeg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__eeg__free_unpacked
                     (Muse2__EEG *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Quantization methods */
void   muse2__quantization__init
                     (Muse2__Quantization         *message);
size_t muse2__quantization__get_packed_size
                     (const Muse2__Quantization   *message);
size_t muse2__quantization__pack
                     (const Muse2__Quantization   *message,
                      uint8_t             *out);
size_t muse2__quantization__pack_to_buffer
                     (const Muse2__Quantization   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Quantization *
       muse2__quantization__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__quantization__free_unpacked
                     (Muse2__Quantization *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Accelerometer methods */
void   muse2__accelerometer__init
                     (Muse2__Accelerometer         *message);
size_t muse2__accelerometer__get_packed_size
                     (const Muse2__Accelerometer   *message);
size_t muse2__accelerometer__pack
                     (const Muse2__Accelerometer   *message,
                      uint8_t             *out);
size_t muse2__accelerometer__pack_to_buffer
                     (const Muse2__Accelerometer   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Accelerometer *
       muse2__accelerometer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__accelerometer__free_unpacked
                     (Muse2__Accelerometer *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Annotation methods */
void   muse2__annotation__init
                     (Muse2__Annotation         *message);
size_t muse2__annotation__get_packed_size
                     (const Muse2__Annotation   *message);
size_t muse2__annotation__pack
                     (const Muse2__Annotation   *message,
                      uint8_t             *out);
size_t muse2__annotation__pack_to_buffer
                     (const Muse2__Annotation   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Annotation *
       muse2__annotation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__annotation__free_unpacked
                     (Muse2__Annotation *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Battery methods */
void   muse2__battery__init
                     (Muse2__Battery         *message);
size_t muse2__battery__get_packed_size
                     (const Muse2__Battery   *message);
size_t muse2__battery__pack
                     (const Muse2__Battery   *message,
                      uint8_t             *out);
size_t muse2__battery__pack_to_buffer
                     (const Muse2__Battery   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Battery *
       muse2__battery__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__battery__free_unpacked
                     (Muse2__Battery *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Version methods */
void   muse2__version__init
                     (Muse2__Version         *message);
size_t muse2__version__get_packed_size
                     (const Muse2__Version   *message);
size_t muse2__version__pack
                     (const Muse2__Version   *message,
                      uint8_t             *out);
size_t muse2__version__pack_to_buffer
                     (const Muse2__Version   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Version *
       muse2__version__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__version__free_unpacked
                     (Muse2__Version *message,
                      ProtobufCAllocator *allocator);
/* Muse2__Config methods */
void   muse2__config__init
                     (Muse2__Config         *message);
size_t muse2__config__get_packed_size
                     (const Muse2__Config   *message);
size_t muse2__config__pack
                     (const Muse2__Config   *message,
                      uint8_t             *out);
size_t muse2__config__pack_to_buffer
                     (const Muse2__Config   *message,
                      ProtobufCBuffer     *buffer);
Muse2__Config *
       muse2__config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__config__free_unpacked
                     (Muse2__Config *message,
                      ProtobufCAllocator *allocator);
/* Muse2__EEGDroppedSamples methods */
void   muse2__eeg__dropped_samples__init
                     (Muse2__EEGDroppedSamples         *message);
size_t muse2__eeg__dropped_samples__get_packed_size
                     (const Muse2__EEGDroppedSamples   *message);
size_t muse2__eeg__dropped_samples__pack
                     (const Muse2__EEGDroppedSamples   *message,
                      uint8_t             *out);
size_t muse2__eeg__dropped_samples__pack_to_buffer
                     (const Muse2__EEGDroppedSamples   *message,
                      ProtobufCBuffer     *buffer);
Muse2__EEGDroppedSamples *
       muse2__eeg__dropped_samples__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__eeg__dropped_samples__free_unpacked
                     (Muse2__EEGDroppedSamples *message,
                      ProtobufCAllocator *allocator);
/* Muse2__ACCDroppedSamples methods */
void   muse2__acc__dropped_samples__init
                     (Muse2__ACCDroppedSamples         *message);
size_t muse2__acc__dropped_samples__get_packed_size
                     (const Muse2__ACCDroppedSamples   *message);
size_t muse2__acc__dropped_samples__pack
                     (const Muse2__ACCDroppedSamples   *message,
                      uint8_t             *out);
size_t muse2__acc__dropped_samples__pack_to_buffer
                     (const Muse2__ACCDroppedSamples   *message,
                      ProtobufCBuffer     *buffer);
Muse2__ACCDroppedSamples *
       muse2__acc__dropped_samples__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__acc__dropped_samples__free_unpacked
                     (Muse2__ACCDroppedSamples *message,
                      ProtobufCAllocator *allocator);
/* Muse2__ComputingDevice methods */
void   muse2__computing_device__init
                     (Muse2__ComputingDevice         *message);
size_t muse2__computing_device__get_packed_size
                     (const Muse2__ComputingDevice   *message);
size_t muse2__computing_device__pack
                     (const Muse2__ComputingDevice   *message,
                      uint8_t             *out);
size_t muse2__computing_device__pack_to_buffer
                     (const Muse2__ComputingDevice   *message,
                      ProtobufCBuffer     *buffer);
Muse2__ComputingDevice *
       muse2__computing_device__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__computing_device__free_unpacked
                     (Muse2__ComputingDevice *message,
                      ProtobufCAllocator *allocator);
/* Muse2__DSP methods */
void   muse2__dsp__init
                     (Muse2__DSP         *message);
size_t muse2__dsp__get_packed_size
                     (const Muse2__DSP   *message);
size_t muse2__dsp__pack
                     (const Muse2__DSP   *message,
                      uint8_t             *out);
size_t muse2__dsp__pack_to_buffer
                     (const Muse2__DSP   *message,
                      ProtobufCBuffer     *buffer);
Muse2__DSP *
       muse2__dsp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   muse2__dsp__free_unpacked
                     (Muse2__DSP *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Muse2__DataCollection_Closure)
                 (const Muse2__DataCollection *message,
                  void *closure_data);
typedef void (*Muse2__Data_Closure)
                 (const Muse2__Data *message,
                  void *closure_data);
typedef void (*Muse2__EEG_Closure)
                 (const Muse2__EEG *message,
                  void *closure_data);
typedef void (*Muse2__Quantization_Closure)
                 (const Muse2__Quantization *message,
                  void *closure_data);
typedef void (*Muse2__Accelerometer_Closure)
                 (const Muse2__Accelerometer *message,
                  void *closure_data);
typedef void (*Muse2__Annotation_Closure)
                 (const Muse2__Annotation *message,
                  void *closure_data);
typedef void (*Muse2__Battery_Closure)
                 (const Muse2__Battery *message,
                  void *closure_data);
typedef void (*Muse2__Version_Closure)
                 (const Muse2__Version *message,
                  void *closure_data);
typedef void (*Muse2__Config_Closure)
                 (const Muse2__Config *message,
                  void *closure_data);
typedef void (*Muse2__EEGDroppedSamples_Closure)
                 (const Muse2__EEGDroppedSamples *message,
                  void *closure_data);
typedef void (*Muse2__ACCDroppedSamples_Closure)
                 (const Muse2__ACCDroppedSamples *message,
                  void *closure_data);
typedef void (*Muse2__ComputingDevice_Closure)
                 (const Muse2__ComputingDevice *message,
                  void *closure_data);
typedef void (*Muse2__DSP_Closure)
                 (const Muse2__DSP *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    muse2__head_locations__descriptor;
extern const ProtobufCEnumDescriptor    muse2__eegunits__descriptor;
extern const ProtobufCEnumDescriptor    muse2__accelerometer_units__descriptor;
extern const ProtobufCMessageDescriptor muse2__data_collection__descriptor;
extern const ProtobufCMessageDescriptor muse2__data__descriptor;
extern const ProtobufCEnumDescriptor    muse2__data__datatype__descriptor;
extern const ProtobufCMessageDescriptor muse2__eeg__descriptor;
extern const ProtobufCMessageDescriptor muse2__quantization__descriptor;
extern const ProtobufCMessageDescriptor muse2__accelerometer__descriptor;
extern const ProtobufCMessageDescriptor muse2__annotation__descriptor;
extern const ProtobufCEnumDescriptor    muse2__annotation__format__descriptor;
extern const ProtobufCMessageDescriptor muse2__battery__descriptor;
extern const ProtobufCMessageDescriptor muse2__version__descriptor;
extern const ProtobufCMessageDescriptor muse2__config__descriptor;
extern const ProtobufCMessageDescriptor muse2__eeg__dropped_samples__descriptor;
extern const ProtobufCMessageDescriptor muse2__acc__dropped_samples__descriptor;
extern const ProtobufCMessageDescriptor muse2__computing_device__descriptor;
extern const ProtobufCMessageDescriptor muse2__dsp__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Muse_5fv2_2eproto__INCLUDED */
