#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include<QMessageBox>
#include <QPixmap>
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

    float satiety, hunger;
    float mental_condition, tireness;

    QMessageBox *hunger_death;
    QMessageBox *mental_condition_death;

private slots:
    void quit();
    void startGame();
    void backToTitle();
    void onTick();
    void ShopTitle();
    void BackToStatsTitle();
    void workTitle();
    void leisureTitle();
    // просто отделю
    void EatsEvents1();
    void EatsEvents2();
    void EatsEvents3();
    void EatsEvents4();
    void EatsEvents5();
    void EatsEvents6();
    void EatsEvents7();
    void EatsEvents8();
    void EatsEvents9();
    void EatsEvents10();
    void EatsEvents11();
    void EatsEvents12();
    void EatsEvents13();
    void EatsEvents14();
    void EatsEvents15();
    // и тут
    void LeisureEvents1();
    void LeisureEvents2();
    void LeisureEvents3();
    void LeisureEvents4();
    void LeisureEvents5();
    void LeisureEvents6();
    void LeisureEvents7();
    void LeisureEvents8();
    void LeisureEvents9();
    void LeisureEvents10();
    void LeisureEvents11();
    void LeisureEvents12();
    void LeisureEvents13();
    void LeisureEvents14();
    void LeisureEvents15();
    // и тут
    void WorkEvents1();
    void WorkEvents2();
    void WorkEvents3();
    void WorkEvents4();
    void WorkEvents5();
    void WorkEvents6();
    void WorkEvents7();
    void WorkEvents8();
    void WorkEvents9();
    void WorkEvents10();
    void WorkEvents11();
    void WorkEvents12();
    void WorkEvents13();
    void WorkEvents14();
    void WorkEvents15();



};

#endif // MAINWINDOW_H
