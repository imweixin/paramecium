#define _S_STDIO_H_
#define _S_STRING_H_
#define _S_TIME_H_
#define _W_UTIL_H_
#define _W_MATH_H_
#define _W_SQLITE_H_

#include "src/common.h"

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    printf("%lf", mypow(10, 2));
    printf("\n");
}