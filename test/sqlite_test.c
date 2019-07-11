#define _S_STDIO_H_
#define _E_SQLITE3_H_
#define _BASE_SQLITE_H_
#define _BASE_LOG_H_

#include "common.h"

int main(int argc, char const *argv[])
{
    sqlite3 *db;
    int rc = sqlite3_open("file:/usr/local/bin/sqlite3/bin/test.db", &db);
    if (rc)
    {
        log_error("Cannot open database");
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
