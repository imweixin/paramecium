#define _W_LOG_H_
#include "lib/common.h"

/* Do pow operation */
double mypow(double x, int n)
{
    double ans = 1;
    if (n == 0 || x == 1)
    {
        return ans;
    }
    else if (n == 1)
    {
        return x;
    }
    else if (n < 0)
    {
        if (-n == n)
        {
            return 1 / x * mypow(x, -n + 1); //Number Overflow
        }
        else
        {
            return 1 / mypow(x, -n);
        }
    }
    else
    {
        for (int i = 0; n > 0; i++)
        {
            double temp = x;
            if (n % 2)
            {
                for (int j = 0; j < i; j++)
                {
                    temp *= temp;
                }
                ans *= temp;
            }
            n /= 2;
        }
        return ans;
    }
}