#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>
#include <random>
#include <fstream>
#include <string>
#include <stdlib.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QTimer *timer;

    bool game_over;

    unsigned long long money;
    int day,
        month,
        year;

    float satiety, hunger;              //сытость, голод
    float mental_condition, tireness;   //настроение, усталость
    float HP;                           // очки здоровья
    float damage;                       // урон, который можно получить из-за рандомных событий
    int jobID;                          //ID работы, 0 = безработный (начальное значение), в onTick() будет проверяться ID работы и каждое первое число будет начисляться соответствующая зарплата

    QMessageBox *hunger_death;          //сообщение о гибели от голода
    QMessageBox *mental_condition_death;//сообщение о гибели от психических проблем
    QMessageBox *shop_notEnoughMoney;   //сообщение о недостатке денег для совершения покупки в магазине
    QMessageBox *leisure_notEnoughMoney; // сообщение о недостатке денег для совершения покупки в окне досуга
    QMessageBox *HP_death;               // сообщение о смерти
private slots:
    void quit();            //кнопка "Выйти"
    void startGame();       //кнопка "Играть"
    void onTick();          //главный таймер, отвечает за главные характеристики в игре и дату
    void backToTitle();     //кнопка "В главное меню"
    void toStats();         //кнопка "Характеристики"
    void toJobs();          //кнопка "Работа"
    void toShop();          //кнопка "Магазин"
    void toLeisure();       //кнопка "Досуг"
    void LoadSave();        //загрузка сохранения
    void Save();            //сохранение
    //слоты для магазина
    void shopOption1(); //Покопаться в мусорке
    void shopOption2(); //Съесть дошик
    void shopOption3(); //Съесть качественный дошик
    void shopOption4(); //Скушать шаурму
    void shopOption5(); //Замутить простое блюдо
    void shopOption6(); //Съесть макароны с сыром
    void shopOption7(); //Замутить карри
    void shopOption8(); //Поесть в кафе
    void shopOption9(); //Сходить в бюджетный ресторан
    void shopOption10();//Сходить в бюджетный ресторан
    void shopOption11();//Посетить ресторан с мишлен
    void shopOption12();//Нанять личного повара
    void shopOption13();//Устроить шведский стол
    void shopOption14();//Чревоугодничать
    void shopOption15();//Нажраться до греха

    //слоты для работы
    void jobStatus(int id); //отображение работы в характеристиках
    void jobsOption1();     //Уборщик в маке
    void jobsOption2();     //Продавец-кассир в продуктовом магазине
    void jobsOption3();     //Администратор в продуктовом магазине
    void jobsOption4();     //HTML-верстальщик в маленькой компании
    void jobsOption5();     //Backend-разработчик в маленькой компании
    void jobsOption6();     //Java-разработчик в средней компании
    void jobsOption7();     //С++-разработчик в крупной компании
    void jobsOption8();     //Тимлид в крупном проекте
    void jobsOption9();     //Глава отдела в международной компании
    void jobsOption10();    //CEO регионального филиала в международной компании
    // слоты для досуга
    void LeisureOption1();   //Помечтать о счастливом будущем
    void LeisureOption2();   //Покурить
    void LeisureOption3();   //Погулять
    void LeisureOption4();   //Слушать музыку на полной громкости
    void LeisureOption5();   //Сходить в баньку
    void LeisureOption6();   //Устроить тусовку в общаге
    void LeisureOption7();   //Сходить в дешевый клуб
    void LeisureOption8();   //Посетить культурное мероприяте
    void LeisureOption9();   //Сходить в качалку
    void LeisureOption10();  //Сходить в бар
    void LeisureOption11();  //Сходить на свидание
    void LeisureOption12();  //Заняться экстремальными видами спорта
    void LeisureOption13();  //Отправиться в путешествие
    // слоты для рандомных ивентов
    void RandomEventsPoisoning(); // отравление
    void RandomEventsEasymoney(); // находка случайных денег
};
struct save {
    unsigned long long money;
    int day,
        month,
        year;

    float satiety, hunger;
    float mental_condition, tireness;
    float HP;
    float damage;
    int jobID;
};

#endif // MAINWINDOW_H
