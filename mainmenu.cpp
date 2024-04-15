#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "swindow.h"
#include "calibrationwindow.h"
#include "statistics.h"
#include "QPropertyAnimation"

TWindow::TWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TWindow)
{
    ui->setupUi(this);
}

TWindow::~TWindow()
{
    delete ui;
}

void TWindow::on_pushButton_2_clicked()
{
    SWindow* sWindow = new SWindow();
    sWindow->resize(1024, 768);
    sWindow->show();
    this->hide();
}


void TWindow::on_pushButton_3_clicked()
{
    calibrationWindow* calibrationwindow = new calibrationWindow();
    calibrationwindow->resize(1024, 768);
    calibrationwindow->show();
    this->hide();
}


void TWindow::on_pushButton_8_clicked()
{
    statistics* statistics_ = new statistics();
    statistics_->show();
    this->hide();
}

