#include "view_student.h"
#include "ui_view_student.h"
#include <QtSql>

view_student::view_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_student)
{
    ui->setupUi(this);
}

view_student::~view_student()
{
    delete ui;
}

void view_student::on_vs_load_clicked()
{
    collegedbOpen();
    QSqlQuery qry;
    QSqlQueryModel *modal = new QSqlQueryModel();

    qry.prepare("select name,username,year,semester from student");
    if(qry.exec())
    {
        modal->setQuery(qry);
        ui->vs_table->setModel(modal);
    }

    collegedbClose();

}


