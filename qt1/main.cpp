#include "widget.h"
#include "inlog.h"
#include "top.h"
#include "mainwindow.h"
#include <QApplication>
#include<QFile>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss(":/style.qss");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
    inlog w;
    //build1 w;
   // MainWindow w;
    w.show();
    return a.exec();
}
