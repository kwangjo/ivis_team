#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtCore>
#include <QtGui>
#include <QTreeWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


    void AddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent,QString name, QString Description);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_pushButton_clicked();

    void on_actionNew_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
