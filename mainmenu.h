#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class TWindow;
}

class TWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TWindow(QWidget *parent = nullptr);
    ~TWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::TWindow *ui;
};

#endif // MAINMENU_H
