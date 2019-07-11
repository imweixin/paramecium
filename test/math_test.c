#define _S_STDIO_H_
#define _BASE_MATH_H_
#define _BASE_LOG_H_
#define _BASE_TEST_H_

#include "common.h"

int mypow_test();

int main(int argc, char const *argv[])
{
    mypow_test();
}

int mypow_test()
{
    if (test_equal(10, mypow(10, 1)))
    {
        log_error("Correct answer");
    }
    else
    {
        log_error("Wrong answser");
    }
    return 1;
}