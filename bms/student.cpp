#include "student.h"
#include "ui_student.h"
#include <QMessageBox>

student::student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student)
{
    ui->setupUi(this);
}

student::~student()
{
    delete ui;
}


void student::on_cs_create_clicked()
{
    QString name = ui->as_name->text();
    QString username = ui->as_username->text();
    QString pwd = ui->as_pwd->text();
    QString sem = ui->as_semester->currentText();
    QString year = ui->as_year->currentText();

    collegedbOpen();
    QSqlQuery qry;

     qry.prepare("insert into student (name,username,pwd,year,semester) values ('"+name+"','"+username+"','"+pwd+"','"+year+"','"+sem+"')");
     if(qry.exec())
     {
         QMessageBox::information(this,"Sucess","Sucessfully registered");
     }
     else
     {
         QMessageBox::warning(this,"Error","Could not registered the user");
     }

     collegedbClose();
}


void student::on_cs_exit_clicked()
{
    this->hide();
}

