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


void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("ERROU qual os verbos dessa oração?");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("ERROU esse periodo tem mais de um verbo");
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("CERTA periodo composto pelos verbos(partir e ficar)");
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("ERROU esse periodo não é simples e sem não é verbo");
}

