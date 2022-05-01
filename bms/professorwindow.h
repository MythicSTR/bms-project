#ifndef PROFESSORWINDOW_H
#define PROFESSORWINDOW_H
#include <QtSql>
#include <QFile>
#include <QDialog>

namespace Ui {
class professorwindow;
}

class professorwindow : public QDialog
{

    Q_OBJECT

    QSqlDatabase reservations;


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

public:
    explicit professorwindow(QWidget *parent = nullptr);
    ~professorwindow();

private slots:
    void on_pw_show_2_clicked();

    void on_pw_show_clicked();

private:
    Ui::professorwindow *ui;
};

#endif // PROFESSORWINDOW_H
