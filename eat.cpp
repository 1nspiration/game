#include "mainwindow.h"
#include "mainwindow.cpp"
void MainWindow::Eats1()
{
    satiety=satiety-5.f;
    ui->progressBar_hunger->setValue(satiety);
}
