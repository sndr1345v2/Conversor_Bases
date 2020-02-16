#include "converter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//added
    Converter c;
    c.start();

}
