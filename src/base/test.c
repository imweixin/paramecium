#define _S_MATH_H_
#define _S_LIMTIS_H_
#define _S_TYPES_H_

#include "common.h"

bool test_equal(double ans, double result)
{
    if (fabs(ans - result) < DBL_EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}
