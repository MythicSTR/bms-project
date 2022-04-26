#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <QDialog>

namespace Ui {
class Professor;
}

class Professor : public QDialog
{
    Q_OBJECT

public:
    explicit Professor(QWidget *parent = nullptr);
    ~Professor();

private:
    Ui::Professor *ui;
};

#endif // PROFESSOR_H
