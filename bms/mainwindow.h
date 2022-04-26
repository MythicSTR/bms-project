#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QFile>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase reservations;
    QSqlDatabase collegedb;

    //to open the database : reservations.db
    bool reservationsOpen() {
        QString path = QDir::currentPath() + "/../bms/data/reservations.db";
        //QString path = "/Users/panda/Documents/project-official/bms-project/bms/data/reservations.db";
        reservations = QSqlDatabase::addDatabase("QSQLITE");
        reservations.setDatabaseName(path);

        if(!reservations.open()) {
            qDebug() << "Failed to connect to reservations.db!";
            return false;
        } else {
            qDebug() << "Successfully connected to reservations.db!";
            return true;
        }
    };

    //to close the database : reservations.db
    void reservationsClose() {
        reservations.close();
        reservations.removeDatabase("connectionName");
    };

    bool collegedbOpen() {
        QString path = QDir::currentPath() + "/../bms/data/college.db";
        collegedb = QSqlDatabase::addDatabase("QSQLITE");
        collegedb.setDatabaseName(path);

        if(!collegedb.open()) {
            qDebug() << "Failed to connect to college.db";
            return false;
        } else {
            qDebug() << "Successfully connected to college.db";
            return true;
        }
    }

    void collegedbClose() {
        collegedb.close();
        collegedb.removeDatabase("connectionName");
    }

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_reserve_button_clicked();

    void on_switch_button_clicked();

    void on_ps_show_clicked();

    void on_cs_show_clicked();

    void on_ov_show_clicked();

    void on_profile_search_clicked();

    void on_profile_register_clicked();

    void on_mainTabWidget_tabBarClicked(int index);

    void on_add_photo_clicked();

    void on_close_search_clicked();

    void on_delete_2_clicked();

    void on_routine_show_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

bool check_reservation(int start, int end);

#endif // MAINWINDOW_H
