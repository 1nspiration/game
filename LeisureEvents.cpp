#include "mainwindow.h"
void MainWindow::LeisureOption1()
{
    mental_condition +=3;
}
void MainWindow::LeisureOption2()
{
    if (money >= 50) mental_condition += 5, money -= 50, HP-=3.0f;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(50 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption3()
{
    if (money >= 100)  mental_condition += 7, money -= 100,HP+=3.0f;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(100 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption4()
{
    if (money >= 150) mental_condition += 15, money -= 150;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(150 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption5()
{
    if (money >= 300) mental_condition += 17, money -= 300;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(300 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption6()
{
    if (money >= 350) mental_condition += 20, money -= 350, HP-=5.0f,RandomEventsPoisoning();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(350 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption7()
{
    if (money >= 450) mental_condition += 22, money -= 450, HP-=7.0f,RandomEventsPoisoning();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(450 - money) + " р.");
        leisure_notEnoughMoney->show();
    }

}
void MainWindow::LeisureOption8()
{
    if (money >= 700) mental_condition += 25, money -= 700;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(700 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption9()
{
    if (money >= 1200) mental_condition += 30, money -= 1200;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(1200 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption10()
{
    if (money >= 3000) mental_condition += 35, money -= 3000, HP-=10.0f,RandomEventsPoisoning();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(3000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption11()
{
    if (money >= 7000) mental_condition += 40, money -= 7000;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(7000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption12()
{
    if (money >= 10000) mental_condition += 50, money -= 10000;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(10000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }

}
void MainWindow::LeisureOption13()
{
    if (money >= 17000) mental_condition += 70, money -= 17000;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(17000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }

}
