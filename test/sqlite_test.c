#define _S_STDIO_H_
#define _BASE_LOG_H_
#define _DB_SQLITE_H_

#include "common.h"
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char const *argv[])
{
    sqlite3 *db;
    int rc = sqlite3_open("resource/test.db", &db);
    if (rc)
    {
        log_error(sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    else
    {
        log_debug("Open database test.db successfully");
        sqlite3_close(db);
    }

    return 0;
}
