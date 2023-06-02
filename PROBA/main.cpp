#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

//#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon("./image/Crime_Searcher.ico"));

    MainWindow w;
    w.show();

    //qDebug() << w.x() << w.y();
    w.move(107,204);
    //qDebug() << w.x() << w.y();

    return a.exec();
}
