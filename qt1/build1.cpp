#include "build1.h"
#include "ui_build1.h"
#include "top.h"
#include <QChart>
#include <QString>
#include <QMessageBox>
#include <QChartView>
#include <QDateTime>
QTimer *set_ch_1 = new QTimer();
QTimer *set_ch_2 = new QTimer();
QTimer *set_ch_3 = new QTimer();
QTimer *timer_n = new QTimer();

QList<double> data_temp_1;              //temp列表
QList<double> data_temp_2;
QList<double> data_temp_3;

QList<double> data_hum_1;              //hum列表
QList<double> data_hum_2;
QList<double> data_hum_3;

QList<double> data_ppm_1;              //ppm列表
QList<double> data_ppm_2;
QList<double> data_ppm_3;

QList<double> data_fire_1;              //fir列表
QList<double> data_fire_2;
QList<double> data_fire_3;

int set_1 = 0, set_2 = 0, set_3 = 0;
int flag_1 = 1,flag_2 = 1,flag_3 = 1;
QTimer *check = new QTimer();       //在线检查定时器
build1::build1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::build1)
{

    ui->setupUi(this);
    SerialPort = new QSerialPort(this);
    serialPort_2 = new QSerialPort(this);
    //扫描本机串口
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->comboBox->addItem(info.portName());
    }

    ui->but4->setStyleSheet(QString("QPushButton:pressed{background-color:red;}"));
    ui->but1->setStyleSheet(QString("QPushButton:hover{background-color:red;"));
    check->start(500);


     // connect(SerialPort, SIGNAL(readyRead()),this, SLOT(Read_Data()));

    bool ok=connect(SerialPort,&QSerialPort::readyRead,this,&build1::Read_Data);
      qDebug() << ok;
}

build1::~build1()
{
    delete ui;
}
//关闭建筑页面
void build1::on_but1_clicked()
{
    top *w = new top();
    w ->show();
    this->hide();
}



//按键打开串口
void build1::openSerial()
{

    SerialPort->setPortName("ttyUSB0");
    SerialPort->setBaudRate(QSerialPort::Baud115200);
    SerialPort->setDataBits(QSerialPort::Data8);
    SerialPort->setParity(QSerialPort::NoParity);
    SerialPort->setStopBits(QSerialPort::OneStop);
    SerialPort->setFlowControl(QSerialPort::NoFlowControl);
    SerialPort->open(QIODevice::ReadWrite);
    if(SerialPort->isOpen())
        qDebug()<<"串口已经打开";

}

//串口读取数据函数
int aa = 0;
void build1::Read_Data()
{
     qDebug()<<"串口已经打开111";
    buf = SerialPort->readAll();
    qDebug()<<buf;
  //  QString str = QString::fromLocal8Bit(buf);
    if(!buf.isEmpty())
    {
        buf_1.append(buf);
        if(buf_1.contains("}"))
        {
            aa++;
            dataHandle(buf_1);
            if(aa == 1)
                serialPort_2->write(buf_1);
            if(aa == 2)
                aa = 0;

            buf_1.clear();
        }
    }
    buf.clear();
}

