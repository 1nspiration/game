//для обработки событий
//про индексы стопки виджетов: индексация начинается с нуля, новый индекс назначается командой ui-><имя>->setCurrentIndex(int)
//(x)(название в дизайнере)
//(0)(TitleScreen) - главное меню
//(1)(StatsScreen) - характеристики героя
//(2)(JobsScreen) - работа
//(3)(ShopScreen) - магазин еды
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
        mental_condition = 100.f, tireness = 0.5f,HP=100.f,damage=0.0f,
        jobID = 0;

        jobStatus(jobID);

        game_over = false;
    }

    ui->stack->setCurrentIndex(1);
    setWindowTitle("Ваши характеристики");
    timer = new QTimer();
    QObject::connect(timer, &QTimer::timeout, this, &MainWindow::onTick);
    timer->start(1000); //1000 мс = 1 с, т.е. меньше = быстрее течение времени в игре
    ui->frame_game_buttons->            show(); //вызов панели игровых кнопок
    ui->label_money->                   setText ("Деньги: " + QString::number(money) + " р.");
    ui->label_date->                    setText ("Дата: " + QString::number(day) + "." + QString::number(month) + "." + QString::number(year)); //вывод для первой секунды, иначе дата начнёт отображаться только от второго января
    ui->progressBar_hunger->            setValue(satiety);                                                                                      //а здесь выводы для того, чтобы полоски изначально не были пустыми
    ui->progressBar_mental_condition->  setValue(mental_condition);
    ui->progressBar_health->            setValue(HP);
}

void MainWindow::onTick()
{
    //обновление даты
    ++day;
    process(&day, &month, &year);

    //обновление сытости
    satiety -= hunger;
    ui->progressBar_hunger->setValue(satiety);
    HP-=damage; // если здоровье должно увеличиться, то можно damage присвоить отрицательное значение
    ui -> progressBar_health -> setValue(HP);
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
    if(HP < 0.001)
    {
        timer->                     stop();
        HP_death->    show();
        HP_death->    exec();
        game_over = true;
        emit(backToTitle());
    }
    if (satiety > 100.0f)           satiety             = 100.0f; //ограничители для характеристик героя
    if (mental_condition > 100.0f)  mental_condition    = 100.0f; //чтоб бессмертным не был
    if (HP > 100.0f) HP=100.0f;
    //зарплата каждое первое число
    if(day == 1)
    {
        switch(jobID)
        {
        case 0:
            break;
        case 1:
            money += 8000;
            break;
        case 2:
            money += 10000;
            break;
        case 3:
            money += 15000;
            break;
        case 4:
            money += 17000;
            break;
        case 5:
            money += 25000;
            break;
        case 6:
            money += 45000;
            break;
        case 7:
            money += 70000;
            break;
        case 8:
            money += 100000;
            break;
        case 9:
            money += 160000;
            break;
        case 10:
            money += 320000;
            break;
        }
    }

    //обновление всех выводов
    ui->label_date->                    setText     ("Дата: " + QString::number(day) + "." + QString::number(month) + "." + QString::number(year));
    ui->progressBar_hunger->            setFormat   ("Сытость: " + QString::number(satiety) + ", затрата на день: " + QString::number(hunger));
    ui->progressBar_mental_condition->  setFormat   ("Настроение: " + QString::number(mental_condition) + ", затрата на день: " + QString::number(tireness));
    ui->label_money->                   setText     ("Деньги: " + QString::number(money) + " р.");
    ui->progressBar_health->            setFormat   ("Здоровье" + QString::number(HP)+ ", потери в день: " + QString::number(damage));
}

void MainWindow::backToTitle()
{
    ui->stack->setCurrentIndex(0);
    setWindowTitle("Главное меню");
    ui->frame_game_buttons->hide();
    timer->stop();
}

void MainWindow::toStats()
{
    ui->stack->setCurrentIndex(1);
}

void MainWindow::toJobs()
{
    ui->stack->setCurrentIndex(2);
    setWindowTitle("Работа");
}

void MainWindow::toShop()
{
    ui->stack->setCurrentIndex(3);
    setWindowTitle("Магазин");
}
void MainWindow::toLeisure()
{
    ui->stack->setCurrentIndex(4);
    setWindowTitle("Досуг");
}

void MainWindow::jobStatus(int id)
{
    switch(id)
    {
    case 0:
        ui->label_job->setText("Работа: безработный [0 р./мес.]");
        break;
    case 1:
        ui->label_job->setText("Работа: уборщик в маке [8000 р./мес.]");
        break;
    case 2:
        ui->label_job->setText("Работа: продавец-кассир в продуктовом магазине [10000 р./мес.]");
        break;
    case 3:
        ui->label_job->setText("Работа: администратор в продуктовом магазине [15000 р./мес.]");
        break;
    case 4:
        ui->label_job->setText("Работа: HTML-верстальщик в маленькой компании [17000 р./мес.]");
        break;
    case 5:
        ui->label_job->setText("Работа: backend-разработчик в маленькой компании [25000 р./мес.]");
        break;
    case 6:
        ui->label_job->setText("Работа: Java-разработчик в средней компании [45000 р./мес.]");
        break;
    case 7:
        ui->label_job->setText("Работа: C++-разработчик в крупной компании [70000 р./мес.]");
        break;
    case 8:
        ui->label_job->setText("Работа: тимлид в крупном проекте [100000 р./мес.]");
        break;
    case 9:
        ui->label_job->setText("Работа: глава отдела в международной компании [160000 р./мес.]");
        break;
    case 10:
        ui->label_job->setText("Работа: CEO регионального филиала в международной компании [320000 р./мес.]");
        break;
    }
}
void MainWindow::Save()
{
    save save;
    save.money=money;
    save.day=day;
    save.month=month;
    save.year=year;
    save.satiety=satiety;
    save.hunger=hunger;
    save.mental_condition=mental_condition;
    save.HP=HP;
    save.damage=damage;
    save.jobID=jobID;
    save.tireness=tireness;
    std::ofstream fout;
    fout.open("save.dat",std::ios::binary | std::ios::out);
    if (!fout.is_open())
    {
        QMessageBox::critical(this,"","Error");
    }
    else
    {
    fout.clear();
    fout.write((char*)&save,sizeof(save));
    }
    fout.close();

}
void MainWindow::LoadSave()
{
    std::ifstream fin;
    save point;
    fin.open("save.dat",std::ios::binary | std::ios::in);
    if (!fin.is_open())
    {
        QMessageBox::critical(this,"","Error");
    }
    else {
    fin.read((char*)&point,sizeof(save));
    money=point.money;
    day=point.day;
    month=point.month;
    year=point.year;
    satiety=point.satiety;
    hunger=point.hunger;
    mental_condition=point.mental_condition;
    HP=point.HP;
    damage=point.damage;
    jobID=point.jobID;
    tireness=point.tireness;
    jobStatus(jobID);
    }

  }

