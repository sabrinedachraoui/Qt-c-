#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   connection c;
   bool test= c.ouvrirconnection();
   MainWindow w;
              if(test)
{
        w.show();


    }
          else
               QMessageBox::information(nullptr, QObject::tr("database is not open"),
                           QObject::tr("Echec de la connection.\n""Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
