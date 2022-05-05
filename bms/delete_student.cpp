#include "delete_student.h"
#include "ui_delete_student.h"
#include <QMessageBox>

delete_student::delete_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_student)
{
    ui->setupUi(this);
}

delete_student::~delete_student()
{
    delete ui;
}


//void MainWindow::on_profile_search_clicked()
//{
//    reservationsOpen();     //open and connect to reservations.db
//    QSqlQuery qry;
//    ui->show_info_widget->setVisible(true);
//    QString _fname = ui->profile_search_fname->text();
//    QString _mname = ui->profile_search_mname->text();
//    QString _lname = ui->profile_search_lname->text();
//    QString _username = ui->profile_search_username->text();

//    QString arr[7];
//    int i=0;
//    if(_username.size()==0)
//    {
//        qDebug() << "Entered 1";
//        qry.prepare("select * from profile where fname='"+_fname+"' and mname='"+_mname+"' and  lname='"+_lname+"'");
//        if(qry.exec())
//        {
//            qDebug() << "Entered 2";
//            int count=0;
//            while(qry.next())
//            {
//                count++;
//            }

//            if(count>1)
//            {
//                QMessageBox :: warning(this,"Error","There is multiple accounts with same name. Please enter username.");
//            }
//            while(qry.next())
//            {
//                arr[i]=qry.value(i).toString();     //qry.value no working
//                i++;
//            }

//         }
//    }

//    else
//    {
//        qry.prepare("select * from profile where username='"+_username+"");
//        if(qry.exec())
//        {
//            while(qry.next())
//            {
//                arr[i] = qry.value(i).toString();
//                i++;
//            }
//        }
//    }

//    ui->show_fname->setText("First Name : ");
//    ui->show_mname->setText("Middle Name : ");
//    ui->show_lname->setText("Last Name : ");
//    ui->show_gender->setText("Gender : ");
//    ui->show_dept->setText("Department : ");
//    ui->show_username->setText("Username : ");
//    QPixmap pix(arr[6]);
//    int w = ui->show_pic -> width();
//    int h = ui-> show_pic -> height();
//    ui->show_pic->setPixmap (pix.scaled(w,h,Qt::KeepAspectRatio));
//    reservationsClose();
//}

void delete_student::on_delete_2_clicked()
{
    QString username = ui->username->text();
    collegedbOpen();
    QSqlQuery qry;

    QMessageBox::StandardButton reply = QMessageBox::question(this,"Confirmation","Do you want to delete the user " + username +" ?",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes);
    if(reply==QMessageBox::Yes)
    {
        qry.prepare("delete from student where username='"+username+"'");
        if(qry.exec())
        {
            QMessageBox::information(this,"success","Account sucessfully deleted");
        }
    }
}

