#ifndef BUILD1_H
#define BUILD1_H
#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QAction>
#include <QMenuBar>
#include <QMenu>
#include <QFileDialog>
#include<QList>
#include<QScrollArea>

namespace Ui {
class build1;
}

class build1 : public QWidget
{
    Q_OBJECT

public:
    // QByteArray buf;     //缓存区
    // QByteArray buf_1;   //缓存区1
    explicit build1(QWidget *parent = nullptr);
    ~build1();
    void  Read_Data();

private slots:
    void on_but1_clicked();

   // void  Read_Data();

    void on_but4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::build1 *ui;
    QSerialPort *SerialPort;
    QSerialPort *serialPort_2;
    QMenu *pmenuFile;
    QAction *pACtNew;
    QAction *pActopen;
    QByteArray buf;     //缓存区
    QByteArray buf_1;   //缓存区1
    void dataHandle(QByteArray &data);
    void openSerial();
    void addItem(QString name,QString name1,QString name2,QString name3);
    int m_iLabNum=2;
};

#endif // BUILD1_H
