#ifndef PROG3_H
#define PROG3_H

#include <QWidget>

namespace Ui {
class prog3;
}

class prog3 : public QWidget
{
    Q_OBJECT

public:
    explicit prog3(QWidget *parent = nullptr);
    ~prog3();
signals:
    void firstWindow();

private slots:
    void back_task_3();

private:
    Ui::prog3 *ui;
};

#endif // PROG3_H
