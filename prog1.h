#ifndef PROG1_H
#define PROG1_H

#include <QWidget>

namespace Ui {
class prog1;
}

class prog1 : public QWidget
{
    Q_OBJECT

public:
    explicit prog1(QWidget *parent = nullptr);
    ~prog1();

signals:
    void firstWindow();

private slots:
    void button_search_x();
    void back_task_1();

private:
    Ui::prog1 *ui;
};

#endif // PROG1_H
