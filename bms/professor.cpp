#include "professor.h"
#include "ui_professor.h"

Professor::Professor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Professor)
{
    ui->setupUi(this);
}

Professor::~Professor()
{
    delete ui;
}
