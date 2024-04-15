#include "swindow.h"
#include "ui_swindow.h"
#include "QTabBar"
#include "mainmenu.h"

SWindow::SWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setStyleSheet("QTabWidget::pane { border: 0; }");
    ui->tabWidget->setCurrentIndex(0);

}

/*void tabChanged(int index)
{
    if (index == 0) {
        ui->Button_Combain->setStyleSheet("background:red; }");
        ui->pushButton->setEnabled(true);
    } else if (index == 1) {
        ui->pushButton->setText("Текст для второго таба");
        ui->pushButton->setEnabled(false);
    }
    // Добавьте другие условия для других табов по необходимости
}*/
SWindow::~SWindow()
{
    delete ui;
}

void SWindow::on_pushButton_clicked()
{
    TWindow* tWindow = new TWindow();
    tWindow->show();
    this->hide();
}

void SWindow::on_Button_Combain_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
    ui->Button_Combain->setStyleSheet("background-color: rgb(220, 220, 220);font: 24pt; color: rgb(0, 0, 0);font: 20pt res/font/Nunito-Regular;");
    ui->Button_Tech->setStyleSheet("QPushButton{"
                                      "background-color: rgb(36, 42, 54);"
                                      "border-style: solid;"
                                      "border-color: rgb(41, 47, 61);"
                                      "border-width: 5px;"
                                      "color: rgb(255, 255, 255);"
                                      "font: 20pt res/font/Nunito-Regular;}");
}


void SWindow::on_Button_Tech_clicked()
{
    ui->Button_Tech->setStyleSheet("background-color: rgb(220, 220, 220);font: 24pt; color: rgb(0, 0, 0);font: 20pt res/font/Nunito-Regular;");
    ui->tabWidget->setCurrentIndex(1);
    ui->Button_Combain->setStyleSheet("QPushButton{"
                                    "background-color: rgb(36, 42, 54);"
                                    "border-style: solid;"
                                    "border-color: rgb(41, 47, 61);"
                                    "border-width: 5px;"
                                    "color: rgb(255, 255, 255);"
                                      "font: 20pt res/font/Nunito-Regular;}");
}


void SWindow::on_Button_revers_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void SWindow::on_Button_Terminal_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}


void SWindow::on_Button_Blok_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}

