#ifndef BLOCK_H
#define BLOCK_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class block;
}

class block : public QDialog
{
    Q_OBJECT

    QSqlDatabase reservations;
    QSqlDatabase collegedb;

    //to open the database : reservations.db
    bool reservationsOpen() {
         QString path = QDir::currentPath() + "/../bms/data/reservations.db";
     //  QString path = "/Users/panda/Documents/project-official/bms-project/bms/data/reservations.db";
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
       // QString path = "/Users/panda/Documents/project-official/bms-project/bms/data/college.db";
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

public:
    explicit block(QWidget *parent = nullptr);
    ~block();

private slots:
    void on_block_add_clicked();

    void on_block_exit_clicked();

private:
    Ui::block *ui;
};

#endif // BLOCK_H
