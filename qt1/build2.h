#ifndef BUILD2_H
#define BUILD2_H

#include <QWidget>

namespace Ui {
class build2;
}

class build2 : public QWidget
{
    Q_OBJECT

public:
    explicit build2(QWidget *parent = nullptr);
    ~build2();

private:
    Ui::build2 *ui;
};

#endif // BUILD2_H
