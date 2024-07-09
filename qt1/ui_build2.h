/********************************************************************************
** Form generated from reading UI file 'build2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILD2_H
#define UI_BUILD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_build2
{
public:
    QPushButton *set_b;
    QTextEdit *textEdit;
    QTextEdit *textEdit_c_2;
    QTextEdit *textEdit_b_2;
    QTextEdit *textEdit_b_3;
    QPushButton *pushButton_fire;
    QPushButton *set_c;
    QPushButton *pushButton_ppm;
    QTextEdit *textEdit_b_1;
    QTextEdit *textEdit_a_2;
    QPushButton *pushButton_off;
    QTextEdit *textEdit_b_4;
    QPushButton *pushButton_temp;
    QPushButton *pushButton_log;
    QTextEdit *textEdit_a_4;
    QTextEdit *textEdit_c_1;
    QTextEdit *textEdit_c_3;
    QTextEdit *textEdit_a_3;
    QPushButton *pushButton_history;
    QTextEdit *textEdit_c_4;
    QPushButton *set_a;
    QPushButton *pushButton_begin;
    QTextEdit *textEdit_a_1;
    QPushButton *pushButton_hum;

    void setupUi(QWidget *build2)
    {
        if (build2->objectName().isEmpty())
            build2->setObjectName("build2");
        build2->resize(1053, 662);
        set_b = new QPushButton(build2);
        set_b->setObjectName("set_b");
        set_b->setGeometry(QRect(290, 180, 31, 21));
        QFont font;
        font.setPointSize(14);
        set_b->setFont(font);
        set_b->setIconSize(QSize(16, 16));
        textEdit = new QTextEdit(build2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(270, 320, 491, 181));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8(""));
        textEdit_c_2 = new QTextEdit(build2);
        textEdit_c_2->setObjectName("textEdit_c_2");
        textEdit_c_2->setGeometry(QRect(480, 230, 104, 31));
        textEdit_b_2 = new QTextEdit(build2);
        textEdit_b_2->setObjectName("textEdit_b_2");
        textEdit_b_2->setGeometry(QRect(480, 190, 104, 31));
        textEdit_b_3 = new QTextEdit(build2);
        textEdit_b_3->setObjectName("textEdit_b_3");
        textEdit_b_3->setGeometry(QRect(1168, 356, 104, 31));
        pushButton_fire = new QPushButton(build2);
        pushButton_fire->setObjectName("pushButton_fire");
        pushButton_fire->setGeometry(QRect(250, 540, 111, 61));
        pushButton_fire->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_h.png);"));
        pushButton_fire->setFlat(true);
        set_c = new QPushButton(build2);
        set_c->setObjectName("set_c");
        set_c->setGeometry(QRect(290, 210, 31, 21));
        set_c->setFont(font);
        set_c->setIconSize(QSize(16, 16));
        pushButton_ppm = new QPushButton(build2);
        pushButton_ppm->setObjectName("pushButton_ppm");
        pushButton_ppm->setGeometry(QRect(380, 540, 111, 61));
        pushButton_ppm->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_j.png);"));
        pushButton_ppm->setFlat(true);
        textEdit_b_1 = new QTextEdit(build2);
        textEdit_b_1->setObjectName("textEdit_b_1");
        textEdit_b_1->setGeometry(QRect(360, 190, 104, 31));
        textEdit_a_2 = new QTextEdit(build2);
        textEdit_a_2->setObjectName("textEdit_a_2");
        textEdit_a_2->setGeometry(QRect(480, 150, 104, 31));
        pushButton_off = new QPushButton(build2);
        pushButton_off->setObjectName("pushButton_off");
        pushButton_off->setGeometry(QRect(1320, 740, 111, 101));
        QFont font1;
        font1.setPointSize(16);
        pushButton_off->setFont(font1);
        pushButton_off->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_m.png);"));
        pushButton_off->setFlat(true);
        textEdit_b_4 = new QTextEdit(build2);
        textEdit_b_4->setObjectName("textEdit_b_4");
        textEdit_b_4->setGeometry(QRect(1310, 356, 104, 31));
        pushButton_temp = new QPushButton(build2);
        pushButton_temp->setObjectName("pushButton_temp");
        pushButton_temp->setGeometry(QRect(70, 230, 111, 71));
        pushButton_temp->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_w.png);"));
        pushButton_temp->setFlat(true);
        pushButton_log = new QPushButton(build2);
        pushButton_log->setObjectName("pushButton_log");
        pushButton_log->setGeometry(QRect(250, 600, 111, 61));
        pushButton_log->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_r.png);"));
        pushButton_log->setFlat(true);
        textEdit_a_4 = new QTextEdit(build2);
        textEdit_a_4->setObjectName("textEdit_a_4");
        textEdit_a_4->setGeometry(QRect(1310, 318, 104, 31));
        textEdit_c_1 = new QTextEdit(build2);
        textEdit_c_1->setObjectName("textEdit_c_1");
        textEdit_c_1->setGeometry(QRect(360, 230, 104, 31));
        textEdit_c_3 = new QTextEdit(build2);
        textEdit_c_3->setObjectName("textEdit_c_3");
        textEdit_c_3->setGeometry(QRect(1168, 396, 104, 31));
        textEdit_a_3 = new QTextEdit(build2);
        textEdit_a_3->setObjectName("textEdit_a_3");
        textEdit_a_3->setGeometry(QRect(1168, 318, 104, 31));
        pushButton_history = new QPushButton(build2);
        pushButton_history->setObjectName("pushButton_history");
        pushButton_history->setGeometry(QRect(380, 600, 111, 61));
        pushButton_history->setStyleSheet(QString::fromUtf8("image: url(:/new/image/icon_l.png);"));
        pushButton_history->setFlat(true);
        textEdit_c_4 = new QTextEdit(build2);
        textEdit_c_4->setObjectName("textEdit_c_4");
        textEdit_c_4->setGeometry(QRect(1310, 396, 104, 31));
        set_a = new QPushButton(build2);
        set_a->setObjectName("set_a");
        set_a->setGeometry(QRect(290, 160, 31, 21));
        set_a->setFont(font);
        set_a->setIconSize(QSize(16, 16));
        pushButton_begin = new QPushButton(build2);
        pushButton_begin->setObjectName("pushButton_begin");
        pushButton_begin->setGeometry(QRect(560, 550, 101, 111));
        QFont font2;
        font2.setPointSize(15);
        pushButton_begin->setFont(font2);
        pushButton_begin->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_c.png);"));
        pushButton_begin->setFlat(true);
        textEdit_a_1 = new QTextEdit(build2);
        textEdit_a_1->setObjectName("textEdit_a_1");
        textEdit_a_1->setGeometry(QRect(360, 150, 104, 31));
        pushButton_hum = new QPushButton(build2);
        pushButton_hum->setObjectName("pushButton_hum");
        pushButton_hum->setGeometry(QRect(380, 470, 111, 71));
        pushButton_hum->setStyleSheet(QString::fromUtf8("image: url(:/new/image/ico_s.png);"));
        pushButton_hum->setFlat(true);

        retranslateUi(build2);

        QMetaObject::connectSlotsByName(build2);
    } // setupUi

    void retranslateUi(QWidget *build2)
    {
        build2->setWindowTitle(QCoreApplication::translate("build2", "Form", nullptr));
        set_b->setText(QString());
        pushButton_fire->setText(QString());
        set_c->setText(QString());
        pushButton_ppm->setText(QString());
        pushButton_off->setText(QCoreApplication::translate("build2", "End", nullptr));
        pushButton_temp->setText(QString());
        pushButton_log->setText(QString());
        pushButton_history->setText(QString());
        set_a->setText(QString());
        pushButton_begin->setText(QCoreApplication::translate("build2", "Start", nullptr));
        pushButton_hum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class build2: public Ui_build2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILD2_H
