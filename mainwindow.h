#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <prog1.h>
#include <prog2.h>
#include <prog3.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(Ui::MainWindow *ui);
    ~MainWindow();

private slots:
    void onClicked_task1();
    void onClicked_task2();
    void onClicked_task3();

private:
    Ui::MainWindow *ui;
    prog1 *sWindow;
    prog2 *sWindow2;
    prog3 *sWindow3;
};
#endif // MAINWINDOW_H
