#ifndef INLOG_H
#define INLOG_H

#include <QWidget>

namespace Ui {
class inlog;
}

class inlog : public QWidget
{
    Q_OBJECT

public:
    explicit inlog(QWidget *parent = nullptr);
    ~inlog();

private slots:
    void on_but_inlog_clicked();

    void on_but_reg_clicked();

    void on_btnclose_clicked();



    void on_checkBox_clicked(bool checked);

private:
    Ui::inlog *ui;
};

#endif // INLOG_H
