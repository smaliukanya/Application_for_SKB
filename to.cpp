#include "to.h"
#include "ui_to.h"

to::to(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::to)
{
    ui->setupUi(this);
}

to::~to()
{
    delete ui;
}
