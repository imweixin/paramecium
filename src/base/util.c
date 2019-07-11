#define _S_STDIO_H_
#define _S_TIME_H_
#define _S_STRING_H_

#include "common.h"

char *get_time_str(time_t t);
char *get_now_time_str();

char *get_time_str(time_t t)
{
    struct tm *timeinfo = localtime(&t);
    char *time_str = asctime(timeinfo);
    time_str[strlen(time_str)-1] = '\0';
    return time_str;
}

char *get_now_time_str()
{
    return get_time_str(time(NULL));
}
