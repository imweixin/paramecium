// To include standard library
#ifdef _S_STDIO_H_
#ifndef _S_STDIO_H_D_
#define _S_STDIO_H_D_
#include <stdio.h>
#endif
#endif

#ifdef _S_UTILITY_H_
#ifndef _S_UTILITY_H_D_
#define _S_UTILITY_H_D_
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <uchar.h>
#include <wchar.h>
#include <ctype.h>
#include <wctype.h>
#endif
#endif

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
#include <complex.h>
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
#include <stdint.h>
#include <stdatomic.h> 
#endif
#endif

// To include custom library
#ifdef _W_UTIL_H_
#include "include/util.h"
#endif

#ifdef _W_MATH_H_
#include "include/math.h"
#endif

#ifdef _W_FILE_H_
#include "include/file.h"
#endif

#ifdef _W_STRING_H_
#include "include/string.h"
#endif

#ifdef _W_LOG_H_
#include "include/log.h"
#endif

#ifdef _W_TEST_H_
#include "include/test.h"
#endif

#ifdef _W_SQLITE_H_
#include "include/sqlite.h"
#endif

#ifdef _W_REDIS_H_
#include "include/redis.h"
#endif

// To include external shared library
#ifdef _E_SQLITE3_H_
#ifndef _E_SQLITE3_H_D_
#define _E_SQLITE3_H_D_
#include <sqlite3.h>
#endif
#endif

#ifdef _E_REDIS_H_
#ifndef _E_REDIS_H_D_
#define _E_REDIS_H_D_
#include <hiredis/hiredis.h>
#endif
#endif