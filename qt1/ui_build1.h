/********************************************************************************
** Form generated from reading UI file 'build1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILD1_H
#define UI_BUILD1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_build1
{
public:
    QLabel *label;
    QPushButton *but1;
    QPushButton *but2;
    QPushButton *but3;
    QPushButton *but4;
    QWidget *widget;
    QTextEdit *textEdit01a;
    QTextEdit *textEdit01b;
    QTextEdit *textEdit01c;
    QTextEdit *textEdit02a;
    QTextEdit *textEdit02b;
    QTextEdit *textEdit02c;
    QTextEdit *textEdit03a;
    QTextEdit *textEdit03b;
    QTextEdit *textEdit_9;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QPushButton *but;

    void setupUi(QWidget *build1)
    {
        if (build1->objectName().isEmpty())
            build1->setObjectName("build1");
        build1->resize(890, 633);
        build1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border-image: url(:/imager/R-C.jpg);\n"
"}\n"
"QPushButton#but1\n"
"{\n"
"	border-image: url(:/imager/close.png);\n"
"}"));
        label = new QLabel(build1);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 771, 531));
        label->setMinimumSize(QSize(600, 425));
        but1 = new QPushButton(build1);
        but1->setObjectName("but1");
        but1->setGeometry(QRect(720, 0, 40, 40));
        but1->setMinimumSize(QSize(40, 40));
        but2 = new QPushButton(build1);
        but2->setObjectName("but2");
        but2->setGeometry(QRect(0, 130, 89, 25));
        but3 = new QPushButton(build1);
        but3->setObjectName("but3");
        but3->setGeometry(QRect(0, 170, 89, 25));
        but4 = new QPushButton(build1);
        but4->setObjectName("but4");
        but4->setGeometry(QRect(58, 424, 91, 41));
        but4->setCheckable(true);
        widget = new QWidget(build1);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 30, 601, 361));
        textEdit01a = new QTextEdit(widget);
        textEdit01a->setObjectName("textEdit01a");
        textEdit01a->setGeometry(QRect(20, 20, 104, 70));
        textEdit01b = new QTextEdit(widget);
        textEdit01b->setObjectName("textEdit01b");
        textEdit01b->setGeometry(QRect(140, 20, 104, 70));
        textEdit01c = new QTextEdit(widget);
        textEdit01c->setObjectName("textEdit01c");
        textEdit01c->setGeometry(QRect(260, 20, 104, 70));
        textEdit02a = new QTextEdit(widget);
        textEdit02a->setObjectName("textEdit02a");
        textEdit02a->setGeometry(QRect(20, 100, 104, 70));
        textEdit02b = new QTextEdit(widget);
        textEdit02b->setObjectName("textEdit02b");
        textEdit02b->setGeometry(QRect(140, 100, 104, 70));
        textEdit02c = new QTextEdit(widget);
        textEdit02c->setObjectName("textEdit02c");
        textEdit02c->setGeometry(QRect(260, 100, 104, 70));
        textEdit03a = new QTextEdit(widget);
        textEdit03a->setObjectName("textEdit03a");
        textEdit03a->setGeometry(QRect(20, 170, 104, 70));
        textEdit03b = new QTextEdit(widget);
        textEdit03b->setObjectName("textEdit03b");
        textEdit03b->setGeometry(QRect(140, 170, 104, 70));
        textEdit_9 = new QTextEdit(widget);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(260, 170, 104, 70));
        comboBox = new QComboBox(build1);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 480, 86, 25));
        textEdit = new QTextEdit(build1);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(200, 420, 301, 101));
        but = new QPushButton(build1);
        but->setObjectName("but");
        but->setGeometry(QRect(10, 80, 71, 31));

        retranslateUi(build1);

        QMetaObject::connectSlotsByName(build1);
    } // setupUi

    void retranslateUi(QWidget *build1)
    {
        build1->setWindowTitle(QCoreApplication::translate("build1", "Form", nullptr));
        label->setText(QString());
        but1->setText(QString());
        but2->setText(QCoreApplication::translate("build1", "PushButton", nullptr));
        but3->setText(QCoreApplication::translate("build1", "PushButton", nullptr));
        but4->setText(QCoreApplication::translate("build1", "\346\211\223\345\274\200", nullptr));
        but->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class build1: public Ui_build1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILD1_H
