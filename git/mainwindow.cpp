#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cambiarTexto(){

    QString temporal, uno, dos;

    uno = ui->txtUno->text();
    dos = ui->txtDos->text();

    temporal = uno;
    uno = dos;
    dos = temporal;

    ui->txtUno->setText(uno);
    ui->txtDos->setText(dos);


}
