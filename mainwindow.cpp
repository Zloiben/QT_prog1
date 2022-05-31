#include "mainwindow.h"
#include "qmath.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClicked(){
    float x1, x2, realPart, imaginaryPart;

    float a = ui->doubleSpinBox->value();
    float b = ui->doubleSpinBox_2->value();
    float c = ui->doubleSpinBox_3->value();

    float discriminant = (b * b) - (4 * a * c);

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
        realPart = -b / (2 * a);
        imaginaryPart = qSqrt(-discriminant) / (2 * a);
        ui->textEdit->setText(QString("x1 = %1 + i, x2 = %2 - i").arg(realPart).arg(imaginaryPart));
    } else{
        ui->textEdit->setText("Решения нет.");
    }
}
