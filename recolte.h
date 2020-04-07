#ifndef RECOLTE_H
#define RECOLTE_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Recolte
{public:
    Recolte();
    Recolte(int,int,QString);
    QString get_CULTURE();
    int get_ID();
    int get_MASSE();
    bool ajouter();
    bool supprimer(int);
    bool modifier(int ID, QString CULTURE, int MASSE);
    QSqlQueryModel * afficher();
    QSqlQueryModel * tri();
    QSqlQueryModel * rechercher(int ID);

private:
    QString CULTURE;
    int ID, MASSE;
};

#endif // RECOLTE_H
