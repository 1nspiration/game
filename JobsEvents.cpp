//позже нужно будет ввести систему прогрессии
//чтобы игрок не мог сразу устроиться высокооплачиваемую работу
//например, добавить очки опыта и давать их за приобритение имущества (когда оно будет в игре),
//и начиная с n-го кол-ва очков открывать новую работу

//ID: 0(безработный)
//1(Уборщик в маке)
//2(Продавец-кассир в продуктовом магазине)
//3(Администратор в продуктовом магазине)
//4(HTML-верстальщик в маленькой компании)
//5(Backend-разработчик в маленькой компании)
//6(Java-разработчик в средней компании)
//7(С++-разработчик в крупной компании)
//8(Тимлид в крупном проекте)
//9(Глава отдела в международной компании)
//10(CEO регионального филиала в международной компании)

#include "mainwindow.h"

void MainWindow::jobsOption1()
{
    //Уборщик в маке
    jobID = 1;
    jobStatus(jobID);
}

void MainWindow::jobsOption2()
{
    //Продавец-кассир в продуктовом магазине
    jobID = 2;
    jobStatus(jobID);
}

void MainWindow::jobsOption3()
{
    //Администратор в продуктовом магазине
    jobID = 3;
    jobStatus(jobID);
}

void MainWindow::jobsOption4()
{
    //HTML-верстальщик в маленькой компании
    jobID = 4;
    jobStatus(jobID);
}

void MainWindow::jobsOption5()
{
    //Backend-разработчик в маленькой компании
    jobID = 5;
    jobStatus(jobID);
}

void MainWindow::jobsOption6()
{
    //Java-разработчик в средней компании
    jobID = 6;
    jobStatus(jobID);
}

void MainWindow::jobsOption7()
{
    //С++-разработчик в крупной компании
    jobID = 7;
    jobStatus(jobID);
}

void MainWindow::jobsOption8()
{
    //Тимлид в крупном проекте
    jobID = 8;
    jobStatus(jobID);
}

void MainWindow::jobsOption9()
{
    //Глава отдела в международной компании
    jobID = 9;
    jobStatus(jobID);
}

void MainWindow::jobsOption10()
{
    //CEO регионального филиала в международной компании
    jobID = 10;
    jobStatus(jobID);
}
