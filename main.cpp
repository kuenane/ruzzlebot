#include <QtGui>
#include "mainwindow.h"
#include "node.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}