#include "prog1.h"
#include "ui_prog1.h"

prog1::prog1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prog1)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &prog1::button_search_x);
    connect(ui->back, &QPushButton::clicked, this, &prog1::back_task_1);
}

prog1::~prog1()
{
    delete ui;
}

void prog1::button_search_x(){
    float x1, x2, realPart, imaginaryPart;

    int a = ui->a->value();
    int b = ui->b->value();
    int c = ui->c->value();

    float discriminant = qPow(b, 2) - (4 * a * c);

    if (a == 0 && b == 0 && c == 0){
       ui->textEdit->setText("Введите данные.");
    }
    else if (a == 0 && b == 0 && c != 0){
        ui->textEdit->setText("Решения нет.");
    }
    else if (a == 0 && b != 0 && c != 0){
        x1 = -c / b;
        ui->textEdit->setText(QString("x1 = %1").arg(x1));
    }
    else if (a != 0 && discriminant > 0){
        x1 = (-b - qSqrt(discriminant)) / (2 * a);
        x2 = (-b + qSqrt(discriminant)) / (2 * a);

        ui->textEdit->setText(QString("x1 = %1, x2 = %2").arg(x1).arg(x2));
    }
    else if (a != 0 && discriminant == 0){
        x1 = -b / (2 * a);
        ui->textEdit->setText(QString("x1 = %1").arg(x1));
    }
    else if (a != 0 && discriminant < 0){
        x1 = -b / (2 * a);
        x2 = qSqrt(-discriminant) / (2 * a);
        ui->textEdit->setText(QString("x1 = %1 + i, x2 = %2 - i").arg(x1).arg(x2));
    } else{
        ui->textEdit->setText("Решения нет.");
    }
}

void prog1::back_task_1(){
    this->close();
    emit firstWindow();
}
