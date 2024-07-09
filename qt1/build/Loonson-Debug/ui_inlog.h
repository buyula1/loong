/********************************************************************************
** Form generated from reading UI file 'inlog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INLOG_H
#define UI_INLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inlog
{
public:
    QLabel *labtop;
    QPushButton *btnmin;
    QPushButton *btnclose;
    QWidget *widget;
    QPushButton *but_reg;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *let_name;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *let_passwd;
    QCheckBox *checkBox;
    QPushButton *but_inlog;

    void setupUi(QWidget *inlog)
    {
        if (inlog->objectName().isEmpty())
            inlog->setObjectName(QString::fromUtf8("inlog"));
        inlog->resize(430, 330);
        inlog->setMinimumSize(QSize(430, 330));
        inlog->setMaximumSize(QSize(430, 330));
        inlog->setStyleSheet(QString::fromUtf8("\n"
".QWidge\n"
"{\n"
"	\n"
"	background-color: rgb(243, 243, 243);\n"
"}\n"
"QPushButton\n"
"{\n"
"    border:one;\n"
"}\n"
"QPushButton#btnmin\n"
"{\n"
"	image: url(:/imager/minus.png);\n"
"}\n"
"QPushButton#btnclose\n"
"{\n"
"	\n"
"	image: url(:/imager/close.png);\n"
"}\n"
"QPushButton#btnclose:hover\n"
"{\n"
"	image: url(:/imager/close.png);\n"
"}"));
        labtop = new QLabel(inlog);
        labtop->setObjectName(QString::fromUtf8("labtop"));
        labtop->setGeometry(QRect(0, 0, 430, 150));
        labtop->setMinimumSize(QSize(430, 150));
        labtop->setMaximumSize(QSize(430, 150));
        labtop->setStyleSheet(QString::fromUtf8("border-image: url(:/imager/beijin3.png);"));
        btnmin = new QPushButton(inlog);
        btnmin->setObjectName(QString::fromUtf8("btnmin"));
        btnmin->setGeometry(QRect(370, 0, 32, 32));
        btnmin->setMinimumSize(QSize(32, 32));
        btnmin->setMaximumSize(QSize(32, 32));
        btnclose = new QPushButton(inlog);
        btnclose->setObjectName(QString::fromUtf8("btnclose"));
        btnclose->setGeometry(QRect(400, 0, 32, 32));
        btnclose->setMinimumSize(QSize(32, 32));
        btnclose->setMaximumSize(QSize(32, 32));
        widget = new QWidget(inlog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 150, 431, 181));
        but_reg = new QPushButton(widget);
        but_reg->setObjectName(QString::fromUtf8("but_reg"));
        but_reg->setGeometry(QRect(340, 150, 89, 25));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 30, 271, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        let_name = new QLineEdit(horizontalLayoutWidget);
        let_name->setObjectName(QString::fromUtf8("let_name"));

        horizontalLayout->addWidget(let_name);

        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(80, 80, 271, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        let_passwd = new QLineEdit(horizontalLayoutWidget_2);
        let_passwd->setObjectName(QString::fromUtf8("let_passwd"));

        horizontalLayout_2->addWidget(let_passwd);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(360, 90, 92, 23));
        but_inlog = new QPushButton(widget);
        but_inlog->setObjectName(QString::fromUtf8("but_inlog"));
        but_inlog->setGeometry(QRect(110, 140, 181, 31));
        but_inlog->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Ubuntu Condensed\";"));

        retranslateUi(inlog);

        QMetaObject::connectSlotsByName(inlog);
    } // setupUi

    void retranslateUi(QWidget *inlog)
    {
        inlog->setWindowTitle(QCoreApplication::translate("inlog", "Form", nullptr));
        labtop->setText(QString());
        btnmin->setText(QString());
        btnclose->setText(QString());
        but_reg->setText(QCoreApplication::translate("inlog", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("inlog", "   \347\224\250\346\210\267", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("inlog", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("inlog", "\346\230\276\347\244\272", nullptr));
        but_inlog->setText(QCoreApplication::translate("inlog", "\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inlog: public Ui_inlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INLOG_H
