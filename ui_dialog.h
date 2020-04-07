/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *RECOLTEs;
    QTabWidget *Ajouter1;
    QWidget *AjouterR;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *AfficherR;
    QTableWidget *tableWidget;
    QWidget *ModifierR;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QWidget *SupprimerR;
    QLineEdit *lineEdit_7;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QWidget *ZONE;
    QTabWidget *Ajouter_Z;
    QWidget *Ajouter;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *Ajouter2;
    QTableWidget *tableWidget_2;
    QWidget *Ajouter3;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_5;
    QWidget *Supprimer;
    QPushButton *pushButton_6;
    QLabel *label_16;
    QLineEdit *lineEdit_16;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(675, 378);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 641, 321));
        RECOLTEs = new QWidget();
        RECOLTEs->setObjectName(QStringLiteral("RECOLTEs"));
        Ajouter1 = new QTabWidget(RECOLTEs);
        Ajouter1->setObjectName(QStringLiteral("Ajouter1"));
        Ajouter1->setGeometry(QRect(0, 0, 631, 291));
        AjouterR = new QWidget();
        AjouterR->setObjectName(QStringLiteral("AjouterR"));
        lineEdit = new QLineEdit(AjouterR);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 113, 20));
        lineEdit_2 = new QLineEdit(AjouterR);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 110, 113, 20));
        lineEdit_3 = new QLineEdit(AjouterR);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 170, 113, 20));
        label = new QLabel(AjouterR);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 47, 13));
        label_2 = new QLabel(AjouterR);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 110, 47, 13));
        label_3 = new QLabel(AjouterR);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 170, 47, 13));
        pushButton = new QPushButton(AjouterR);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 100, 75, 23));
        Ajouter1->addTab(AjouterR, QString());
        AfficherR = new QWidget();
        AfficherR->setObjectName(QStringLiteral("AfficherR"));
        tableWidget = new QTableWidget(AfficherR);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 10, 551, 231));
        Ajouter1->addTab(AfficherR, QString());
        ModifierR = new QWidget();
        ModifierR->setObjectName(QStringLiteral("ModifierR"));
        lineEdit_4 = new QLineEdit(ModifierR);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 40, 141, 21));
        lineEdit_5 = new QLineEdit(ModifierR);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 90, 141, 21));
        lineEdit_6 = new QLineEdit(ModifierR);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 140, 141, 21));
        label_4 = new QLabel(ModifierR);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 40, 47, 13));
        label_5 = new QLabel(ModifierR);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 90, 47, 13));
        label_6 = new QLabel(ModifierR);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 140, 47, 13));
        pushButton_2 = new QPushButton(ModifierR);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 100, 75, 23));
        Ajouter1->addTab(ModifierR, QString());
        SupprimerR = new QWidget();
        SupprimerR->setObjectName(QStringLiteral("SupprimerR"));
        lineEdit_7 = new QLineEdit(SupprimerR);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(180, 70, 141, 21));
        label_7 = new QLabel(SupprimerR);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 70, 47, 13));
        pushButton_3 = new QPushButton(SupprimerR);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 130, 75, 23));
        Ajouter1->addTab(SupprimerR, QString());
        tabWidget->addTab(RECOLTEs, QString());
        ZONE = new QWidget();
        ZONE->setObjectName(QStringLiteral("ZONE"));
        Ajouter_Z = new QTabWidget(ZONE);
        Ajouter_Z->setObjectName(QStringLiteral("Ajouter_Z"));
        Ajouter_Z->setGeometry(QRect(0, 0, 631, 281));
        Ajouter = new QWidget();
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        lineEdit_8 = new QLineEdit(Ajouter);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(100, 30, 113, 20));
        pushButton_4 = new QPushButton(Ajouter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 100, 75, 23));
        label_8 = new QLabel(Ajouter);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 30, 47, 13));
        lineEdit_9 = new QLineEdit(Ajouter);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(100, 130, 113, 20));
        lineEdit_10 = new QLineEdit(Ajouter);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(100, 180, 113, 20));
        lineEdit_11 = new QLineEdit(Ajouter);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(100, 80, 113, 20));
        label_9 = new QLabel(Ajouter);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 80, 47, 13));
        label_10 = new QLabel(Ajouter);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(26, 130, 61, 20));
        label_11 = new QLabel(Ajouter);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 180, 47, 13));
        Ajouter_Z->addTab(Ajouter, QString());
        Ajouter2 = new QWidget();
        Ajouter2->setObjectName(QStringLiteral("Ajouter2"));
        tableWidget_2 = new QTableWidget(Ajouter2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 20, 611, 221));
        Ajouter_Z->addTab(Ajouter2, QString());
        Ajouter3 = new QWidget();
        Ajouter3->setObjectName(QStringLiteral("Ajouter3"));
        lineEdit_12 = new QLineEdit(Ajouter3);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(120, 30, 113, 20));
        lineEdit_13 = new QLineEdit(Ajouter3);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(120, 150, 113, 20));
        lineEdit_14 = new QLineEdit(Ajouter3);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(120, 110, 113, 20));
        lineEdit_15 = new QLineEdit(Ajouter3);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(120, 70, 113, 20));
        label_12 = new QLabel(Ajouter3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 150, 47, 13));
        label_13 = new QLabel(Ajouter3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 30, 47, 13));
        label_14 = new QLabel(Ajouter3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 70, 47, 13));
        label_15 = new QLabel(Ajouter3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(36, 110, 61, 20));
        pushButton_5 = new QPushButton(Ajouter3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 90, 75, 23));
        Ajouter_Z->addTab(Ajouter3, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        pushButton_6 = new QPushButton(Supprimer);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 120, 75, 23));
        label_16 = new QLabel(Supprimer);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(110, 60, 47, 13));
        lineEdit_16 = new QLineEdit(Supprimer);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(170, 60, 141, 21));
        Ajouter_Z->addTab(Supprimer, QString());
        tabWidget->addTab(ZONE, QString());

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(1);
        Ajouter1->setCurrentIndex(0);
        Ajouter_Z->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "ID", nullptr));
        label_2->setText(QApplication::translate("Dialog", "CULTURE", nullptr));
        label_3->setText(QApplication::translate("Dialog", "MASSE", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Ajouter", nullptr));
        Ajouter1->setTabText(Ajouter1->indexOf(AjouterR), QApplication::translate("Dialog", "AjouterR", nullptr));
        Ajouter1->setTabText(Ajouter1->indexOf(AfficherR), QApplication::translate("Dialog", "AfficherR", nullptr));
        label_4->setText(QApplication::translate("Dialog", "ID", nullptr));
        label_5->setText(QApplication::translate("Dialog", "CULTURE", nullptr));
        label_6->setText(QApplication::translate("Dialog", "MASSE", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Modifier", nullptr));
        Ajouter1->setTabText(Ajouter1->indexOf(ModifierR), QApplication::translate("Dialog", "ModifierR", nullptr));
        label_7->setText(QApplication::translate("Dialog", "ID", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "Supprimer", nullptr));
        Ajouter1->setTabText(Ajouter1->indexOf(SupprimerR), QApplication::translate("Dialog", "SupprimerR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RECOLTEs), QApplication::translate("Dialog", "RECOLTE", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "Ajouter", nullptr));
        label_8->setText(QApplication::translate("Dialog", "ID", nullptr));
        label_9->setText(QApplication::translate("Dialog", "TYPE", nullptr));
        label_10->setText(QApplication::translate("Dialog", "DIMENSION", nullptr));
        label_11->setText(QApplication::translate("Dialog", "ETAT", nullptr));
        Ajouter_Z->setTabText(Ajouter_Z->indexOf(Ajouter), QApplication::translate("Dialog", "Ajouter", nullptr));
        Ajouter_Z->setTabText(Ajouter_Z->indexOf(Ajouter2), QApplication::translate("Dialog", "Afficher", nullptr));
        label_12->setText(QApplication::translate("Dialog", "ETAT", nullptr));
        label_13->setText(QApplication::translate("Dialog", "ID", nullptr));
        label_14->setText(QApplication::translate("Dialog", "TYPE", nullptr));
        label_15->setText(QApplication::translate("Dialog", "DIMENSION", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "Modifier", nullptr));
        Ajouter_Z->setTabText(Ajouter_Z->indexOf(Ajouter3), QApplication::translate("Dialog", "Modifier", nullptr));
        pushButton_6->setText(QApplication::translate("Dialog", "Supprimer", nullptr));
        label_16->setText(QApplication::translate("Dialog", "ID", nullptr));
        Ajouter_Z->setTabText(Ajouter_Z->indexOf(Supprimer), QApplication::translate("Dialog", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ZONE), QApplication::translate("Dialog", "ZONE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
