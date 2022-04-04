#include "mainwindow.h"
void MainWindow::LeisureOption1() //помечтать о счастливом будущем
{
    mental_condition +=3;
}
void MainWindow::LeisureOption2() //покурить
{
    if (money >= 50) mental_condition += 5, money -= 50, HP-=3.0f;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(50 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption3()   //погулять
{
    if (money >= 100)  mental_condition += 7, money -= 100,HP+=3.0f,RandomEventsEasymoney();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(100 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption4()  //Слушать музыку на максимальной громкости
{
    if (money >= 150) mental_condition += 15, money -= 150;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(150 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption5()   // сходить в баньку
{
    if (money >= 300) mental_condition += 17, money -= 300;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(300 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption6()   // устроить тусовку в общаге
{
    if (money >= 350) mental_condition += 20, money -= 350, HP-=5.0f,RandomEventsPoisoning();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(350 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption7() // сходить в дешевый клуб
{
    if (money >= 450) mental_condition += 22, money -= 450, HP-=7.0f,RandomEventsPoisoning();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(450 - money) + " р.");
        leisure_notEnoughMoney->show();
    }

}
void MainWindow::LeisureOption8()  // посетить культурное мероприятие
{
    if (money >= 700) mental_condition += 25, money -= 700;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(700 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption9() // сходить в качалку
{
    if (money >= 1200) mental_condition += 30, money -= 1200;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(1200 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption10()  // Сходить в бар
{
    if (money >= 3000) mental_condition += 35, money -= 3000, HP-=10.0f,RandomEventsPoisoning();
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(3000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption11()  // Сходить на свидание
{
    if (money >= 7000) mental_condition += 40, money -= 7000;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(7000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}
void MainWindow::LeisureOption12()  // заняться экстремальными видами спорта
{
    if (money >= 10000) mental_condition += 50, money -= 10000;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(10000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }

}
void MainWindow::LeisureOption13() // отправиться в путешествие
{
    if (money >= 17000) mental_condition += 70, money -= 17000;
    else
    {
        leisure_notEnoughMoney->setText("Недостаточно денег! Нужно ещё " + QString::number(17000 - money) + " р.");
        leisure_notEnoughMoney->show();
    }
}

