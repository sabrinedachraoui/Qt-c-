#include "recolte.h"

Recolte::Recolte()
{
    ID=0;
    CULTURE="";
    MASSE=0;
}
Recolte::Recolte(int ID,int MASSE,QString CULTURE)
{
    this->ID=ID;
    this->CULTURE=CULTURE;
    this->MASSE=MASSE;
}
QString Recolte::get_CULTURE(){return  CULTURE;}
    int Recolte::get_ID(){return  ID;}
    int Recolte::get_MASSE(){return  MASSE;}

bool Recolte::ajouter()
{
        QSqlQuery query;
        QString res= QString::number(ID);
        query.prepare("INSERT INTO Recolte (ID, CULTURE, MASSE) "
                    "VALUES (:ID, :CULTURE, :MASSE)");
        query.bindValue(":ID", res);
        query.bindValue(":CULTURE", CULTURE);
        query.bindValue(":MASSE", MASSE);

    return    query.exec();
}

QSqlQueryModel * Recolte::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from Recolte");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CULTURE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MASSE "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));

        return model;
}

bool Recolte::supprimer(int ID)
{
    QSqlQuery query;
    QString res= QString::number(ID);
    query.prepare("Delete from Recolte where ID = :ID ");
    query.bindValue(":ID", res);

         return    query.exec();
}


bool Recolte :: modifier (int ID, QString CULTURE , int MASSE)
{
    QSqlQuery query;
    QString res= QString::number(ID);
    query.prepare("UPDATE RECOLTE SET ID=:ID, CULTURE=:CULTURE, MASSE=:MASSE" );
    query.bindValue(":ID",res);
    query.bindValue(":CULTURE", CULTURE);
    query.bindValue(":MASSE", MASSE);

         return    query.exec();
}

QSqlQueryModel * Recolte::tri()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM promotions ORDER BY ID");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CULTURE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MASSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));

     return model;
}


QSqlQueryModel * Recolte::rechercher(int ID)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM annonces where ID = :ID");
    query.bindValue(":ID",ID);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CULTURE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MASSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));

        return model;
}
