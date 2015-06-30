#include "mainwindow.h"
#include <QApplication>


// 파일 목록 화면 및 추가 사이트 : https://www.youtube.com/watch?v=uLF9KWUR9ro

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
