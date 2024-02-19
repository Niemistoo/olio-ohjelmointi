#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    qDebug() << "Counter value after increasing by 1 = " << counter;

    QString num = QString::number(counter);
    ui->textCount->setText(num);
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    qDebug() << "Counter value after reset = " << counter;

    QString num = QString::number(counter);
    ui->textCount->setText(num);
}


