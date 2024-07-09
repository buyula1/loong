#include "build2.h"
#include "ui_build2.h"

build2::build2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::build2)
{
    ui->setupUi(this);
}

build2::~build2()
{
    delete ui;
}
