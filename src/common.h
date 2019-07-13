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
// Base module
#ifdef _BASE_UTIL_H_
#include "base/util.h"
#endif

#ifdef _BASE_MATH_H_
#include "base/math.h"
#endif

#ifdef _BASE_FILE_H_
#include "base/file.h"
#endif

#ifdef _BASE_STRING_H_
#include "base/string.h"
#endif

#ifdef _BASE_LOG_H_
#include "base/log.h"
#endif

#ifdef _BASE_TEST_H_
#include "base/test.h"
#endif

// Database module
#ifdef _DB_SQLITE_H_
#include "db/sqlite.h"
#endif

#ifdef _DB_REDIS_H_
#include "db/redis.h"
#endif

#ifdef _DB_PGSQL_H_
#include "db/pgsql.h"
#endif

#ifdef _DB_MYSQL_H_
#include "db/mysql.h"
#endif
