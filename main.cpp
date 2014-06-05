#include "interpretenpi.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    interpretenpi w(argc,argv,pd);
    w.show();

    return a.exec();
}
