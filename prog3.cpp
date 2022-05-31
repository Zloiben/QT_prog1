#include "prog3.h"
#include "ui_prog3.h"

prog3::prog3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prog3)
{
    ui->setupUi(this);
    connect(ui->back, &QPushButton::clicked, this, &prog3::back_task_3);
    connect(ui->pushButton, &QPushButton::clicked, this, &prog3::add);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &prog3::set);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &prog3::html);
}

prog3::~prog3()
{
    delete ui;
}

void prog3::back_task_3(){
    this->close();
    emit firstWindow();
}

void prog3::add(){
    ui->textEdit->append(ui->plainTextEdit->toPlainText());
}

void prog3::set(){
    ui->textEdit->setText(ui->plainTextEdit->toPlainText());
}

void prog3::html(){
    ui->textEdit->setHtml("<font color='red'>Hello</font>");
}
