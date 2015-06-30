#include "dialog.h"
#include "ui_dialog.h"

//add
#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    aAddRoot("1hello", "world");        // https://www.youtube.com/watch?v=sbn1rz6LP3M
    aAddRoot("2hello", "world");
    aAddRoot("3hello", "world");

    //
   /* model = new QDirModel(this);
    model->setReadOnly(false);

    ui->treeView->setModel(model);*/
}

Dialog::~Dialog()
{
    delete ui;
}

// 추가
void Dialog::aAddRoot(QString name, QString Description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    item->setText(0, name);
    item->setText(1, Description);
    ui->treeWidget->addTopLevelItem(item);
  //  ui->treeWidget->setHeaderLabel("hello"); //첫번째 라벨
    ui->treeWidget->setHeaderLabels(QStringList() << "one" << "two");


    AddChild(item,"one","hello");
    AddChild(item,"two","hello");
}

void Dialog::AddChild(QTreeWidgetItem *parent ,QString name, QString Description)
{
    //QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    QTreeWidgetItem *item = new QTreeWidgetItem();  //리스트 타
    item->setText(0, name);
    item->setText(1, Description);
    parent->addChild(item);
}

void Dialog::on_pushButton_clicked()
{
    //make dir
    ui->treeWidget->currentItem()->setBackgroundColor(0,Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1,Qt::blue);
}

void Dialog::on_pushButton_2_clicked()
{
    //delete
    ui->treeWidget->currentItem()->setBackgroundColor(0,Qt::white);
    ui->treeWidget->currentItem()->setBackgroundColor(1,Qt::white);
}
