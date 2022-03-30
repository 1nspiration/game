#include "mainwindow.cpp"
void MainWindow::EatsEvents1()
{
    satiety+=5.f;
    ui->progressBar_hunger->setValue(satiety);
}
