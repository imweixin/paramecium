#define _S_STDIO_H_
#define _S_STRING_H_
#define _S_UTILITY_H_
#define _BASE_LOG_H_
#define _DB_MYSQL_H_

#include "common.h"

int main(int argc, char const *argv[])
{
    char *str = malloc(100 * sizeof(char));
    memcpy(str, "MySQL client version :", 100);
    strcat(str, mysql_get_client_info());
    log_debug(str);
    return 0;
}
