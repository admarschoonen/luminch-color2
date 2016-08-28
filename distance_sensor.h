#ifndef _DISTANCE_SENSOR_H_
#define _DISTANCE_SENSOR_H_
#include "Arduino.h"

#include "configuration.h"

#if ((DS_SENSOR == DS_SENSOR_SHARP_GP2Y0A21YK) || (DS_SENSOR == DS_SENSOR_SHARP_GP2Y0A02YK))
#define DS_PIN A5
#else
#define DS_ECHO_PIN	12
#define DS_TRIG_PIN	13
#endif

#define DS_OVERSAMPLING 4

typedef struct ds_t {
  unsigned int reading;
  unsigned int distance; /* distance in mm (uncalibrated; based on some graphs from datasheets) */
} ds_t;

extern ds_t ds;

extern void ds_get_reading(void);
extern void ds_reading_to_distance(void);
extern void ds_print_debug(void);
extern void ds_print_log(void);

#endif // _DISTANCE_SENSOR_H_
