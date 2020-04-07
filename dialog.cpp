#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    Dialog D;
    D.setModal(true);
    D.exec();
}

void Dialog::on_pushButton_2_clicked()
{
    Dialog D;
    D.setModal(true);
    D.exec();
}

void Dialog::on_pushButton_3_clicked()
{
    Dialog D;
    D.setModal(true);
    D.exec();
}

void Dialog::on_pushButton_4_clicked()
{
    Dialog D;
    D.setModal(true);
    D.exec();
}

void Dialog::on_pushButton_5_clicked()
{
    Dialog D;
    D.setModal(true);
    D.exec();
}

void Dialog::on_pushButton_6_clicked()
{
    Dialog D;
    D.setModal(true);
    D.exec();
}
