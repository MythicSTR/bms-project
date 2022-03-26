#include "mainwindow.h"
#include <QIODevice>
#include <QDir>
#include "ui_mainwindow.h"
#include "horizontaltab.h"
#include <QMessageBox>

//check if room is available in given time : from reservations.db
bool room_available(int a_start, int a_end, int start, int end) {
    if(a_start == start || a_end == end) return false;
    if(start < a_start && end > a_start) return false;
    if(start > a_start && start < a_end) return false;
    return true;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dashboardTabWidget->tabBar()->setStyle(new CustomTabStyle);

    QFile faculty(":/resources/data/faculty.txt");
    QTextStream faculty_stream(&faculty);
    QString line;
    if (faculty.open(QFile::ReadOnly | QFile::Text)) {
       while (!faculty_stream.atEnd())
       {
          line = faculty_stream.readLine();
          ui->rev_faculty->addItem(line);
       }
       faculty_stream.flush(); faculty.close();
    }

    QFile professor(":/resources/data/professor.txt");
    QTextStream professor_stream(&professor);
    if(professor.open(QFile::ReadOnly | QFile::Text)) {
        while(!professor_stream.atEnd()) {
            line = professor_stream.readLine();
            ui->rev_professor->addItem(line);
            ui->ps_name->addItem(line);
            ui->ov_professor->addItem(line);
        }
        professor_stream.flush(); professor.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//to reserve a room : reservations.db
void MainWindow::on_reserve_button_clicked()
{
    //read all the data from the reserve tab
    QString block = ui->rev_block_no->currentText();
    QString room = ui->rev_room_no->text();
    QString faculty = ui->rev_faculty->currentText();
    QString year = ui->rev_year->currentText();
    QString semester = ui->rev_semester->currentText();
    QString start = ui->rev_start_time->currentText();
    QString end = ui->rev_end_time->currentText();
    QString day = ui->rev_day->currentText();
    QString professor = ui->rev_professor->currentText();
    QString subject = ui->rev_subject->text();
    QString status = "Reserved";
    std::string s_day = day.toUtf8().constData();

    reservationsOpen();     //open and connect to reservations.db
    QSqlQuery qry;
    qry.prepare("select start,end from '"+day+"' where block='"+block+"' and room='"+room+"'");   //prepare a query to search the reserved room from the database
    if(qry.exec()) {
        int check_count = 1;
        while(qry.next()) {
            qDebug() << "(" << check_count++ << ")" << "Checking...";
            int a_start = qry.value(0).toInt();
            int a_end = qry.value(1).toInt();
            if(room_available(a_start, a_end, start.toInt(), end.toInt())) {
                continue;
            } else {
                qDebug() << "Cannot Reserve! Exiting!";
                return;
            }
        }
        //if room is available
        qry.prepare("insert into '"+day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) values ('"+block+"','"+room+"','"+start+"','"+end+"','"+status+"','"+faculty+"','"+year+"','"+semester+"','"+professor+"','"+subject+"')");
        if(qry.exec()) {
            qDebug() << "Room available. Writing to the database.";
        } else qDebug() << "Couldn't execute the query to book the room!";
    } else {    //if no entry is found in the database
        qDebug() << "No entries for the data. Creating a new entry...";
        qry.prepare("insert into '"+day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) values ('"+block+"','"+room+"','"+start+"','"+end+"','"+status+"','"+faculty+"','"+year+"','"+semester+"','"+professor+"','"+subject+"')");
        if(qry.exec()) {
            qDebug() << "Created a new entry to the database.";
        } else {
            qDebug() << "Couldn't create a new entry to the database!";
        }
    }
    reservationsClose();    //close the connection to reservations.db
    qDebug() << "Successfully reserved!";
}

void MainWindow::on_switch_button_clicked()
{
    //read all the data from the switch tab
    QString from_block = ui->sw_from_block->currentText();
    QString from_room = ui->sw_from_room->text();
    QString from_day = ui->sw_from_day->currentText();
    QString from_stime = ui->sw_from_stime->currentText();
    QString from_etime = ui->sw_from_etime->currentText();
    QString to_block = ui->sw_to_block->currentText();
    QString to_room = ui->sw_to_room->text();
    QString to_day = ui->sw_to_day->currentText();
    QString to_stime = ui->sw_to_stime->currentText();
    int stime_to = to_stime.toInt();
    QString to_etime = ui->sw_to_etime->currentText();
    int etime_to= to_etime.toInt();



     reservationsOpen();
     QSqlQuery qry;
     QMessageBox::StandardButton reply = QMessageBox::question(this,"Confirmation","Do you want to switch?",QMessageBox::Yes|QMessageBox::No);
     if(reply == QMessageBox::Yes)
     {
         if(from_stime!=to_stime || from_etime!=to_etime)
         {
            QMessageBox::warning(this,"Warning","Only classes with similar time can be switched.");
            reservationsClose();
            return;

         }
          qDebug() << "reached inside yes";
         int count = 0;
         //checking if another class exist or not in the targeted location at the same time
         qry.prepare("select * from '"+to_day +"' where block='"+to_block+"' and room = '"+to_room+"' and start = '"+to_stime+"' and end = '"+to_etime+"'");
         if(qry.exec())
         {
             qDebug() << "reached inside 1";
             while(qry.next())
             {
                 count++;
             }

          }
         //checking if given class exist or not at the given time
         qry.prepare("select * from '"+from_day+"' where block ='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
          if(qry.exec())
             {
                 qDebug() << "reached inside 2";
                 int _count = 0;
                 while(qry.next())
                 {
                     _count++;
                 }

                 if(_count<1) //class does not exist
                 {
                     QMessageBox::warning(this,"Warning","Class to be switched does not exist");
                     reservationsClose();
                     return;
                 }

                  //If class to be switched exist
                 else
                 {
                        qDebug() << "reached inside 3";
                            if(count==1) //if another class exist at the same time in the targeted block
                             {
                                if(from_block==to_block)  //if both the classes are in the same day
                                {
                                    qDebug() << "reached D-1";
                                    qry.prepare("insert into temp (block,room,start,end,status,faculty,year,semester,professor,subject) select * from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                    if(qry.exec())
                                    {
                                        qDebug() << "reached D-2";
                                        qry.prepare("update temp set start ='"+to_stime+"',end='"+to_etime+"',block='"+to_block+"',room='"+to_room+"' where block='"+from_block+"' and room = '"+from_room+"' and start='"+from_stime+"'and end='"+from_etime+"'");
                                        if(qry.exec())
                                        {
                                            qDebug() << "reached D-3";
                                            qry.prepare("delete from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                            if(qry.exec())
                                            {
                                                  qDebug() << "reached D-4";
                                                  qry.prepare("update '"+from_day+"' set start ='"+from_stime+"',end='"+from_etime+"',block='"+from_block+"',room='"+from_room+"' where block='"+to_block+"' and room = '"+to_room+"' and start='"+to_stime+"'and end='"+to_etime+"'");
                                                  if(qry.exec())
                                                  {
                                                      qDebug() << "reached D-5";
                                                      qry.prepare("insert into '"+from_day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) select * from temp where block='"+to_block+"' and room = '"+to_room+"' and start = '"+to_stime+"' and end = '"+to_etime+"'");
                                                      if(qry.exec())
                                                      {
                                                          qDebug() << "reached D-6";
                                                          qry.prepare("delete from temp");
                                                          if(qry.exec())
                                                          {
                                                              QMessageBox::information(this,"Successful","Class has been sucessfully switched");
                                                              reservationsClose();
                                                              return;
                                                          }
                                                      }
                                                  }
                                            }
                                        }
                                   }
                                 }
                                else   //if both the classes are not in the same time
                                {
//                                  qry.prepare();
                                  if(qry.exec("insert into temp (block,room,start,end,status,faculty,year,semester,professor,subject) select * from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'"))
                                  {
//                                         qry.prepare();
                                         if(qry.exec("delete from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'"))
                                         {
                                           if(qry.exec("insert into '"+from_day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) select * from '"+to_day +"' where block='"+to_block+"' and room = '"+to_room+"' and start = '"+to_stime+"' and end = '"+to_etime+"'"))
                                           {
                                             //qry.prepare();
                                            if(qry.exec("update '"+from_day+"' set block = '"+from_block+"',room = '"+from_room+"',start='"+from_stime+"',end='"+from_etime+"' where block='"+to_block+"' and room = '"+to_room+"' and start = '"+to_stime+"' and end = '"+to_etime+"'"))
                                            {
//                                               qry.prepare(");
                                                if(qry.exec("delete from '"+to_day+"' where block='"+to_block+"' and room = '"+to_room+"' and start = '"+to_stime+"' and end = '"+to_etime+"'"))
                                                {
//                                                    qry.prepare();
                                                    if(qry.exec("insert into '"+to_day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) select * from temp where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'"))
                                                    {
//                                                        qry.prepare();
                                                        if(qry.exec("delete from temp"))
                                                        {
//                                                            qry.prepare(");
                                                            if(qry.exec("update '"+to_day+"' set block = '"+to_block+"',room = '"+to_room+"',start='"+to_stime+"',end='"+to_etime+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'"))
                                                            {

                                                                        QMessageBox::information(this,"Successful","Class has been sucessfully switched");
                                                                        reservationsClose();
                                                                        return;
                                                            }
                                                        }
                                                    }
                                                 }
                                              }
                                            }
                                         }
                                  }
                               }
                             }



                        if(count==0)   //If another class does not exist at the same time in the targeted block
                        {
                            qDebug() << "reached inside 5";
                              //check time validity
                            //class exist between the given time so it can be switched

                              qry.prepare("select * from '"+to_day+"' where block='"+to_block+"' and room = '"+to_room+"' and (start between :to_stime_to and :to_etime_to) and (end between :to_stime_to and :to_etime_to) ");
                              qry.bindValue(":to_stime_to",stime_to);
                              qry.bindValue(":to_etime_to",etime_to);
                              int check_class = 0;
                              if(qry.exec())
                               {
                               while(qry.next())
                               {
                                    check_class++;
                               }
                              }
                                qDebug() << "value of check_class is " << check_class;
                               //if another class exist which runs or end between the given time duration
                               qry.prepare("select * from '"+to_day+"' where block='"+to_block+"' and room = '"+to_room+"' and (((start between :to_stime_to and :to_etime_to) and (end not between :to_stime_to and :to_etime_to)) or ((start not between :to_stime_to and :to_etime_to) and (end between :to_stime_to and :to_etime_to)))");
                               qry.bindValue(":to_stime_to",stime_to);
                               qry.bindValue(":to_etime_to",etime_to);
                               int _check_class = 0;
                               if(qry.exec())
                               {
                                while(qry.next())
                                {
                                       _check_class++;
                                }
                               }

                                qDebug() <<"value of _check_class is " << _check_class;
                               if(check_class==0 && _check_class==0)
                               {
                                        //To insert into targeted table
                                        qDebug() << "checking time availability";
                                        //class time available
                                        qry.prepare("insert into '"+to_day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) select * from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                        if(qry.exec())
                                        {
                                            qry.prepare("delete from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                            if(qry.exec())
                                            {
                                                qry.prepare("update '"+to_day+"' set block = '"+to_block+"',room = '"+to_room+"',start='"+to_stime+"',end='"+to_etime+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                                if(qry.exec())
                                                {
                                                    QMessageBox::information(this,"Successful","Class has been sucessfully switched");
                                                    reservationsClose();
                                                    return;
                                                }
                                            }
                                        }
                                        //if can not insert data in another table
                                        else
                                        {
                                            QMessageBox::warning(this,"Error","Could not switch the class !!!");
                                            reservationsClose();
                                            return;
                                        }
                                }

                                else if(check_class>=1 && _check_class ==0) //only classes exist during the time period and no other class ends or starts during the time period
                                {
                                  qDebug() << "reached inside 8";
                                  qry.prepare("insert into temp (block,room,start,end,status,faculty,year,semester,professor,subject) select * from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                  if(qry.exec())
                                  {
                                         qDebug() << "reached inside 5.1";
                                         qry.prepare("delete from '"+from_day+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                         if(qry.exec())
                                         {
                                             qDebug() << "reached inside 5.2";

                                                qry.prepare("select * from '"+to_day+"' where block='"+to_block+"' and room = '"+to_room+"' and (start between '"+to_stime+"' and '"+to_etime+"') and (end between '"+to_stime+"' and '"+to_etime+"')");
                                                if(qry.exec())
                                                {
                                                     while(qry.next())
                                                     {
                                                         qry.prepare("insert into '"+from_day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) select * from '"+to_day+"' where block='"+to_block+"' and room = '"+to_room+"' and (start between '"+to_stime+"' and '"+to_etime+"') and (end between '"+to_stime+"' and '"+to_etime+"')");
                                                         if(qry.exec())
                                                         {
                                                             qry.prepare("delete from '"+to_day+"' where block='"+to_block+"' and room = '"+to_room+"' and (start between '"+to_stime+"' and '"+to_etime+"') and (end between '"+to_stime+"' and '"+to_etime+"') ");
                                                             if(qry.exec())
                                                             {
                                                                 qDebug()<<"Moved all the classes";
                                                             }
                                                         }
                                                     }
                                              }
                                              qry.prepare("insert into '"+to_day+"' (block,room,start,end,status,faculty,year,semester,professor,subject) select * from temp where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                              if(qry.exec())
                                               {
                                                     qry.prepare("delete from temp");
                                                    if(qry.exec())
                                                    {
                                                        qry.prepare("update '"+to_day+"' set block = '"+to_block+"',room = '"+to_room+"',start='"+to_stime+"',end='"+to_etime+"' where block='"+from_block+"' and room = '"+from_room+"' and start = '"+from_stime+"' and end = '"+from_etime+"'");
                                                        if(qry.exec())
                                                        {
                                                            qry.prepare("update '"+from_day+"' set block = '"+from_block+"',room = '"+from_room+"' where block='"+to_block+"' and room = '"+to_room+"' and (start between '"+to_stime+"' and '"+to_etime+"') and (end between '"+to_stime+"' and '"+to_etime+"')");
                                                            if(qry.exec())
                                                             {
                                                                QMessageBox::information(this,"Successful","Class has been sucessfully switched");
                                                                reservationsClose();
                                                                 return;
                                                             }
                                                        }
                                                     }
                                                }
                                         }
                                  }

                           }
                           else
                           {
                                     qDebug() << "reached inside 9";
                                    QMessageBox::warning(this,"Class Time Error","Class Time Not Available");
                                    reservationsClose();
                                    return;
                           }
                     }


                       if(count>1)    //Error in reading of the database
                       {
                            QMessageBox::warning(this,"Error","Database Error !!!");
                            reservationsClose();
                            return;
                        }

                } //end of "if class to be switched exist"
           }
        //} //end of reply yes
     }

     else
     {
        QMessageBox::information(this,"Termination","Switch process was terminated.");
        reservationsClose();
        return;
     }

}

void MainWindow::on_ps_show_clicked()
{
    QString professor = ui->ps_name->currentText();
    QString day = ui->ps_day->currentText();
    QString start = ui->ps_start->currentText();
    QString end = ui->ps_end->currentText();
    bool available = true;

    reservationsOpen();
    QSqlQuery qry;
    qry.prepare("Select start,end from '"+day+"' where professor='"+professor+"'");
    if(qry.exec()) {
        while(qry.next()) {
            int a_start = qry.value(0).toInt();
            int a_end = qry.value(1).toInt();
            if(room_available(a_start, a_end, start.toInt(), end.toInt())) {
                continue;
            } else {
                available = false;
                break;
            }
        }
        if(available) {
            QMessageBox::information(this, "Status", professor+" is available!");
        } else {
            QMessageBox::information(this, "Status", professor+" is not available!");
        }
    } else {
        qDebug() << "Failed to execute the query!";
    }
    reservationsClose();
}

void MainWindow::on_cs_show_clicked()
{

    QString block = ui->cs_block->currentText();
    QString room = ui->cs_room->text();
    QString day = ui->cs_day->currentText();
    QString start = ui->cs_start_time->currentText();
    QString end = ui->cs_end_time->currentText();

    bool available  = true;
    reservationsOpen();
    QSqlQuery qry;

    qry.prepare("select start,end from '"+day+"' where block='"+block+"' and room= '"+room+"'" );
                if(qry.exec()){
                       int check_count =1;
                       while (qry.next()){
                           qDebug()<<"(" << check_count++ << ")" <<"Checking...";
                           int a_start= qry.value(0).toInt();
                           int a_end= qry.value(1).toInt();
                           if (room_available(a_start,a_end,start.toInt(), end.toInt())) {
                               continue;
                           } else{
                             available = false;
                               break;
                           }
                       }
                      if (available){
                          QMessageBox::information(this, "class","Class is available");
                      }else{
                          QMessageBox::information(this, "class","Class is not available");
                      } }else {

                          qDebug()<<"Failed to execute the query!";
                      }
                      reservationsClose();

                   }


void MainWindow::on_ov_show_clicked()
{
    reservationsOpen();
    QString day = ui->ov_day->currentText();
    QString block = ui->ov_block->currentText();
    QString professor = ui->ov_professor->currentText();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry = new QSqlQuery(reservations);

    if(block.toUtf8() != "All" && professor.toUtf8() != "All") {
        qDebug() << block << " " << professor;
        qry->prepare("select * from '"+day+"' where block = '"+block+"' and professor = '"+professor+"'");
       }
    else if(block.toUtf8() != "All" && professor.toUtf8() == "All"){
        qry->prepare("select * from '"+day+"' where block = '"+block+"'");
        qDebug() << "2";
    }
    else if(professor.toUtf8() != "All" && block.toUtf8() == "All")
        qry->prepare("select * from '"+day+"' where professor = '"+professor+"'");
    else
        qry->prepare("select * from '"+day+"'");

    qry->exec();
    modal->setQuery(*qry);
    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Block"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Room"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Start"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("End"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Status"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Faculty"));
    modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Year"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Semester"));
    modal->setHeaderData(8, Qt::Horizontal, QObject::tr("Professor"));
    modal->setHeaderData(9, Qt::Horizontal, QObject::tr("Subject"));


    ui->ov_tableView->setModel(modal);
    ui->ov_tableView->horizontalHeader()->setStretchLastSection(true);
    ui->ov_tableView->setColumnWidth(5, 240);
    ui->ov_tableView->setColumnWidth(8, 240);
    ui->ov_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ov_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    reservationsClose();
    qDebug() << modal->rowCount();
}

