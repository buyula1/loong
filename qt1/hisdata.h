#ifndef HISDATA_H
#define HISDATA_H

#include <QWidget>
#include<QMovie>
#include <QFile>
#include <QString>
namespace Ui {
class hisdata;
}

class hisdata : public QWidget
{
    Q_OBJECT

public:
    explicit hisdata(QWidget *parent = nullptr);
    ~hisdata();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::hisdata *ui;
};

#endif // HISDATA_H
