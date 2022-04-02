#include "mainwindow.h"
void MainWindow::RandomEventsPoisoning()
{
    int chanse=rand() % 10;
    if (chanse==5)
    {
    HP-=8; // с таймером потом сделаем, пусть пока будет так
    Poisonning->    show();
    Poisonning->    exec();
    }
}
