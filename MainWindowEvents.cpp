//для обработки событий
//про индексы стопки виджетов: индексация начинается с нуля, новый индекс назначается командой ui-><имя>->setCurrentIndex(int)
//(x)(название в дизайнере)
//(0)(TitleScreen) - главное меню
//(1)(StatsScreen) - характеристики героя

#include "mainwindow.cpp"

void MainWindow::quit()
{
    QApplication::quit();
}

void MainWindow::startGame()
{
    //в случае смерти героя игра устанавливает флажок game_over, который сигнализирует игре сбросить все игровые данные
    if(game_over == true)
    {
        money = 0,
        day = 1, month = 1, year = 2000,
        satiety = 100.f, hunger = 0.5f,
        mental_condition = 100.f, tireness = 0.5f;

        game_over = false;
    }

    ui->stack->setCurrentIndex(1);
    setWindowTitle("Ваши характеристики");
    timer = new QTimer();
    QObject::connect(timer, &QTimer::timeout, this, &MainWindow::onTick);
    timer->start(1000); //1000 мс = 1 с, т.е. меньше = быстрее течение времени в игре

    ui->label_money->                   setText ("Деньги: " + QString::number(money) + " р.");
    ui->label_date->                    setText ("Дата: " + QString::number(day) + "." + QString::number(month) + "." + QString::number(year)); //вывод для первой секунды, иначе дата начнёт отображаться только от второго января
    ui->progressBar_hunger->            setValue(satiety);                                                                                      //а здесь выводы для того, чтобы полоски изначально не были пустыми
    ui->progressBar_mental_condition->  setValue(mental_condition);
}

void MainWindow::onTick()
{
    //обновление даты
    ++day;
    process(&day, &month, &year);

    //обновление сытости
    satiety -= hunger;
    ui->progressBar_hunger->setValue(satiety);

    mental_condition -= tireness;
    ui->progressBar_mental_condition->setValue(mental_condition);

    //за условие гибели беру меньше тысячной, потому что ещё не знаю, насколько сильно имущество будет сокращать расходы, иначе герой может умереть немного раньше, чем нужно
    if(satiety < 0.001)
    {
        timer->         stop();
        hunger_death->  show();
        hunger_death->  exec();
        game_over = true;
        emit(backToTitle());
    }

    if(mental_condition < 0.001)
    {
        timer->                     stop();
        mental_condition_death->    show();
        mental_condition_death->    exec();
        game_over = true;
        emit(backToTitle());
    }

    ui->label_date->                    setText     ("Дата: " + QString::number(day) + "." + QString::number(month) + "." + QString::number(year));
    ui->progressBar_hunger->            setFormat   ("Сытость: " + QString::number(satiety) + ", затрата на день: " + QString::number(hunger));
    ui->progressBar_mental_condition->  setFormat   ("Настроение: " + QString::number(mental_condition) + ", затрата на день: " + QString::number(tireness));
}

void MainWindow::backToTitle()
{
    ui->stack->setCurrentIndex(0);
    setWindowTitle            ("Главное меню");
    timer->stop();
}
void MainWindow::BackToStatsTitle()
{
    ui->stack->setCurrentIndex(1);
    setWindowTitle            ("Ваши харакстеристики");
}
void MainWindow::ShopTitle()
{
    ui->stack->setCurrentIndex(2);
    setWindowTitle            ("Магазин еды");   
}
void MainWindow::leisureTitle()
{
    ui->stack->setCurrentIndex(3);
    setWindowTitle            ("Досуг");  
}
void MainWindow::workTitle()
{
    ui->stack->setCurrentIndex(4);
    setWindowTitle            ("Работа");
}
