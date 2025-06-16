#include "windowclientes.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowClientes w;
    w.show();
    return a.exec();
}
