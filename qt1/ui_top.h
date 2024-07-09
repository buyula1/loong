/********************************************************************************
** Form generated from reading UI file 'top.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOP_H
#define UI_TOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_top
{
public:
    QLabel *label;
    QPushButton *but1;
    QPushButton *but2;
    QPushButton *but3;
    QPushButton *but4;
    QPushButton *but5;
    QPushButton *but6;
    QPushButton *but7;
    QTextEdit *textEdit;

    void setupUi(QWidget *top)
    {
        if (top->objectName().isEmpty())
            top->setObjectName("top");
        top->resize(880, 580);
        top->setMinimumSize(QSize(880, 580));
        top->setMaximumSize(QSize(880, 580));
        top->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border-image: url(:/imager/2000.jpg);\n"
"}\n"
"QPushButton#but1\n"
"{\n"
"	border-image: url(:/imager/2201.png);\n"
"}\n"
"QPushButton#but2\n"
"{\n"
"	\n"
"	border-image: url(:/imager/2002.png);\n"
"}\n"
"QPushButton#but3\n"
"{\n"
"	\n"
"border-image: url(:/imager/2003.png);\n"
"}\n"
"QPushButton#but4\n"
"{\n"
"	\n"
"	border-image: url(:/imager/2005.png);\n"
"}\n"
"QPushButton#but5\n"
"{\n"
"	border-image: url(:/imager/2007.png);\n"
"}\n"
"QPushButton#but6\n"
"{\n"
"	\n"
"	border-image: url(:/imager/2006.png);\n"
"}\n"
"QPushButton#but7\n"
"{\n"
"  \n"
"	border-image: url(:/imager/2004.png);\n"
"}\n"
".QTextEdit\n"
"{\n"
"  background-color:rgb(35,28,46);\n"
"}"));
        label = new QLabel(top);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 880, 580));
        label->setMinimumSize(QSize(880, 580));
        label->setMaximumSize(QSize(880, 580));
        but1 = new QPushButton(top);
        but1->setObjectName("but1");
        but1->setGeometry(QRect(-10, 190, 281, 181));
        but2 = new QPushButton(top);
        but2->setObjectName("but2");
        but2->setGeometry(QRect(190, 100, 151, 151));
        but3 = new QPushButton(top);
        but3->setObjectName("but3");
        but3->setGeometry(QRect(360, 60, 171, 131));
        but4 = new QPushButton(top);
        but4->setObjectName("but4");
        but4->setGeometry(QRect(380, 200, 161, 131));
        but5 = new QPushButton(top);
        but5->setObjectName("but5");
        but5->setGeometry(QRect(670, 170, 151, 151));
        but6 = new QPushButton(top);
        but6->setObjectName("but6");
        but6->setGeometry(QRect(510, 270, 151, 121));
        but7 = new QPushButton(top);
        but7->setObjectName("but7");
        but7->setGeometry(QRect(390, 330, 141, 131));
        textEdit = new QTextEdit(top);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(230, 0, 401, 41));

        retranslateUi(top);

        QMetaObject::connectSlotsByName(top);
    } // setupUi

    void retranslateUi(QWidget *top)
    {
        top->setWindowTitle(QCoreApplication::translate("top", "Form", nullptr));
        label->setText(QString());
        but1->setText(QString());
        but2->setText(QString());
        but3->setText(QString());
        but4->setText(QString());
        but5->setText(QString());
        but6->setText(QString());
        but7->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("top", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#fce94f;\">\346\266\210\351\230\262\345\256\211\345\205\250\347\226\217\346\225\243\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class top: public Ui_top {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOP_H
