#include "connection.h"

//Test Git

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("ejustice");
db.setUserName("system");
db.setPassword("1111");

if (db.open())
test=true;





    return  test;
}

void Connection::closeConnection()
{
    db.close();

}
