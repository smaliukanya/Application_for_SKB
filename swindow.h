#ifndef SWINDOW_H
#define SWINDOW_H

#include <QMainWindow>

namespace Ui {
class SWindow;
}

class SWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SWindow(QWidget *parent = nullptr);
    ~SWindow();

private slots:
    void on_pushButton_clicked();

    void on_Button_Combain_clicked();

    void on_Button_Tech_clicked();

    void on_Button_revers_clicked();

    void on_Button_Terminal_clicked();

    void on_Button_Blok_clicked();

private:
    Ui::SWindow *ui;
};

#endif // SWINDOW_H
