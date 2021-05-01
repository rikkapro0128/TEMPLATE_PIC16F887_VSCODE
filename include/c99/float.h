#ifndef _FLOAT_H
#define _FLOAT_H

#ifdef __cplusplus
extern "C" {
#endif

int __flt_rounds(void);
#define FLT_ROUNDS (__flt_rounds())

#define FLT_RADIX 2

#define FLT_TRUE_MIN 1.40129846432481707092e-45F
#define FLT_MIN 1.17549435082228750797e-38F
#define FLT_MAX 3.40282346638528859812e+38F
#define FLT_EPSILON 1.1920928955078125e-07F

#define FLT_MANT_DIG 24
#define FLT_MIN_EXP (-125)
#define FLT_MAX_EXP 128
#define FLT_HAS_SUBNORM 0

#define FLT_DIG 6
#define FLT_DECIMAL_DIG 9
#define FLT_MIN_10_EXP (-37)
#define FLT_MAX_10_EXP 38

#define DBL_TRUE_MIN FLT_TRUE_MIN
#define DBL_MIN FLT_MIN
#define DBL_MAX FLT_MAX
#define DBL_EPSILON FLT_EPSILON

#define DBL_MANT_DIG FLT_MANT_DIG
#define DBL_MIN_EXP FLT_MIN_EXP
#define DBL_MAX_EXP FLT_MAX_EXP
#define DBL_HAS_SUBNORM FLT_HAS_SUBNORM

#define DBL_DIG FLT_DIG
#define DBL_DECIMAL_DIG FLT_DECIMAL_DIG
#define DBL_MIN_10_EXP FLT_MIN_10_EXP
#define DBL_MAX_10_EXP FLT_MAX_10_EXP

#define LDBL_HAS_SUBNORM FLT_HAS_SUBNORM
#define LDBL_DECIMAL_DIG DECIMAL_DIG

#include <bits/float.h>

#ifdef __cplusplus
}
#endif

#endif
