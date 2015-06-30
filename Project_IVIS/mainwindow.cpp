#include "mainwindow.h"
#include "ui_mainwindow.h"

//
#include <QtCore>
#include <QtGui>
#include <QMessageBox> // 메시지 박스
#include <QTreeWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->treeWidget->setColumnCount(2);
    AddRoot("1 Hello","word");
    AddRoot("2 Hello","word");
    AddRoot("3 Hello","word");
}


void MainWindow::AddRoot(QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, Description);
    ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm, "one", "hello");
    AddChild(itm, "two", "hello");
}

void MainWindow::AddChild(QTreeWidgetItem *parent,QString name, QString Description)
{
    //QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget); //한줄로 나옴
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
  //  QMessageLogger("DD");
    QMessageBox::information(this,"title","Heelo");
}

void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0, Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1, Qt::blue);
}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this,"title","Heelo2");
    AddRoot("3 Hello","word");
}
