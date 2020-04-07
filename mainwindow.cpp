#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Qstring UserName = ui -> lineEdit_UserName-> text();
    Qstring Password = ui -> lineEdit_Password-> text();

    if ( UserName == "sabrine" && Password == "dachraoui")
    {
        QMessageBox::information(this, "Login","Connection successful");
        hide();
        D = new Dialog (this);
        D -> show();

    }
    else
    {
        QMessageBox::information(this, "Login","can't connect");
    }
}
