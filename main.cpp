#include "interpretenpi.hpp"
#include "mainwindow.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow v;
    MainWindow* psd = &v;
    interpretenpi w(argc,argv,psd);
    v.show();

    return a.exec();
}
