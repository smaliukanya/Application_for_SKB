#ifndef TO_H
#define TO_H

#include <QMainWindow>

namespace Ui {
class to;
}

class to : public QMainWindow
{
    Q_OBJECT

public:
    explicit to(QWidget *parent = nullptr);
    ~to();

private:
    Ui::to *ui;
};

#endif // TO_H
