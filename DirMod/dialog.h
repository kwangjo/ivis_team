#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

//add
#include <QtCore>
#include <QtGui>
#include <QTreeWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    void aAddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent ,QString name, QString Description);
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;

    //add
    //QDirModel *model;
};

#endif // DIALOG_H
