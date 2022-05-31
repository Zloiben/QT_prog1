#include "prog3.h"
#include "ui_prog3.h"

prog3::prog3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prog3)
{
    ui->setupUi(this);
    connect(ui->back, &QPushButton::clicked, this, &prog3::back_task_3);
}

prog3::~prog3()
{
    delete ui;
}

void prog3::back_task_3(){
    this->close();
    emit firstWindow();
}
