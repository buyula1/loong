#include "inlog.h"
#include "widget.h"
#include "top.h"
#include "ui_inlog.h"
#include<QMovie>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>     //执行sql语句
#include <QSqlDatabase>  //数据库驱动
QSqlDatabase db;
bool ok ;
//创建数据库
//遍历数据库
//增删改查

inlog::inlog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inlog)
{
    ui->setupUi(this);
    // QMovie * movie = new QMovie(this);//gif
    // movie->setFileName(":/imager/87424d5b535082fb0a2f26d438d662ac4a48173afed004-6dQ3lq_fw658.webp");
    // movie->start();
    // ui->labtop->setMovie(movie);
    this->setObjectName("labtop");
    this->setStyleSheet("QLabel#labtop{border-image:url(:/imager/beiji2.jpg);}");
    this->setWindowTitle("用户登录");
    ui ->let_passwd->setEchoMode(QLineEdit::Password);
    ui->let_passwd->setMaxLength(8);
    //创建数据库
     db = QSqlDatabase::addDatabase("QSQLITE"); //添加sqlite驱动
    db.setDatabaseName("user.db");             //后缀可以随便写
     ok = db.open();                       //创建数据库文件
    if(!ok)
    {
        QMessageBox::about(this,"错误","数据库文件创建失败！");
        return;
    }
    QSqlQuery query;          //执行sql命令
    QString  sql = "select * from userInfo";
    if(!query.exec(sql))      //查看userinfo表格有没有
    {
        qDebug()<<"userInfo不存在";  //没有用户表格就创建一个名字叫userinfo
        sql = "create table userInfo(username varchar(20),password varchar(20))"; //用户名，密码
        query .exec(sql); //创建用户账号密码表
        sql = "INSERT INTO userInfo (username, password) VALUES ('chushi','12345678')";
        query.exec(sql); //设置初始账号
    }
    else
    {
        qDebug()<<"userInfo存在";
    }

}

inlog::~inlog()
{
    db.close();//关闭数据库
    delete ui;
}
//转到主页面
void inlog::on_but_inlog_clicked()
{
    QString str=ui->let_passwd->text();
    if(str.length()!=8)
    {
        QMessageBox::about(this,"警告","字符个数不符合");
        return;
    }

    int open_flag = 1;    //不存在这个账号密码
    if(ok)
    {
        QSqlQuery query("select username,password from userInfo",db);//查找账号密码
        while(query.next())
        {
            QString acc = query.value(0).toString();//返回那个位置字符
            QString pass = query.value(1).toString();
            if(ui->let_name->text() == acc && ui->let_passwd->text()==pass)
            {
                this ->hide();
                top *w = new top();
                w->show();
                db.close();
                open_flag = 0;
                break;
            }
         }
        if(open_flag) QMessageBox::about(this,"提示","账号或密码错误");
    }
    else
    {
        qDebug()<<"数据库创建失败";
    }
}

//转到注册页面
void inlog::on_but_reg_clicked()
{ 
    Widget *w = new Widget();
    w ->show();
    this->hide();
}

//关闭页面
void inlog::on_btnclose_clicked()
{
    this ->close();
}
//密码显示
void inlog::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
        //显示Normal
        ui ->let_passwd->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui ->let_passwd->setEchoMode(QLineEdit::Password);
    }
}

