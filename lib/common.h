// To include standard library
#ifdef _S_STRING_H_
#ifndef _S_STRING_H_D_
#define _S_STRING_H_D_
#include <string.h>
#endif
#endif

#ifdef _S_TIME_H_
#ifndef _S_TIME_H_D_
#define _S_TIME_H_D_
#include <time.h>
#endif
#endif

#ifdef _S_MATH_H_
#ifndef _S_MATH_H_D_
#define _S_MATH_H_D_
#include <math.h>
#endif
#endif

/* Include standard library about LIMTIS */
#ifdef _S_LIMTIS_H_
#ifndef _S_LIMTIS_H_D_
#define _S_LIMTIS_H_D_
#include<limits.h>
#include<float.h>
#endif
#endif

/* Include standard library about TYPES */
#ifdef _S_TYPES_H_
#ifndef _S_TYPES_H_D_
#define _S_TYPES_H_D_
#include <stdbool.h>
#include <stdatomic.h> 
#include <complex.h>
#include <ctype.h>
#endif
#endif

// To include custom library
#ifdef _W_UTIL_H_
#include "lib/util.h"
#endif

#ifdef _W_MATH_H_
#include "lib/math.h"
#endif

#ifdef _W_FILE_H_
#include "lib/file.h"
#endif

#ifdef _W_STRING_H_
#include "lib/string.h"
#endif

#ifdef _W_LOG_H_
#include "lib/log.h"
#endif

#ifdef _W_TEST_H_
#include "lib/test.h"
#endif
