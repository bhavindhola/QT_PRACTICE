#include <QApplication>
#include "mainwindow.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QString Version_git(GIT_VERSION);
    qDebug()<<Version_git;
    return a.exec();
}
