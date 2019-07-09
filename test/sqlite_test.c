#define _S_STDIO_H_
#define _S_SQLITE3_H_
#define _W_SQLITE_H_
#define _W_LOG_H_

#include "lib/common.h"

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
