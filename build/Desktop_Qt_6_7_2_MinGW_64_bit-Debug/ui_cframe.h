/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *btnCERRAR;
    QWidget *page_2;
    QPushButton *btnReservar;
    QPushButton *btnMod;
    QPushButton *btnCancel;
    QPushButton *btnSalir;
    QWidget *page_3;
    QLineEdit *nameLineEdit;
    QLineEdit *contactLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QSpinBox *guestsSpinBox;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *createReservationButton;
    QPushButton *viewAvailabilityButton;
    QLabel *label_5;
    QWidget *page_4;
    QLabel *label_6;
    QLineEdit *contactLineEdit2;
    QLabel *label_7;
    QPushButton *modifyReservationButton;
    QLabel *label_8;
    QLabel *label_9;
    QDateTimeEdit *dateTimeEdit2;
    QSpinBox *guestsSpinBox2;
    QLineEdit *nameLineEdit2;
    QLineEdit *referenceLineEdit;
    QLabel *label_10;
    QWidget *page_5;
    QPushButton *cancelReservationButton;
    QLabel *label_11;
    QLineEdit *referenceLineEdit2;
    QWidget *page_6;
    QPushButton *createReservationButton3;
    QLabel *label_3;
    QLineEdit *nameLineEdit3;
    QDateTimeEdit *dateTimeEdit3;
    QLabel *label_12;
    QLabel *label_13;
    QSpinBox *guestsSpinBox3;
    QLineEdit *contactLineEdit3;
    QPushButton *viewAvailabilityButton3;
    QLabel *label_14;
    QPushButton *modifyReservationButton3;
    QPushButton *cancelReservationButton3;
    QLineEdit *referenceLineEdit3;
    QLabel *label_15;
    QTextEdit *textEdit_2;
    QWidget *page_7;
    QPushButton *btnRESER;
    QPushButton *btnTABLES;
    QWidget *page_8;
    QPushButton *ShowAvailableTables;
    QSpinBox *CapacityspinBox;
    QPushButton *AddTable;
    QSpinBox *NumberTablespinBox;
    QPushButton *RemoveTable;
    QLabel *label_16;
    QLabel *label_17;
    QTextEdit *textEdit;
    QPushButton *viewAvailabilityButton4;
    QPushButton *btnRegresar;
    QPushButton *btnRegresar2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(1259, 847);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1241, 721));
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 250, 211, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 360, 211, 91));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        btnCERRAR = new QPushButton(page);
        btnCERRAR->setObjectName("btnCERRAR");
        btnCERRAR->setGeometry(QRect(530, 480, 151, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        btnCERRAR->setFont(font1);
        btnCERRAR->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        btnReservar = new QPushButton(page_2);
        btnReservar->setObjectName("btnReservar");
        btnReservar->setGeometry(QRect(510, 210, 161, 81));
        btnReservar->setFont(font1);
        btnReservar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        btnMod = new QPushButton(page_2);
        btnMod->setObjectName("btnMod");
        btnMod->setGeometry(QRect(490, 300, 211, 81));
        btnMod->setFont(font1);
        btnMod->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        btnCancel = new QPushButton(page_2);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(490, 390, 211, 71));
        btnCancel->setFont(font1);
        btnCancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        btnSalir = new QPushButton(page_2);
        btnSalir->setObjectName("btnSalir");
        btnSalir->setGeometry(QRect(1020, 660, 141, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(14);
        font2.setBold(true);
        btnSalir->setFont(font2);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        nameLineEdit = new QLineEdit(page_3);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(50, 80, 251, 41));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        nameLineEdit->setFont(font3);
        contactLineEdit = new QLineEdit(page_3);
        contactLineEdit->setObjectName("contactLineEdit");
        contactLineEdit->setGeometry(QRect(50, 210, 141, 41));
        contactLineEdit->setFont(font3);
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 45, 351, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(false);
        label->setFont(font4);
        label_2 = new QLabel(page_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 170, 401, 21));
        label_2->setFont(font4);
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 300, 311, 21));
        label_4->setFont(font4);
        guestsSpinBox = new QSpinBox(page_3);
        guestsSpinBox->setObjectName("guestsSpinBox");
        guestsSpinBox->setGeometry(QRect(50, 330, 101, 41));
        guestsSpinBox->setFont(font3);
        dateTimeEdit = new QDateTimeEdit(page_3);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(630, 110, 211, 51));
        dateTimeEdit->setDateTime(QDateTime(QDate(2024, 8, 17), QTime(10, 0, 0)));
        createReservationButton = new QPushButton(page_3);
        createReservationButton->setObjectName("createReservationButton");
        createReservationButton->setGeometry(QRect(720, 360, 211, 91));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setItalic(false);
        createReservationButton->setFont(font5);
        createReservationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        viewAvailabilityButton = new QPushButton(page_3);
        viewAvailabilityButton->setObjectName("viewAvailabilityButton");
        viewAvailabilityButton->setGeometry(QRect(720, 470, 211, 91));
        viewAvailabilityButton->setFont(font5);
        viewAvailabilityButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(630, 70, 351, 21));
        label_5->setFont(font4);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_6 = new QLabel(page_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(650, 30, 351, 21));
        label_6->setFont(font4);
        contactLineEdit2 = new QLineEdit(page_4);
        contactLineEdit2->setObjectName("contactLineEdit2");
        contactLineEdit2->setGeometry(QRect(50, 210, 141, 41));
        contactLineEdit2->setFont(font3);
        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 370, 311, 31));
        label_7->setFont(font4);
        modifyReservationButton = new QPushButton(page_4);
        modifyReservationButton->setObjectName("modifyReservationButton");
        modifyReservationButton->setGeometry(QRect(680, 350, 271, 91));
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setItalic(true);
        modifyReservationButton->setFont(font6);
        modifyReservationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(0, 0, 0);"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 50, 351, 21));
        label_8->setFont(font4);
        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 280, 311, 21));
        label_9->setFont(font4);
        dateTimeEdit2 = new QDateTimeEdit(page_4);
        dateTimeEdit2->setObjectName("dateTimeEdit2");
        dateTimeEdit2->setGeometry(QRect(650, 70, 211, 51));
        dateTimeEdit2->setDateTime(QDateTime(QDate(2024, 8, 17), QTime(10, 0, 0)));
        guestsSpinBox2 = new QSpinBox(page_4);
        guestsSpinBox2->setObjectName("guestsSpinBox2");
        guestsSpinBox2->setGeometry(QRect(50, 310, 101, 41));
        guestsSpinBox2->setFont(font3);
        nameLineEdit2 = new QLineEdit(page_4);
        nameLineEdit2->setObjectName("nameLineEdit2");
        nameLineEdit2->setGeometry(QRect(50, 90, 251, 41));
        nameLineEdit2->setFont(font3);
        referenceLineEdit = new QLineEdit(page_4);
        referenceLineEdit->setObjectName("referenceLineEdit");
        referenceLineEdit->setGeometry(QRect(50, 400, 121, 61));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setItalic(true);
        referenceLineEdit->setFont(font7);
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 170, 401, 21));
        label_10->setFont(font4);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        cancelReservationButton = new QPushButton(page_5);
        cancelReservationButton->setObjectName("cancelReservationButton");
        cancelReservationButton->setGeometry(QRect(490, 430, 231, 101));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setItalic(true);
        cancelReservationButton->setFont(font8);
        cancelReservationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(page_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(430, 240, 441, 31));
        label_11->setFont(font4);
        referenceLineEdit2 = new QLineEdit(page_5);
        referenceLineEdit2->setObjectName("referenceLineEdit2");
        referenceLineEdit2->setGeometry(QRect(550, 290, 121, 61));
        referenceLineEdit2->setFont(font7);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        createReservationButton3 = new QPushButton(page_6);
        createReservationButton3->setObjectName("createReservationButton3");
        createReservationButton3->setGeometry(QRect(960, 290, 211, 91));
        createReservationButton3->setFont(font5);
        createReservationButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(page_6);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 35, 351, 21));
        label_3->setFont(font4);
        nameLineEdit3 = new QLineEdit(page_6);
        nameLineEdit3->setObjectName("nameLineEdit3");
        nameLineEdit3->setGeometry(QRect(50, 70, 251, 41));
        nameLineEdit3->setFont(font3);
        dateTimeEdit3 = new QDateTimeEdit(page_6);
        dateTimeEdit3->setObjectName("dateTimeEdit3");
        dateTimeEdit3->setGeometry(QRect(630, 100, 211, 51));
        QFont font9;
        font9.setPointSize(12);
        font9.setBold(true);
        dateTimeEdit3->setFont(font9);
        dateTimeEdit3->setDateTime(QDateTime(QDate(2024, 8, 17), QTime(10, 0, 0)));
        label_12 = new QLabel(page_6);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(630, 60, 351, 21));
        label_12->setFont(font4);
        label_13 = new QLabel(page_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 160, 401, 21));
        label_13->setFont(font4);
        guestsSpinBox3 = new QSpinBox(page_6);
        guestsSpinBox3->setObjectName("guestsSpinBox3");
        guestsSpinBox3->setGeometry(QRect(50, 320, 101, 41));
        guestsSpinBox3->setFont(font3);
        contactLineEdit3 = new QLineEdit(page_6);
        contactLineEdit3->setObjectName("contactLineEdit3");
        contactLineEdit3->setGeometry(QRect(50, 200, 141, 41));
        contactLineEdit3->setFont(font3);
        viewAvailabilityButton3 = new QPushButton(page_6);
        viewAvailabilityButton3->setObjectName("viewAvailabilityButton3");
        viewAvailabilityButton3->setGeometry(QRect(960, 390, 211, 91));
        viewAvailabilityButton3->setFont(font5);
        viewAvailabilityButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        label_14 = new QLabel(page_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(50, 290, 311, 21));
        label_14->setFont(font4);
        modifyReservationButton3 = new QPushButton(page_6);
        modifyReservationButton3->setObjectName("modifyReservationButton3");
        modifyReservationButton3->setGeometry(QRect(960, 490, 231, 91));
        modifyReservationButton3->setFont(font5);
        modifyReservationButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(0, 0, 0);"));
        cancelReservationButton3 = new QPushButton(page_6);
        cancelReservationButton3->setObjectName("cancelReservationButton3");
        cancelReservationButton3->setGeometry(QRect(960, 590, 271, 91));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Segoe UI")});
        font10.setPointSize(18);
        font10.setBold(true);
        font10.setItalic(true);
        cancelReservationButton3->setFont(font10);
        cancelReservationButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        referenceLineEdit3 = new QLineEdit(page_6);
        referenceLineEdit3->setObjectName("referenceLineEdit3");
        referenceLineEdit3->setGeometry(QRect(50, 590, 121, 61));
        referenceLineEdit3->setFont(font7);
        label_15 = new QLabel(page_6);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 550, 441, 31));
        label_15->setFont(font4);
        textEdit_2 = new QTextEdit(page_6);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(880, 90, 351, 191));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        btnRESER = new QPushButton(page_7);
        btnRESER->setObjectName("btnRESER");
        btnRESER->setGeometry(QRect(510, 240, 231, 101));
        btnRESER->setFont(font2);
        btnTABLES = new QPushButton(page_7);
        btnTABLES->setObjectName("btnTABLES");
        btnTABLES->setGeometry(QRect(510, 360, 231, 91));
        btnTABLES->setFont(font2);
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        ShowAvailableTables = new QPushButton(page_8);
        ShowAvailableTables->setObjectName("ShowAvailableTables");
        ShowAvailableTables->setGeometry(QRect(350, 480, 141, 51));
        ShowAvailableTables->setFont(font1);
        CapacityspinBox = new QSpinBox(page_8);
        CapacityspinBox->setObjectName("CapacityspinBox");
        CapacityspinBox->setGeometry(QRect(100, 360, 71, 41));
        AddTable = new QPushButton(page_8);
        AddTable->setObjectName("AddTable");
        AddTable->setGeometry(QRect(600, 150, 141, 51));
        AddTable->setFont(font1);
        NumberTablespinBox = new QSpinBox(page_8);
        NumberTablespinBox->setObjectName("NumberTablespinBox");
        NumberTablespinBox->setGeometry(QRect(100, 190, 71, 41));
        RemoveTable = new QPushButton(page_8);
        RemoveTable->setObjectName("RemoveTable");
        RemoveTable->setGeometry(QRect(600, 260, 141, 51));
        RemoveTable->setFont(font1);
        label_16 = new QLabel(page_8);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(100, 160, 351, 21));
        label_16->setFont(font4);
        label_17 = new QLabel(page_8);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(100, 330, 351, 21));
        label_17->setFont(font4);
        textEdit = new QTextEdit(page_8);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(830, 190, 351, 141));
        viewAvailabilityButton4 = new QPushButton(page_8);
        viewAvailabilityButton4->setObjectName("viewAvailabilityButton4");
        viewAvailabilityButton4->setGeometry(QRect(560, 350, 211, 91));
        viewAvailabilityButton4->setFont(font5);
        viewAvailabilityButton4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_8);
        btnRegresar = new QPushButton(centralwidget);
        btnRegresar->setObjectName("btnRegresar");
        btnRegresar->setGeometry(QRect(980, 760, 241, 41));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        btnRegresar->setFont(font11);
        btnRegresar2 = new QPushButton(centralwidget);
        btnRegresar2->setObjectName("btnRegresar2");
        btnRegresar2->setGeometry(QRect(980, 710, 241, 41));
        btnRegresar2->setFont(font11);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1259, 21));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        pushButton->setText(QCoreApplication::translate("cframe", "Cliente", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "Admin", nullptr));
        btnCERRAR->setText(QCoreApplication::translate("cframe", "Cerrar Programa", nullptr));
        btnReservar->setText(QCoreApplication::translate("cframe", "Reservar Mesa", nullptr));
        btnMod->setText(QCoreApplication::translate("cframe", "Modificar Reservacion", nullptr));
        btnCancel->setText(QCoreApplication::translate("cframe", "Cancelar Reservacion", nullptr));
        btnSalir->setText(QCoreApplication::translate("cframe", "Salir Sistema", nullptr));
        label->setText(QCoreApplication::translate("cframe", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Numero de Contacto SIN GUION:", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "Cantidad de Comensales:", nullptr));
        createReservationButton->setText(QCoreApplication::translate("cframe", "Crear Reservacion", nullptr));
        viewAvailabilityButton->setText(QCoreApplication::translate("cframe", "Ver disponiblidad", nullptr));
        label_5->setText(QCoreApplication::translate("cframe", "Fecha A Reservar:", nullptr));
        label_6->setText(QCoreApplication::translate("cframe", "Fecha A Reservar:", nullptr));
        label_7->setText(QCoreApplication::translate("cframe", "Numero de referencia", nullptr));
        modifyReservationButton->setText(QCoreApplication::translate("cframe", "Modificar Reservacion", nullptr));
        label_8->setText(QCoreApplication::translate("cframe", "Nombre:", nullptr));
        label_9->setText(QCoreApplication::translate("cframe", "Cantidad de Comensales:", nullptr));
        label_10->setText(QCoreApplication::translate("cframe", "Numero de Contacto SIN GUION:", nullptr));
        cancelReservationButton->setText(QCoreApplication::translate("cframe", "Cancelar Reservacion", nullptr));
        label_11->setText(QCoreApplication::translate("cframe", "Ingrese su Numero de referencia", nullptr));
        createReservationButton3->setText(QCoreApplication::translate("cframe", "Crear Reservacion", nullptr));
        label_3->setText(QCoreApplication::translate("cframe", "Nombre:", nullptr));
        label_12->setText(QCoreApplication::translate("cframe", "Fecha A Reservar:", nullptr));
        label_13->setText(QCoreApplication::translate("cframe", "Numero de Contacto SIN GUION:", nullptr));
        viewAvailabilityButton3->setText(QCoreApplication::translate("cframe", "Ver disponiblidad", nullptr));
        label_14->setText(QCoreApplication::translate("cframe", "Cantidad de Comensales:", nullptr));
        modifyReservationButton3->setText(QCoreApplication::translate("cframe", "Modificar Reservacion", nullptr));
        cancelReservationButton3->setText(QCoreApplication::translate("cframe", "Cancelar Reservacion", nullptr));
        label_15->setText(QCoreApplication::translate("cframe", "Ingrese su Numero de referencia", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("cframe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#aa0000;\">Recuerde que.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Ingrese el Numero de Referencia solo para Modificar o Eliminar una Reservacion</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Para Modificar una Reservacion, ingrese los datos nuevos en los campos dados e ingrese el numero de referencia de reservacion y puede darle click al botn y hacer efectiva la modificacion</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Para Eliminar una Reservacion basta con ingresar el NUMERO DE REFERENCIA de dicha reserva</p></body></html>", nullptr));
        btnRESER->setText(QCoreApplication::translate("cframe", "Opciones en Reservas", nullptr));
        btnTABLES->setText(QCoreApplication::translate("cframe", "Opciones de Mesas", nullptr));
        ShowAvailableTables->setText(QCoreApplication::translate("cframe", "Show", nullptr));
        AddTable->setText(QCoreApplication::translate("cframe", "A\303\261adir Mesa", nullptr));
        RemoveTable->setText(QCoreApplication::translate("cframe", "Eliminar Mesa", nullptr));
        label_16->setText(QCoreApplication::translate("cframe", "ID DE MESA", nullptr));
        label_17->setText(QCoreApplication::translate("cframe", "CAPACIDAD DE MESA", nullptr));
        textEdit->setHtml(QCoreApplication::translate("cframe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#aa0000;\">Recuerde que.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Para a\303\261adir una mesa debe ingresar un ID y una Capacidad.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Para Eliminar una mesa basta con ingresa solo el ID</p></body></html>", nullptr));
        viewAvailabilityButton4->setText(QCoreApplication::translate("cframe", "Ver Mesas", nullptr));
        btnRegresar->setText(QCoreApplication::translate("cframe", "Regresar Menu Principal", nullptr));
        btnRegresar2->setText(QCoreApplication::translate("cframe", "Regresar Menu Principal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
