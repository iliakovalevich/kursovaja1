#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "anotherwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
//    AnotherWindow anotherwindow ;
//    anotherwindow.setModal(true);
//    anotherwindow.exec();
//    hide();
    window = new AnotherWindow(this);
    window->show();

}
