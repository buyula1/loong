#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "top.h"
#include "hisdata.h"
#include <QScrollArea>
#include <QString>
#include <QChart>
#include <QString>
#include <QMessageBox>
#include <QChartView>
#include <QDateTime>
QTimer *check1 = new QTimer();
int max=10;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer;
    bitid=1;
    SerialPort = new QSerialPort(this);
    serialPort_2 = new QSerialPort(this);
    //扫描本机串口
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->comboBox->addItem(info.portName());
    }


    check1->start(500);
    connect(SerialPort, SIGNAL(readyRead()),this, SLOT(Read_Data1()));
    //定时器时间到发出timeout信号
   // connect(timer,&QTimer::timeout,this,MainWindow::timeoutslot);

    ui->label_6->setText(QString::number(max));
    this->setObjectName("MainWindow");
    this->setStyleSheet("QMainWindow#MainWindow{border-image:url(:/imager/beiji2.jpg);}");

    //this->setStyleSheet("QWidget#widget_2{border: 1px solid #FF00FF; border-radius: 5px;}");
    //this->setStyleSheet("#mainWindow{border-image:url(:/imager/beiji1.jpg);}");
}

MainWindow::~MainWindow()
{
    delete ui;
}
int warn1 = 0, warn2 = 0,warn3 = 0,warn4 = 0;
int warnn = 0;
void MainWindow::dataHandle1(QByteArray &data)
{

    QJsonParseError json_error;
    QJsonDocument jsonDoc(QJsonDocument::fromJson(data, &json_error));
    if(json_error.error != QJsonParseError::NoError)
    {
        return ;
    }
    QJsonObject rootObj = jsonDoc.object();
    QStringList keys = rootObj.keys();
    QJsonValue ID = rootObj.value("ID");
    int id = ID.toInt();
    double temp_x = 0;
    int dir_x = 0;
    double ppm_x = 0;
    double fire_x = 0;
    for(int i=1;i<max;i++)
    {
        if(id==100+i)
        {
            qDebug()<<"12";
            QDateTime current_date_time =QDateTime::currentDateTime();
            QJsonValue Direction = rootObj.value("dir");     //判断火灾位置
            int direction = Direction.toInt();
            dir_x = direction;
            QString dir_text;
            if(dir_x==0)
            {
                dir_text= QString("无火源");

            }
            else if(dir_x==1)
            {
                dir_text= QString("左侧有火源");
            }
            else if(dir_x==2)
            {
                dir_text= QString("右侧有火源");
            }
            else if(dir_x==3)
            {
                dir_text= QString("两边均有火源");
            }
            QTextEdit *te1 = this-> findChild<QTextEdit *>("textEdit_a"+QString::number(i));
            //QLabel *la1 = this->findChild<QLabel *>("label_"+QString::number(4));
            //la1->setText(dir_text);
            te1->setText(dir_text);

            ui-> textEdit_a1->setText(dir_text);

            QJsonValue Smoke = rootObj.value("Sm");
            double smoke = Smoke.toDouble();
            ppm_x = smoke;
            QString smoke_text = QString::number(smoke);
            QTextEdit *te2 = findChild<QTextEdit *>("textEdit_b"+QString::number(i));
            te2->setText(smoke_text);
            QString warning_text;
            if(smoke > 2800)
            {
                warn3 = 1;
                warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") +QString("%1楼烟雾浓度过高").arg(i);
                ui->textEdit->append(warning_text);
            }
            else
                warn3 =  0;
            QJsonValue Fire = rootObj.value("Fi");
            double fire = Fire.toDouble();
            fire_x = fire;
            QString fire_text = QString::number(fire);
            QTextEdit *te3 = findChild<QTextEdit *>("textEdit_c"+QString::number(i));
            te3->setText(fire_text);
            if(fire > 0)
            {
                warn4 = 1;
                warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss")  +QString("%1楼火焰强度为%2").arg(i).arg(fire);
                ui->textEdit->append(warning_text);
            }
            else
                warn4 = 0;

            QString str = current_date_time.toString("yyyy-MM-dd hh:mm:ss")+QString("节点%1").arg(i)+" 火焰强度 "+fire_text +" 烟雾浓度 "+smoke_text+"\n";
            QString filepath = QCoreApplication::applicationDirPath();
            QFile *file = new QFile(filepath + "/1.txt");
            file ->open(QIODevice::Append);
            file->write(str.toUtf8());
            file->close();
        }
    }

}
 int a = 0;
void MainWindow::Read_Data1()
{
    //qDebug()<<"串口已经打开111";
    buf = SerialPort->readAll();
    qDebug()<<buf;
    QString str = QString::fromLocal8Bit(buf);
    if(!buf.isEmpty())
    {
        buf_1.append(buf);
        if(buf_1.contains("}"))
        {
            a++;
            dataHandle1(buf_1);
            if(a == 1)
                serialPort_2->write(buf_1);
            if(a == 2)
                a = 0;

            buf_1.clear();
        }
    }
    buf.clear();
}

