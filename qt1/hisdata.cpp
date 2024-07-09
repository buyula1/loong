#include "hisdata.h"
#include "mainwindow.h"
#include "ui_hisdata.h"
#include <QFile>
#include <QFileDialog>
hisdata::hisdata(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hisdata)
{

    ui->setupUi(this);
    // QMovie * movie = new QMovie(this);//gif
    // movie->setFileName(":/imager/87424d5b535082fb0a2f26d438d662ac4a48173afed004-6dQ3lq_fw658.webp");
    // movie->start();
    // ui->label->setMovie(movie);
    QByteArray array;
    QString filepath = QCoreApplication::applicationDirPath();
    QFile *file = new QFile(filepath + "/1.txt");
    file->open(QIODevice::ReadOnly);
    array = file->readAll();
    file->close();
    ui->textEdit->setText(QString(array));
}

hisdata::~hisdata()
{
    delete ui;
}

void hisdata::on_pushButton_clicked()
{
    QString filepath = QCoreApplication::applicationDirPath();
    QFile *file = new QFile(filepath + "/1.txt");
    file->open(QIODevice::WriteOnly);
    file->close();
    ui->textEdit->clear();
}


void hisdata::on_pushButton_2_clicked()
{
    // MainWindow *w = new MainWindow();
    // w ->show();
    this->hide();
}

