#include "mainwindow.h"
void MainWindow::RandomEventsPoisoning()
{
    int chanse=rand() % 10;
    if (chanse==5)
    {
    HP-=8; // с таймером потом сделаем, пусть пока будет так
    QMessageBox::information(this," ","Вы отравились");
    }
}
void MainWindow::RandomEventsEasymoney()
{
    int chanse=rand() % 10;
    if (chanse==5)
    {
    money+=8; // с таймером потом сделаем, пусть пока будет так
    QMessageBox::information(this," ","Вы нашли деньги :D");
    }
}
