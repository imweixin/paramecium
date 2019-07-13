#define _S_STDIO_H_
#define _S_STRING_H_
#define _S_UTILITY_H_
#define _BASE_LOG_H_
#define _DB_PGSQL_H_

#include "common.h"

int main(int argc, char const *argv[])
{
    PGconn *conn = PQconnectdb("user=janbodnar dbname=testdb");
    log_debug(PQerrorMessage(conn));
    return 0;
}
