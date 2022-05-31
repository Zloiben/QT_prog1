#ifndef PROG2_H
#define PROG2_H

#include <QWidget>

namespace Ui {
class prog2;
}

class prog2 : public QWidget
{
    Q_OBJECT

public:
    explicit prog2(QWidget *parent = nullptr);
    ~prog2();

signals:
    void firstWindow();

private slots:
    void button_search_side_triangle();
    void back_task_2();

private:
    Ui::prog2 *ui;
};

#endif // PROG2_H
