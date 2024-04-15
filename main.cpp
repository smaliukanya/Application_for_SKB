#include "mainwindow.h"
#include "mainmenu.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TWindow w;
    w.show();
    return a.exec();
}
