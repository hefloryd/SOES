#ifndef __UTYPES_H__
#define __UTYPES_H__

#include <cc.h>
#include "config.h"

/* NOTE: Not packed, does not use bitfields */

typedef struct
{
   /* Inputs */
   uint8_t IN1; /* (BIT1) */
   uint8_t IN2; /* (BIT2) */
   uint8_t IN3; /* (BIT3) */
   uint8_t IN4; /* (BIT4) */

   /* Outputs */
   struct
   {
      int8_t OUT1;
      int16_t OUT2;
      int32_t OUT3;
   } Outputs;

   /* Parameters */
   int32_t PARAM1;
   int32_t PARAM2;

   /* Manufacturer specific data */

   /* Storage for configurable PDO:s */
   struct
   {
      uint8_t maxsub;
      uint32_t value[4];
   } PDO[2];

   /* Storage for configurable Sync Managers */
   struct
   {
      uint8_t maxsub;
      uint16_t value[4];
   } SM[2];

} _Objects;

extern _Objects Obj;

#endif /* __UTYPES_H__ */
