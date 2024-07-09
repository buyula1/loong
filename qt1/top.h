#ifndef TOP_H
#define TOP_H

#include <QWidget>

namespace Ui {
class top;
}

class top : public QWidget
{
    Q_OBJECT

public:
    explicit top(QWidget *parent = nullptr);
    ~top();

private slots:
    void on_but4_clicked();

    void on_but7_clicked();

    void on_but6_clicked();

    void on_but1_clicked();

private:
    Ui::top *ui;
};

#endif // TOP_H
