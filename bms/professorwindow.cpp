#include "professorwindow.h"
#include "ui_professorwindow.h"

professorwindow::professorwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::professorwindow)
{
    ui->setupUi(this);
}

professorwindow::~professorwindow()
{
    delete ui;
}
