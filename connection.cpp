#include "connection.h"

connection::connection()
{}

bool connection::ouvrirconnection()
{
bool test=false;
    db=QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setDatabaseName("projet2A");
    db.setUserName("system");//inserer nom de l'utilisateur
    db.setPassword("181JFT1968");//inserer mot de passe de cet utilisateur
if (db.open()) test = true;


return db.open();

}
void connection::fermerconnection()
{db.close();}
