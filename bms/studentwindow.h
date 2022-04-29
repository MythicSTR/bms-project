#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QDialog>

namespace Ui {
class studentwindow;
}

class studentwindow : public QDialog
{
    Q_OBJECT

public:
    explicit studentwindow(QWidget *parent = nullptr);
    ~studentwindow();

private:
    Ui::studentwindow *ui;
};

#endif // STUDENTWINDOW_H
