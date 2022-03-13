#include "mainwindow.h"
#include <QIODevice>
#include <QDir>
#include "ui_mainwindow.h"
#include "horizontaltab.h"

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
        }
        professor_stream.flush(); professor.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

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

    //connecting to the required database
    QString path = QDir::currentPath() + "/../bms/data/reservations.db";
    QSqlDatabase days = QSqlDatabase::addDatabase("QSQLITE");
    days.setDatabaseName(path);
    QString table_name = day;

    //checking if the database successfully opened or not
    if(!days.open()) {
        qDebug() << "Failed to open the database.";
    }

    //creating a sqlite command to execute
    QSqlQuery qry;
    qry.prepare("insert into '"+table_name+"' (block,room,start,end,status,faculty,year,semester,professor,subject) values ('"+block+"','"+room+"','"+start+"','"+end+"','"+status+"','"+faculty+"','"+year+"','"+semester+"','"+professor+"','"+subject+"')");
    if(qry.exec()) {    //executing the command
        qDebug() << "Written to Database";
    }
}

