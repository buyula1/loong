/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QWidget *widget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QTextEdit *textEdit_a1;
    QLabel *label_3;
    QTextEdit *textEdit_b1;
    QLabel *label_4;
    QTextEdit *textEdit_c1;
    QPushButton *pushButton;
    QLabel *label_7;
    QWidget *widget_2;
    QLabel *label_6;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *but4;
    QComboBox *comboBox;
    QLabel *label;
    QWidget *widget_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(833, 581);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"\n"
"scrollArea\n"
"{\n"
"background-color:rgba(255,255,255,0.5)\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(270, 430, 351, 101));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(800, 0, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Umpush\";"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 80, 601, 331));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 30, 551, 281));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 279));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents\n"
"{\n"
"background-color:rgba(255,255,255,0.5)\n"
"}"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 81, 20));
        textEdit_a1 = new QTextEdit(scrollAreaWidgetContents);
        textEdit_a1->setObjectName("textEdit_a1");
        textEdit_a1->setGeometry(QRect(100, 20, 101, 31));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 30, 61, 20));
        textEdit_b1 = new QTextEdit(scrollAreaWidgetContents);
        textEdit_b1->setObjectName("textEdit_b1");
        textEdit_b1->setGeometry(QRect(270, 20, 100, 31));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 30, 61, 21));
        textEdit_c1 = new QTextEdit(scrollAreaWidgetContents);
        textEdit_c1->setObjectName("textEdit_c1");
        textEdit_c1->setGeometry(QRect(430, 20, 100, 31));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 61, 21));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 101, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 500 15pt \"Ubuntu\";"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(50, 160, 131, 321));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2{\n"
"border: 1px solid #79E6E2;\n"
"border-radius: 5px;};\n"
""));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 40, 61, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 500 30pt \"Ubuntu\";"));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 130, 111, 31));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 111, 31));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 100, 111, 31));
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 190, 91, 31));
        but4 = new QPushButton(widget_2);
        but4->setObjectName("but4");
        but4->setGeometry(QRect(20, 230, 91, 41));
        but4->setCheckable(true);
        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 280, 86, 25));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 130, 81, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Umpush\";"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(310, 10, 211, 41));
        widget_3->setStyleSheet(QString::fromUtf8("border-image: url(:/imager/beijin4.jpg);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\2711\357\274\232\346\226\271\345\220\221", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\201\253\347\204\260\345\274\272\345\272\246", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240\350\212\202\347\202\271", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\225\260\346\215\256\345\214\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\207\217\345\260\221\345\217\257\350\257\273\350\212\202\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\244\247\345\217\257\350\257\273\350\212\202\347\202\271\346\225\260\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240\345\217\257\350\257\273\350\212\202\347\202\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", nullptr));
        but4->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275\345\214\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
