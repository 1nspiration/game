#include "mainwindow.h"

void MainWindow::shopOption1()
{
    //Покопаться в мусорке
    satiety += 3.f;
    RandomEventsPoisoning();
}

void MainWindow::shopOption2()
{
    //Съесть дошик
    if (money >= 50) satiety += 5, money -= 50;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(50 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption3()
{
    //Съесть качественный дошик
    if (money >= 100) satiety += 7, money -= 100;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(100 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption4()
{
    //Скушать шаурму
    if (money >= 150) satiety += 15, money -= 150;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(150 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption5()
{
    //Замутить простое блюдо
    if (money >= 300) satiety += 17, money -= 300;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(300 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption6()
{
    //Съесть макароны с сыром
    if (money >= 350) satiety += 20, money -= 350;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(350 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption7()
{
    //Замутить карри
    if (money >= 450) satiety += 22, money -= 450;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(450 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption8()
{
    //Поесть в кафе
    if (money >= 700) satiety += 25, money -= 700;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(700 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption9()
{
    //Сходить в бюджетный ресторан
    if (money >= 1200) satiety += 30, money -= 1200;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(1200 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption10()
{
    //Сходить в хороший ресторан
    if (money >= 3000) satiety += 35, money -= 3000;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(3000 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption11()
{
    //Посетить ресторан с мишлен
    if (money >= 7000) satiety += 40, money -= 7000;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(7000 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption12()
{
    //Нанять личного повара
    if (money >= 10000) satiety += 50, money -= 10000;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(10000 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption13()
{
    //Устроить шведский стол
    if (money >= 17000) satiety += 70, money -= 17000;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(17000 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption14()
{
    //Чревоугодничать
    if (money >= 20000) satiety += 85, money -= 20000;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(20000 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}

void MainWindow::shopOption15()
{
    //Нажраться до греха
    if (money >= 30000) satiety += 85, money -= 30000;
    else
    {
        shop_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(30000 - money) + " р.");
        shop_notEnoughMoney->show();
    }
}
