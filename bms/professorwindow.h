#ifndef PROFESSORWINDOW_H
#define PROFESSORWINDOW_H

#include <QDialog>

namespace Ui {
class professorwindow;
}

class professorwindow : public QDialog
{
    Q_OBJECT

public:
    explicit professorwindow(QWidget *parent = nullptr);
    ~professorwindow();

private:
    Ui::professorwindow *ui;
};

#endif // PROFESSORWINDOW_H
