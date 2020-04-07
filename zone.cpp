#include "zone.h"

Zone::Zone()
{
ID=0;
TYPE="";
DIMENSION=0;
ETAT="";


}
Zone::Zone(int ID,float DIMENSION,QString TYPE,QString ETAT)
{
  this->ID=ID;
  this->TYPE=TYPE;
  this->DIMENSION=DIMENSION;
  this->ETAT=ETAT;
}
QString Zone::get_TYPE(){return  TYPE;}
QString Zone::get_ETAT(){return  ETAT;}
int Zone::get_ID(){return  ID;}
float Zone::get_DIMENSION(){return  DIMENSION;}

bool Zone::ajouter()
{
QSqlQuery query;
QString res= QString::number(ID);
query.prepare("INSERT INTO Zone (ID, DIMENSION,ETAT, TYPE) "
                    "VALUES (:ID,  :DIMENSION,:ETAT,:TYPE)");
query.bindValue(":ID", res);
query.bindValue(":TYPE", TYPE);
query.bindValue(":ETAT", ETAT);
query.bindValue(":DIMENSION", DIMENSION);

return    query.exec();
}

QSqlQueryModel * Zone::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from Zone");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("DIMENSION"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID"));
    return model;
}

bool Zone::supprimer(int ID)
{
QSqlQuery query;
QString res= QString::number(ID);
query.prepare("Delete from Zone where ID = :ID ");
query.bindValue(":ID", res);
return    query.exec();
}

bool Zone :: modifier (int ID, QString TYPE,QString ETAT ,float DIMENSION)
{
    QSqlQuery query;
    QString res= QString::number(ID);
    query.prepare("UPDATE ZONE SET ID=:ID, TYPE=:TYPE, ETAT=:ETAT, DIMENSION=:DIMENSION" );
    query.bindValue(":ID",res);
    query.bindValue(":TYPE", TYPE);
    query.bindValue(":DIMENSION", DIMENSION);
    query.bindValue(":ETAT", ETAT);
    return    query.exec();
}


QSqlQueryModel * Zone::tri()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM promotions ORDER BY DIMENSION");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("DIMENSION"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));

     return model;
}


QSqlQueryModel * Zone::rechercher(int ID)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM annonces where ID = :ID");
    query.bindValue(":ID",ID);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("DIMENSION"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));

        return model;
}

