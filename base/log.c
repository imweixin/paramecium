#define _S_STDIO_H_
#define _W_UTIL_H_

#include "src/common.h"

// TODO:Print message to file and database
int _log_error(const char *msg, char const *caller_name)
{
    printf("[%s] %s: %s\n",get_now_time_str(), caller_name, msg);
    return 0;
}

int _log_debug(const char *msg, char const *caller_name)
{
    printf("[%s] %s: %s\n",get_now_time_str(), caller_name, msg);
    return 0;
}