int warn_1 = 0, warn_2 = 0,warn_3 = 0,warn_4 = 0;
int warn_n = 0;
//串口数据处理
void build1::dataHandle(QByteArray &data)
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
    if(id == 1508)
    {
    //     set_1 =1;
    //     set_ch_1->setInterval(8000);    //重开定时器
    //     set_ch_1->start();


    //     QDateTime current_date_time =QDateTime::currentDateTime();

    //     if(flag_1 == 1)
    //     {
    //         QDateTime current_date_time =QDateTime::currentDateTime();
    //         QString str = current_date_time .toString("yyyy-MM-dd hh:mm:ss") + "1栋001"+"\n";//格式化时间

    //         QString filepath = QCoreApplication::applicationDirPath();
    //         QFile *file = new QFile(filepath + "/2.txt");
    //         file->open(QIODevice::Append);
    //         file->write(str.toUtf8());
    //         file->close();
    //     }
    //     flag_1 = 0;
    //     QJsonValue Direction = rootObj.value("dir");
    //     int direction = Direction.toInt();
    //     dir_x = direction;
    //     if(dir_x==1)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("左");
    //         ui ->textEdit01a->setText(dir_text);
    //     }
    //     else if(dir_x==2)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("右");
    //         ui ->textEdit01a->setText(dir_text);
    //     }
    //    else if(dir_x==3)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("all");
    //         ui ->textEdit01a->setText(dir_text);
    //     }
    //     QJsonValue Smoke = rootObj.value("Sm");
    //     double smoke = Smoke.toDouble();
    //     ppm_x = smoke;
    //     QString smoke_text = QString::number(smoke);
    //     ui->textEdit01b->setText(smoke_text);
    //     QString warning_text;
    //     if(smoke > 2800)
    //     {
    //         warn_3 = 1;
    //         warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") + "一楼烟雾浓度过高";
    //         ui->textEdit01b->append(warning_text);
    //     }
    //     else
    //         warn_3 =  0;

    //     QJsonValue Fire = rootObj.value("Fi");
    //     double fire = Fire.toDouble();
    //     fire_x = fire;
    //     QString fire_text = QString::number(fire);
    //     ui->textEdit01c->setText(fire_text);
    //     if(fire > 0)
    //     {
    //         warn_4 = 1;
    //         warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") + "一楼出现火灾";
    //         ui->textEdit01c->append(warning_text);
    //     }
    //     else
    //         warn_4 = 0;

    //     QString str = current_date_time .toString("yyyy-MM-dd hh:mm:ss") + "一楼 "+
    //                  // " 温度 "+temp_text+" 湿度 "+hum_text+
    //                   " 甲烷 "+smoke_text +" 火灾等级 "+fire_text+"\n";
    //     QString filepath = QCoreApplication::applicationDirPath();
    //     QFile *file = new QFile(filepath + "/1.txt");
    //     file->open(QIODevice::Append);
    //     file->write(str.toUtf8());
    //     file->close();
    // }
    // if(id == 1509)
    // {
    //     set_2 =1;
    //     set_ch_2->setInterval(8000);    //重开定时器
    //     set_ch_2->start();


    //     QDateTime current_date_time =QDateTime::currentDateTime();

    //     if(flag_2 == 1)
    //     {
    //         QDateTime current_date_time =QDateTime::currentDateTime();
    //         QString str = current_date_time .toString("yyyy-MM-dd hh:mm:ss") + "1栋001"+"\n";//格式化时间

    //         QString filepath = QCoreApplication::applicationDirPath();
    //         QFile *file = new QFile(filepath + "/2.txt");
    //         file->open(QIODevice::Append);
    //         file->write(str.toUtf8());
    //         file->close();
    //     }
    //     flag_2 = 0;
    //     QJsonValue Direction = rootObj.value("dir");
    //     int direction = Direction.toInt();
    //     dir_x = direction;
    //     if(dir_x==1)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("左");
    //         ui ->textEdit02a->setText(dir_text);
    //     }
    //     else if(dir_x==2)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("右");
    //         ui ->textEdit02a->setText(dir_text);
    //     }
    //     else if(dir_x==3)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("all");
    //         ui ->textEdit02a->setText(dir_text);
    //     }
    //     QJsonValue Smoke = rootObj.value("Sm");
    //     double smoke = Smoke.toDouble();
    //     ppm_x = smoke;
    //     QString smoke_text = QString::number(smoke);
    //     ui->textEdit02b->setText(smoke_text);
    //     QString warning_text;
    //     if(smoke > 2800)
    //     {
    //         warn_3 = 1;
    //         warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") + "二楼烟雾浓度过高";
    //         ui->textEdit01b->append(warning_text);
    //     }
    //     else
    //         warn_3 =  0;

    //     QJsonValue Fire = rootObj.value("Fi");
    //     double fire = Fire.toDouble();
    //     fire_x = fire;
    //     QString fire_text = QString::number(fire);
    //     ui->textEdit02c->setText(fire_text);
    //     if(fire > 0)
    //     {
    //         warn_4 = 1;
    //         warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") + "一楼出现火灾";
    //         ui->textEdit01c->append(warning_text);
    //     }
    //     else
    //         warn_4 = 0;

    //     QString str = current_date_time .toString("yyyy-MM-dd hh:mm:ss") + "一楼 "+
    //                   // " 温度 "+temp_text+" 湿度 "+hum_text+
    //                   " 甲烷 "+smoke_text +" 火灾等级 "+fire_text+"\n";
    //     QString filepath = QCoreApplication::applicationDirPath();
    //     QFile *file = new QFile(filepath + "/1.txt");
    //     file->open(QIODevice::Append);
    //     file->write(str.toUtf8());
    //     file->close();
    // }
    // if(id == 1510)
    // {
    //     set_3 =1;
    //     set_ch_3->setInterval(8000);    //重开定时器
    //     set_ch_3->start();


    //     QDateTime current_date_time =QDateTime::currentDateTime();

    //     if(flag_3 == 1)
    //     {
    //         QDateTime current_date_time =QDateTime::currentDateTime();
    //         QString str = current_date_time .toString("yyyy-MM-dd hh:mm:ss") + "1栋001"+"\n";//格式化时间

    //         QString filepath = QCoreApplication::applicationDirPath();
    //         QFile *file = new QFile(filepath + "/2.txt");
    //         file->open(QIODevice::Append);
    //         file->write(str.toUtf8());
    //         file->close();
    //     }
    //     flag_3 = 0;
    //     QJsonValue Direction = rootObj.value("dir");
    //     int direction = Direction.toInt();
    //     dir_x = direction;
    //     if(dir_x==1)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("左");
    //         ui ->textEdit03a->setText(dir_text);
    //     }
    //     else if(dir_x==2)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("右");
    //         ui ->textEdit03a->setText(dir_text);
    //     }
    //     else if(dir_x==3)
    //     {
    //         QString dir_text= QString::fromLocal8Bit("all");
    //         ui ->textEdit03a->setText(dir_text);
    //     }
    //     QJsonValue Smoke = rootObj.value("Sm");
    //     double smoke = Smoke.toDouble();
    //     ppm_x = smoke;
    //     QString smoke_text = QString::number(smoke);
    //     ui->textEdit03b->setText(smoke_text);
    //     QString warning_text;
    //     if(smoke > 2800)
    //     {
    //         warn_3 = 1;
    //         warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") + "二楼烟雾浓度过高";
    //         ui->textEdit03b->append(warning_text);
    //     }
    //     else
    //         warn_3 =  0;

    //     QJsonValue Fire = rootObj.value("Fi");
    //     double fire = Fire.toDouble();
    //     fire_x = fire;
    //     QString fire_text = QString::number(fire);
    //     ui->textEdit03c->setText(fire_text);
    //     if(fire > 0)
    //     {
    //         warn_4 = 1;
    //         warning_text = current_date_time.toString("yyyy-MM-dd hh:mm:ss") + "一楼出现火灾";
    //         ui->textEdit03c->append(warning_text);
    //     }
    //     else
    //         warn_4 = 0;

    //     QString str = current_date_time .toString("yyyy-MM-dd hh:mm:ss") + "一楼 "+
    //                   // " 温度 "+temp_text+" 湿度 "+hum_text+
    //                   " 甲烷 "+smoke_text +" 火灾等级 "+fire_text+"\n";
    //     QString filepath = QCoreApplication::applicationDirPath();
    //     QFile *file = new QFile(filepath + "/1.txt");
    //     file->open(QIODevice::Append);
    //     file->write(str.toUtf8());
    //     file->close();
    }
}




//void build1::on_butadd_clicked()
//{
   // QString name = QString("")
//}

void build1::on_but4_clicked()
{
    openSerial();
}

void build1::on_pushButton_clicked()
{

}



 void build1::on_pushButton_3_clicked()
 {
     QString name=QString("节点%1：").arg(m_iLabNum);
     QString name1=QString("方向：");
     QString name2=QString("烟雾浓度：");
     QString name3=QString("火焰强度：");
     addItem(name,name1,name2,name3);
}

void build1::addItem(QString name,QString name1,QString name2,QString name3)
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
    QString id = QString("text_a%1").arg(m_iLabNum);
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
    QString id1 = QString("text_b%1").arg(m_iLabNum);
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
    QString id2 = QString("text_c%1").arg(m_iLabNum);
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
