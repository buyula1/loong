#include "top.h"
#include "ui_top.h"
#include "mainwindow.h"
#include <QGraphicsItem>
#include  <QPainter>
top::top(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::top)
{

    ui->setupUi(this);
    ui->but1->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2001.png);}"));
    ui->but2->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2002.png);}"));
    ui->but3->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2003.png);}"));
    ui->but4->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2005.png);}"));
    ui->but5->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2007.png);}"));
    ui->but6->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2006.png);}"));
    ui->but7->setStyleSheet(QString("QPushButton:hover{border-image:url(:/imager/a2004.png);}"));
}

top::~top()
{
    delete ui;
}

void top::on_but4_clicked()
{
     MainWindow *w = new MainWindow();
     w ->show();
     this->hide();
}


void top::on_but7_clicked()
{

}


void top::on_but6_clicked()
{

}


void top::on_but1_clicked()
{

}

