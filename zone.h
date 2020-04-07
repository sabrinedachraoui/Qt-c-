#ifndef ZONE_H
#define ZONE_H
#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>

class Zone
{public:
    Zone();
    Zone(int,float,QString,QString);
    QString get_TYPE();
    QString get_ETAT();
    int get_ID();
    float get_DIMENSION();
    bool ajouter();
    bool supprimer(int);
    bool modifier(int ID, QString TYPE,QString ETAT, float DIMENSION);
    QSqlQueryModel * afficher();
    QSqlQueryModel * tri();
    QSqlQueryModel * rechercher(int ID);
private:
    QString TYPE,ETAT;
    int ID;
    float DIMENSION;
};
#endif // ZONE_H
