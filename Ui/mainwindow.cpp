#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Frame/frameinfo.h"

#include <QFrame>
#include <QDebug>
#include <QVBoxLayout>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    QString a;
    a= a.setNum(cntFrame);
    qDebug()<< a << "test";       //문자열 출

    cntFrame++;
    qDebug("Hewllp0");
    QFrame *line = new QFrame();

    //line -> setFrameShape(QFrame::HLine);
    line->setFrameStyle(QFrame::Box| QFrame::Plain);
    line->setWindowOpacity(0.5);        // 투명
    line->setGeometry(this->geometry());
    //line->setWindowFlags(Qt::FramelessWindowHint);  //위에 창 없애기
    //line->setLineWidth(500);


    //QVBoxLayout *layout = new QVBoxLayout();
    //layout->addWidget(line);
    line->show();

    //this->setLayout(layout);


}
