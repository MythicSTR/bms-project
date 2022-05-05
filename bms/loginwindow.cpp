#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>

LogInWindow::LogInWindow(QWidget *parent, QString username)
    : QMainWindow(parent)
    , ui(new Ui::LogInWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login");
    setWindowIcon(QIcon(":/data/icon.png"));

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
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();
    }
    else {
         QMessageBox::warning(this,"Login","Username and Password is not correct");
    }
}


void LogInWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}

