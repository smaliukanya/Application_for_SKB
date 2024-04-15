#ifndef CALIBRATIONWINDOW_H
#define CALIBRATIONWINDOW_H

#include <QMainWindow>
#include "QTabBar"
#include "QDebug"
#include "QTabWidget"
#include <QFont>
#include <QFontDatabase>

namespace Ui {
class calibrationWindow;
}

class calibrationWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit calibrationWindow(QWidget *parent = nullptr);
    ~calibrationWindow();

private slots:
    void on_back_2_clicked();

    void on_low_clicked();

    void on_eeee_clicked();

    void on_qqwq_clicked();

    void tabWid();

    void style();

private:
    Ui::calibrationWindow *ui;
};

#endif // CALIBRATIONWINDOW_H
