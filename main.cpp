#include <QApplication>
#include "mainwindow.h"

int main(int argc, char **argv)
{
    QApplication game(argc, argv);

    MainWindow gameWin(nullptr);
    gameWin.show();

    return game.exec();
}
