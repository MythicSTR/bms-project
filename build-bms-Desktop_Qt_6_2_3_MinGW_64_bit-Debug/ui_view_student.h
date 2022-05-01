/********************************************************************************
** Form generated from reading UI file 'view_student.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_STUDENT_H
#define UI_VIEW_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_view_student
{
public:
    QPushButton *vs_load;
    QTableView *vs_table;

    void setupUi(QDialog *view_student)
    {
        if (view_student->objectName().isEmpty())
            view_student->setObjectName(QString::fromUtf8("view_student"));
        view_student->resize(927, 543);
        vs_load = new QPushButton(view_student);
        vs_load->setObjectName(QString::fromUtf8("vs_load"));
        vs_load->setGeometry(QRect(370, 420, 121, 41));
        vs_table = new QTableView(view_student);
        vs_table->setObjectName(QString::fromUtf8("vs_table"));
        vs_table->setGeometry(QRect(50, 20, 751, 391));

        retranslateUi(view_student);

        QMetaObject::connectSlotsByName(view_student);
    } // setupUi

    void retranslateUi(QDialog *view_student)
    {
        view_student->setWindowTitle(QCoreApplication::translate("view_student", "Dialog", nullptr));
        vs_load->setText(QCoreApplication::translate("view_student", "load students", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_student: public Ui_view_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_STUDENT_H
