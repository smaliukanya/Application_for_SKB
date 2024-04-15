#include "calibrationwindow.h"
#include "ui_calibrationwindow.h"
#include "mainmenu.h"
#include "swindow.h"
#include "QTabBar"
#include "QDebug"
#include "QTabWidget"

calibrationWindow::calibrationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calibrationWindow)
{
    ui->setupUi(this);
    ui->tabWidget2->tabBar()->hide();
    ui->tabWidget2->setStyleSheet("QTabWidget::pane { border: 0;}");
    ui->tabWidget2->setCurrentIndex(0);
    tabWid();

}

void calibrationWindow::style(){
    QString BaseStyleButton = "QPushButton{"
                              "background-color: rgb(36, 42, 54);"
                              "border-style: solid;"
                              "border-color: rgb(41, 47, 61);"
                              "border-width: 5px;"
                              "color: rgb(255, 255, 255);"
                              "font: 24pt Nunito-Regular;"
                              "}";
    ui->low->setStyleSheet(BaseStyleButton);
    ui->eeee->setStyleSheet(BaseStyleButton);
    ui->qqwq->setStyleSheet(BaseStyleButton);
}


void calibrationWindow::tabWid(){
    int currentTabIndex = ui->tabWidget2->currentIndex();
    QString PressStyleButton = "QPushButton{"
                               "background-color: rgb(220, 220, 220);"
                               "font: 24pt Nunito-Regular;"
                               "color: rgb(0, 0, 0);"
                               "}";
    style();
    if(currentTabIndex == 0){
        ui->low->setStyleSheet(PressStyleButton);

    }
    if(currentTabIndex == 1){
        ui->eeee->setStyleSheet(PressStyleButton);
    }
    if(currentTabIndex == 2){
        ui->qqwq->setStyleSheet(PressStyleButton);
    }
}

calibrationWindow::~calibrationWindow()
{
    delete ui;
}


void calibrationWindow::on_back_2_clicked()
{
    TWindow* tWindow = new TWindow();
    tWindow->show();
    this->hide();
}


void calibrationWindow::on_low_clicked()
{
    ui->tabWidget2->setCurrentIndex(0);
    tabWid();
}


void calibrationWindow::on_eeee_clicked()
{
    ui->tabWidget2->setCurrentIndex(1);
    tabWid();
}


void calibrationWindow::on_qqwq_clicked()
{
    ui->tabWidget2->setCurrentIndex(2);
    tabWid();
}

