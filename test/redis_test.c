#define _S_STDIO_H_
#define _BASE_LOG_H_
#define _DB_REDIS_H_

#include "common.h"

int main(int argc, char const *argv[])
{
    redisContext *c = redisConnect("127.0.0.1", 6379);
    if (c == NULL || c->err)
    {
        if (c)
        {
            log_error(c->errstr);
            // handle error
        }
        else
        {
            log_error("Can't allocate redis context");
        }
    }
    else
    {
        log_debug("Connect successfully!");
    }
    return 0;
}
