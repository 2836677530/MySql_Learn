#include <iostream>
#include <mysql.h>
using namespace std;

MYSQL mysql;
// MYSQL_RES *res;
// MYSQL_ROW row;

int main(int argc, char *argv[])
{
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "utf8");
    if (mysql_real_connect(&mysql, "localhost", "root", "lwy10", "property_management", 3306, NULL, 0) == NULL)
    {
        cout << "error:" << mysql_error(&mysql);
        return -1;
    }
    mysql_close(&mysql);
    return 0;
}