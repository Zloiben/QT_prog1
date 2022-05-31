#include "prog2.h"
#include "ui_prog2.h"
#include <QtMath>
#include <iostream>

prog2::prog2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prog2)
{
    ui->setupUi(this);

    connect(ui->back, &QPushButton::clicked, this, &prog2::back_task_2);
    connect(ui->pushButton, &QPushButton::clicked, this, &prog2::button_search_side_triangle);
}

prog2::~prog2()
{
    delete ui;
}

void prog2::back_task_2(){
    this->close();
    emit firstWindow();
}

void prog2::button_search_side_triangle(){

    float RADIAN = 57.29577951308;

    int a = ui->a->value();
    int b = ui->b->value();
    float side;

    if (ui->radian->isChecked()){
        side = qRadiansToDegrees(ui->side->value());
    }else{
        side = ui->side->value();
    }

    float result = qSqrt((qPow(a, 2) + qPow(b, 2) - 2 * a * b * qCos(side)));
    ui->textEdit->setText(QString("%1").arg(result));

}