void MainWindow::on_but4_clicked()
{
    openSerial1();
    timer->start(TIMEOUT);

}
//定时器发送
void MainWindow::timeoutslot()
{
    QByteArray bit2;
    QString bit("loong:10");
    bit += QString::number(bitid);
   // SerialPort->write(bit2);
    bitid ++;
    if(bitid>5)
    {
        bitid =1;
    }

}
//按键打开串口
void MainWindow::openSerial1()
{

    SerialPort->setPortName("ttyS1");
    SerialPort->setBaudRate(QSerialPort::Baud115200);
    SerialPort->setDataBits(QSerialPort::Data8);
    SerialPort->setParity(QSerialPort::NoParity);
    SerialPort->setStopBits(QSerialPort::OneStop);
    SerialPort->setFlowControl(QSerialPort::NoFlowControl);
    SerialPort->open(QIODevice::ReadWrite);
    if(SerialPort->isOpen())
        qDebug()<<"串口已经打开";
    serialPort_2->setPortName("ttyS2");
    serialPort_2->setBaudRate(QSerialPort::Baud115200);
    serialPort_2->setDataBits(QSerialPort::Data8);
    serialPort_2->setParity(QSerialPort::NoParity);
    serialPort_2->setStopBits(QSerialPort::OneStop);
    serialPort_2->setFlowControl(QSerialPort::NoFlowControl);
    serialPort_2->open(QIODevice::ReadWrite);

}
//增加节点
void MainWindow::on_pushButton_clicked()
{

    QString name=QString("节点%1：").arg(m_iLabNum);
    QString name1=QString("方向：");
    QString name2=QString("烟雾浓度：");
    QString name3=QString("火焰强度：");
    addItem1(name,name1,name2,name3);
    qDebug()<<"1";
}
//动态增加节点
void MainWindow::addItem1(QString name,QString name1,QString name2,QString name3)
{

    QString color=QString("<font color=#999999>%1</font>").arg(name);
    QLabel*lab=new QLabel(ui->scrollAreaWidgetContents);
    lab->setText(color);
    lab->setGeometry(QRect(20,m_iLabNum*30-10,50,30));
    lab->setVisible(true);
    //火焰方向显示
    QString color1=QString("<font color=#333333>%1</font>").arg(name1);
    QLabel*lab1=new QLabel(ui->scrollAreaWidgetContents);
    lab1->setText(color1);
    lab1->setGeometry(QRect(70,m_iLabNum*30-10,90,30));
    lab1->setVisible(true);
    QTextEdit*text = new QTextEdit(ui->scrollAreaWidgetContents);
    QString id = QString("textEdit_a%1").arg(m_iLabNum);
    text->setObjectName(id);
    text->setGeometry(QRect(100,m_iLabNum*30-10,102,30));
    text->resize(100,30);
    text->setVisible(true);
    //烟雾浓度
    QString color2=QString("<font color=#333333>%1</font>").arg(name2);
    QLabel*lab2=new QLabel(ui->scrollAreaWidgetContents);
    lab2->setText(color2);
    lab2->setGeometry(QRect(210,m_iLabNum*30-10,260,30));
    lab2->setVisible(true);
    QTextEdit*text1 = new QTextEdit(ui->scrollAreaWidgetContents);
    QString id1 = QString("textEdit_b%1").arg(m_iLabNum);
    text1->setObjectName(id1);
    text1->setGeometry(QRect(270,m_iLabNum*30-10,272,30));
    text1->resize(100,30);
    text1->setVisible(true);
    //火焰强度
    QString color3=QString("<font color=#333333>%1</font>").arg(name3);
    QLabel*lab3=new QLabel(ui->scrollAreaWidgetContents);
    lab3->setText(color3);
    lab3->setGeometry(QRect(370,m_iLabNum*30-10,420,30));
    lab3->setVisible(true);
    QTextEdit*text2 = new QTextEdit(ui->scrollAreaWidgetContents);
    QString id2 = QString("textEdit_c%1").arg(m_iLabNum);
    text2->setObjectName(id2);
    text2->setGeometry(QRect(430,m_iLabNum*30-10,432,30));
    text2->resize(100,30);
    text2->setVisible(true);
    //标签大小+标签个数*间隔+初始y值
    if((m_iLabNum*30-10+30)>(ui->scrollAreaWidgetContents->height()-10))
    {
        int width=ui->scrollAreaWidgetContents->width();
        int height=ui->scrollAreaWidgetContents->height();
        ui->scrollAreaWidgetContents->setMinimumSize(width,height+30);
        qDebug()<<ui->scrollAreaWidgetContents->height();
    }
    m_iLabNum++;
}

//关闭页面
void MainWindow::on_pushButton_2_clicked()
{
    top *w = new top();
    w->show();
    this->hide();
}

//最大循环数据自加
void MainWindow::on_pushButton_3_clicked()
{
    max =ui->label_6->text().toInt();
    max +=5;
    ui->label_6->setText(QString::number(max));
}


void MainWindow::on_pushButton_4_clicked()
{
    max =ui->label_6->text().toInt();
    if(max>5)
    {
    max -=5;
    ui->label_6->setText(QString::number(max));
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    hisdata *w =new hisdata();
    w->show();
}

