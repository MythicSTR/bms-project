#include "studentwindow.h"
#include "ui_studentwindow.h"

studentwindow::studentwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentwindow)
{
    ui->setupUi(this);
}

studentwindow::~studentwindow()
{
    delete ui;
}
