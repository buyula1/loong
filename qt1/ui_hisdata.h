/********************************************************************************
** Form generated from reading UI file 'hisdata.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISDATA_H
#define UI_HISDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hisdata
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *hisdata)
    {
        if (hisdata->objectName().isEmpty())
            hisdata->setObjectName("hisdata");
        hisdata->resize(530, 400);
        hisdata->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border-image: url(:/imager/87424d5b535082fb0a2f26d438d662ac4a48173afed004-6dQ3lq_fw658.webp);\n"
"}"));
        label = new QLabel(hisdata);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 0, 550, 400));
        label->setMinimumSize(QSize(550, 400));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imager/beijin2.png")));
        pushButton = new QPushButton(hisdata);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 10, 89, 25));
        textEdit = new QTextEdit(hisdata);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(43, 49, 441, 321));
        textEdit->setStyleSheet(QString::fromUtf8("#textEdit{\n"
"background-color:rgba(255,255,255,0.5)\n"
"}\n"
""));
        pushButton_2 = new QPushButton(hisdata);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(488, 0, 41, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/imager/close.png);"));

        retranslateUi(hisdata);

        QMetaObject::connectSlotsByName(hisdata);
    } // setupUi

    void retranslateUi(QWidget *hisdata)
    {
        hisdata->setWindowTitle(QCoreApplication::translate("hisdata", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("hisdata", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hisdata: public Ui_hisdata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISDATA_H
