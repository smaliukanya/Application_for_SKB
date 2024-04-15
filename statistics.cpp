#include "statistics.h"
#include "ui_statistics.h"
#include "QTabBar"

statistics::statistics(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::statistics)
{
    ui->setupUi(this);
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setStyleSheet("QTabWidget::pane { border: 0; }");
    ui->tabWidget->setCurrentIndex(0);
}

statistics::~statistics()
{
    delete ui;
}
