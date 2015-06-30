#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();

    //외국 형 https://www.youtube.com/watch?v=M0PZDrDwdHM&list=SP2D1942A4688E9D63
}
