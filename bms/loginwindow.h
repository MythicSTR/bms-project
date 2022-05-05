#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LogInWindow; }
QT_END_NAMESPACE

class LogInWindow : public QMainWindow
{
    Q_OBJECT

public:
    LogInWindow(QWidget *parent = nullptr, QString username = nullptr);
    ~LogInWindow();

private slots:
void on_pushButton_clicked();

void on_pushButton_2_clicked();

private:
    Ui::LogInWindow *ui;
    MainWindow *mainwindow;
};
#endif // LOGINWINDOW_H
