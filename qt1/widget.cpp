#include "widget.h"
#include "ui_widget.h"
#include "inlog.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>     //执行sql语句
#include <QSqlDatabase>  //数据库驱动
#include <QSqlError>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("用户注册");
    ui ->let_passwd->setEchoMode(QLineEdit::Password);
    ui ->let_passwd2->setEchoMode(QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}

//转到登录页面
void Widget::on_but_reg_clicked()
{
    QString str1=ui->let_passwd->text();
    QString str2=ui->let_passwd2->text();
    int y = QString ::compare(str1,str2,Qt::CaseSensitive);//区分大小写
    if(y)
    {
        QMessageBox::about(this,"错误","两次输入不同");
        return;
    }
    if((str1.length()!=8)&&(str2.length()!=8))
    {
        QMessageBox::about(this,"警告","密码需要8个字符");
        return;
    }
    int i = QString::compare(str1,str2);
    if(i)
    {
        QMessageBox::about(this,"警告","两次密码输入不一致");
        return;
    }
    //创建数据库

     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //添加sqlite驱动
     db.setDatabaseName("user.db");             //数据库名字
    int flag = 1;    //标志位，1注册，0不注册
    bool ok = db.open();
    if(ok)
    {
        QSqlQuery query("sleect username from userInfo",db);
        while(query.next())
        {
            if(ui->letname->text()== query.value(0).toString())
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            QSqlQuery query;
            query.prepare("INSERT INTO userInfo (username,password) VALUES(:username,:password)");//将账号存入数据库
            query.bindValue(":username",ui->letname->text());
            query.bindValue(":password",ui->let_passwd2->text());

            query.exec();
            QMessageBox::about(this,"提示","注册用户成功！");
            this ->hide();
            inlog *w = new inlog();
            w->show();
        }
        else  QMessageBox::about(this,"提示","用户已存在！");
    }
   else
    {
        qDebug()<<"数据库创建失败！";
        exit(-1);
    }
}

