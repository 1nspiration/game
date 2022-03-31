#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dateprocessor.cpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    game_over(false),
    money(0),
    day(1),
    month(1),
    year(2000),
    satiety(100.f),
    hunger(0.5f),
    mental_condition(100.f),
    tireness(0.5f)
{
    ui->setupUi(this);
    QObject::connect(ui->button_quit, &QPushButton::clicked, this, &MainWindow::quit);
    QObject::connect(ui->button_play, &QPushButton::clicked, this, &MainWindow::startGame);
    QObject::connect(ui->ButtonGoToWork, &QPushButton::clicked, this, &MainWindow::workTitle);
    QObject::connect(ui->button_back_title, &QPushButton::clicked, this, &MainWindow::backToTitle);
    QObject::connect(ui->button_back_title2, &QPushButton::clicked, this, &MainWindow::backToTitle);
    QObject::connect(ui->button_back_title3, &QPushButton::clicked, this, &MainWindow::backToTitle);
    QObject::connect(ui->ButtonGoToShop, &QPushButton::clicked, this, &MainWindow::ShopTitle);
    QObject::connect(ui->ButtonGoToShop3, &QPushButton::clicked, this, &MainWindow::ShopTitle);
    QObject::connect(ui->BackToStats, &QPushButton::clicked, this, &MainWindow::BackToStatsTitle);
    QObject::connect(ui->BackToStats_2, &QPushButton::clicked, this, &MainWindow::BackToStatsTitle);
    QObject::connect(ui->ButtonGoToLeisure1, &QPushButton::clicked, this, &MainWindow::leisureTitle);
    QObject::connect(ui->ButtonGoToLeisure2, &QPushButton::clicked, this, &MainWindow::leisureTitle);
    //коннекторы для еды (выглядит, конечно, мощно)
    QObject::connect(ui->Eat_button1, &QPushButton::clicked, this, &MainWindow::EatsEvents1);
    QObject::connect(ui->Eat_button2, &QPushButton::clicked, this, &MainWindow::EatsEvents2);
    QObject::connect(ui->Eat_button3, &QPushButton::clicked, this, &MainWindow::EatsEvents3);
    QObject::connect(ui->Eat_button4, &QPushButton::clicked, this, &MainWindow::EatsEvents4);
    QObject::connect(ui->Eat_button5, &QPushButton::clicked, this, &MainWindow::EatsEvents5);
    QObject::connect(ui->Eat_button6, &QPushButton::clicked, this, &MainWindow::EatsEvents6);
    QObject::connect(ui->Eat_button7, &QPushButton::clicked, this, &MainWindow::EatsEvents7);
    QObject::connect(ui->Eat_button8, &QPushButton::clicked, this, &MainWindow::EatsEvents8);
    QObject::connect(ui->Eat_button9, &QPushButton::clicked, this, &MainWindow::EatsEvents9);
    QObject::connect(ui->Eat_button10, &QPushButton::clicked, this, &MainWindow::EatsEvents10);
    QObject::connect(ui->Eat_button11, &QPushButton::clicked, this, &MainWindow::EatsEvents11);
    QObject::connect(ui->Eat_button12, &QPushButton::clicked, this, &MainWindow::EatsEvents12);
    QObject::connect(ui->Eat_button13, &QPushButton::clicked, this, &MainWindow::EatsEvents13);
    QObject::connect(ui->Eat_button14, &QPushButton::clicked, this, &MainWindow::EatsEvents14);
    QObject::connect(ui->Eat_button15, &QPushButton::clicked, this, &MainWindow::EatsEvents15);
    // коннекторы для досуга
    QObject::connect(ui->button_leisure_events1, &QPushButton::clicked, this, &MainWindow::LeisureEvents1);
    QObject::connect(ui->button_leisure_events2, &QPushButton::clicked, this, &MainWindow::LeisureEvents2);
    QObject::connect(ui->button_leisure_events3, &QPushButton::clicked, this, &MainWindow::LeisureEvents3);
    QObject::connect(ui->button_leisure_events4, &QPushButton::clicked, this, &MainWindow::LeisureEvents4);
    QObject::connect(ui->button_leisure_events5, &QPushButton::clicked, this, &MainWindow::LeisureEvents5);
    QObject::connect(ui->button_leisure_events6, &QPushButton::clicked, this, &MainWindow::LeisureEvents6);
    QObject::connect(ui->button_leisure_events7, &QPushButton::clicked, this, &MainWindow::LeisureEvents7);
    QObject::connect(ui->button_leisure_events8, &QPushButton::clicked, this, &MainWindow::LeisureEvents8);
    QObject::connect(ui->button_leisure_events9, &QPushButton::clicked, this, &MainWindow::LeisureEvents9);
    QObject::connect(ui->button_leisure_events10, &QPushButton::clicked, this, &MainWindow::LeisureEvents10);
    QObject::connect(ui->button_leisure_events11, &QPushButton::clicked, this, &MainWindow::LeisureEvents11);
    QObject::connect(ui->button_leisure_events12, &QPushButton::clicked, this, &MainWindow::LeisureEvents12);
    QObject::connect(ui->button_leisure_events13, &QPushButton::clicked, this, &MainWindow::LeisureEvents13);
    QObject::connect(ui->button_leisure_events14, &QPushButton::clicked, this, &MainWindow::LeisureEvents14);
    QObject::connect(ui->button_leisure_events15, &QPushButton::clicked, this, &MainWindow::LeisureEvents15);
    // коннекторы для работ
    QObject::connect(ui->ButtonWorkEvents1, &QPushButton::clicked, this, &MainWindow::WorkEvents1);
    QObject::connect(ui->ButtonWorkEvents2, &QPushButton::clicked, this, &MainWindow::WorkEvents2);
    QObject::connect(ui->ButtonWorkEvents3, &QPushButton::clicked, this, &MainWindow::WorkEvents3);
    QObject::connect(ui->ButtonWorkEvents4, &QPushButton::clicked, this, &MainWindow::WorkEvents4);
    QObject::connect(ui->ButtonWorkEvents5, &QPushButton::clicked, this, &MainWindow::WorkEvents5);
    QObject::connect(ui->ButtonWorkEvents6, &QPushButton::clicked, this, &MainWindow::WorkEvents6);
    QObject::connect(ui->ButtonWorkEvents7, &QPushButton::clicked, this, &MainWindow::WorkEvents7);
    QObject::connect(ui->ButtonWorkEvents8, &QPushButton::clicked, this, &MainWindow::WorkEvents8);
    QObject::connect(ui->ButtonWorkEvents9, &QPushButton::clicked, this, &MainWindow::WorkEvents9);
    QObject::connect(ui->ButtonWorkEvents10, &QPushButton::clicked, this, &MainWindow::WorkEvents10);
    QObject::connect(ui->ButtonWorkEvents11, &QPushButton::clicked, this, &MainWindow::WorkEvents11);
    QObject::connect(ui->ButtonWorkEvents12, &QPushButton::clicked, this, &MainWindow::WorkEvents12);
    QObject::connect(ui->ButtonWorkEvents13, &QPushButton::clicked, this, &MainWindow::WorkEvents13);
    QObject::connect(ui->ButtonWorkEvents14, &QPushButton::clicked, this, &MainWindow::WorkEvents14);
    QObject::connect(ui->ButtonWorkEvents15, &QPushButton::clicked, this, &MainWindow::WorkEvents15);


    setFixedSize                            (1000, 600);

    ui->stack->setCurrentIndex              (0);
    setWindowTitle                          ("Главное меню");

    ui->label_name->                    setStyleSheet   ("font-size: 50px");
    ui->button_play->               setFixedHeight  (50);
    ui->button_quit->                   setFixedHeight  (50);
    ui->progressBar_hunger->            setFormat       ("Сытость: " + QString::number(satiety) + ", затрата на день: " + QString::number(hunger));
    ui->progressBar_mental_condition->  setFormat       ("Настроение: " + QString::number(mental_condition) + ", затрата на день: " + QString::number(tireness));

    hunger_death =              new QMessageBox();
    hunger_death->              setText ("Вы погибли от голода");
    hunger_death->              setModal(true);
    mental_condition_death =    new QMessageBox();
    mental_condition_death->    setText ("Вы погибли от психического расстройства");
    mental_condition_death->    setModal(true);
}
MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
    delete hunger_death;
}
//действия кнопок магазина (не знаю почему, но если их венысти в отдельный cpp, все ломается, а тут работает, поэтому будет тут:D
//еще если деньги падают ниже 0, то дичь происходит, но мне уже лень разбираться(если выше то,все норм)
//еще нужны ограничение на progressbar чтобы не поднимались выше 100
void MainWindow::EatsEvents1()
{
    satiety+=3.f;
    ui->progressBar_hunger->setValue(satiety);
}
void MainWindow::EatsEvents2()
{
    satiety+=5.f;
    money-=50;
    ui->label_money->setText(QString::number(money));
    ui->progressBar_hunger->setValue(satiety);
}
void MainWindow::EatsEvents3()
{
    satiety+=7.f;
    money-=100;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents4()
{
    satiety+=15.f;
    money-=150;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents5()
{
    satiety+=17.f;
    money-=300;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents6()
{
    satiety+=17.f;
    money-=300;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents7()
{
    satiety+=20.f;
    money-=450;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents8()
{
    satiety+=25.f;
    money-=700;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents9()
{
    satiety+=30.f;
    money-=1200;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents10()
{
    satiety+=35.f;
    money-=3000;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents11()
{
    satiety+=40.f;
    money-=10000;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents12()
{
    satiety+=50.f;
    money-=30000;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents13()
{
    satiety+=70.f;
    money-=100000;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents14()
{
    satiety+=85.f;
    money-=150000;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
void MainWindow::EatsEvents15()
{
    satiety+=100.f;
    money-=200000;
    ui->progressBar_hunger->setValue(satiety);
    ui->label_money->setText(QString::number(money));
}
//кнопки досуга, как-нибудь потом наполню
void MainWindow::LeisureEvents1()
{

}
void MainWindow::LeisureEvents2()
{

}
void MainWindow::LeisureEvents3()
{

}
void MainWindow::LeisureEvents4()
{

}
void MainWindow::LeisureEvents5()
{

}
void MainWindow::LeisureEvents6()
{

}
void MainWindow::LeisureEvents7()
{

}
void MainWindow::LeisureEvents8()
{

}
void MainWindow::LeisureEvents9()
{

}
void MainWindow::LeisureEvents10()
{

}
void MainWindow::LeisureEvents11()
{

}
void MainWindow::LeisureEvents12()
{

}
void MainWindow::LeisureEvents13()
{

}
void MainWindow::LeisureEvents14()
{

}
void MainWindow::LeisureEvents15()
{

}
//кнопки работ
void MainWindow::WorkEvents1()
{

}
void MainWindow::WorkEvents2()
{

}
void MainWindow::WorkEvents3()
{

}
void MainWindow::WorkEvents4()
{

}
void MainWindow::WorkEvents5()
{

}
void MainWindow::WorkEvents6()
{

}
void MainWindow::WorkEvents7()
{

}
void MainWindow::WorkEvents8()
{

}
void MainWindow::WorkEvents9()
{

}
void MainWindow::WorkEvents10()
{

}
void MainWindow::WorkEvents11()
{

}
void MainWindow::WorkEvents12()
{

}
void MainWindow::WorkEvents13()
{

}
void MainWindow::WorkEvents14()
{

}
void MainWindow::WorkEvents15()
{

}
