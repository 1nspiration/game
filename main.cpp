#include <QApplication>
#include "mainwindow.h"

int main(int argc, char **argv)
{
    //QCoreApplication::addLibraryPath("C:/Qt/6.2.4/mingw_64/plugins"); //решение ошибки, которая не позволяет запустить приложение не из компилятора, используем это позже
    QApplication game(argc, argv);

    MainWindow gameWin(nullptr);
    gameWin.show();

    return game.exec();
}
