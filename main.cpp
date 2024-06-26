#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QDir dir(QApplication::applicationDirPath()+"/repo");
    QStringList directories = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    // Check if there is only one directory in the parent directory
    if (directories.size() == 1) {
        // Get the name of the directory
        qDebug()<<"refaat : "<<directories.at(0)<<Qt::endl;

    }
    return a.exec();
}
