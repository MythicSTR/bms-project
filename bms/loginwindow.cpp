#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>

LogInWindow::LogInWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogInWindow)
{
    ui->setupUi(this);
}

LogInWindow::~LogInWindow()
{
    delete ui;
}

void LogInWindow::on_pushButton_clicked()
{
    QString Username = ui->lineEdit_username->text();
    QString Password = ui->lineEdit_password->text();
    if (Username == "test" && Password == "test"){
        QMessageBox::information(this,"Login","Username and Password is correct");
    }
    else {
         QMessageBox::warning(this,"Login","Username and Password is not correct");
    }
}

