/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *let_passwd;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *letname;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *let_passwd2;
    QPushButton *but_reg;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(431, 343);
        Widget->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover\n"
"{ \n"
"    background-color:red;\n"
"}\n"
"\n"
""));
        horizontalLayoutWidget_3 = new QWidget(Widget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(60, 150, 271, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        let_passwd = new QLineEdit(horizontalLayoutWidget_3);
        let_passwd->setObjectName("let_passwd");

        horizontalLayout_3->addWidget(let_passwd);

        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(60, 90, 271, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        letname = new QLineEdit(horizontalLayoutWidget);
        letname->setObjectName("letname");

        horizontalLayout->addWidget(letname);

        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(60, 210, 271, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        let_passwd2 = new QLineEdit(horizontalLayoutWidget_2);
        let_passwd2->setObjectName("let_passwd2");

        horizontalLayout_2->addWidget(let_passwd2);

        but_reg = new QPushButton(Widget);
        but_reg->setObjectName("but_reg");
        but_reg->setGeometry(QRect(140, 280, 89, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "  \347\224\250\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", " *\345\257\206\347\240\201", nullptr));
        but_reg->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
