#include <QApplication>
#include <QCommandLineParser>
#include <QCommandLineOption>

#include "mainwindow.h"


/*
 *
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
 * Source MDI
 *
 *
 *
 *
 * */

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(t1);

    QApplication app(argc, argv);
 //   QCoreApplication::setApplicationVersion(QT_VERSION_STR);
  /*  QCommandLineParser parser;
    parser.setApplicationDescription("Qt MDI Exampl1112");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addPositionalArgument("file", "The file to open.");
    parser.process(app);
*/
    MainWindow mainWin;




    mainWin.show();

    return app.exec();
}
