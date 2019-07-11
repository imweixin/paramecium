#define _S_STDIO_H_
#define _S_STRING_H_
#define _S_TIME_H_
#define _BASE_UTIL_H_
#define _BASE_MATH_H_
#define _BASE_SQLITE_H_

#include "common.h"

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    printf("%lf", mypow(10, 2));
    printf("\n");
}