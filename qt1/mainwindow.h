#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

#define TIMEOUT 1*500
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void    Read_Data1();
    void    timeoutslot();
    void on_but4_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    void addItem1(QString name,QString name1,QString name2,QString name3);
    int m_iLabNum=2;
    void openSerial1();
    void dataHandle1(QByteArray &data);
    QSerialPort *SerialPort;
    QSerialPort *serialPort_2;
    QMenu *pmenuFile;
    QAction *pACtNew;
    QAction *pActopen;
    QByteArray buf;     //缓存区
    QByteArray buf_1;   //缓存区1
    QTimer *timer;
    int bitid;
};

#endif // MAINWINDOW_H
