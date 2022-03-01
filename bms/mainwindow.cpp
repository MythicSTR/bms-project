#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "horizontaltab.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dashboardTabWidget->tabBar()->setStyle(new CustomTabStyle);
}

MainWindow::~MainWindow()
{
    delete ui;
}
