/********************************************************************************
** Form generated from reading UI file 'professorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORWINDOW_H
#define UI_PROFESSORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_professorwindow
{
public:

    void setupUi(QDialog *professorwindow)
    {
        if (professorwindow->objectName().isEmpty())
            professorwindow->setObjectName(QString::fromUtf8("professorwindow"));
        professorwindow->resize(400, 300);

        retranslateUi(professorwindow);

        QMetaObject::connectSlotsByName(professorwindow);
    } // setupUi

    void retranslateUi(QDialog *professorwindow)
    {
        professorwindow->setWindowTitle(QCoreApplication::translate("professorwindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class professorwindow: public Ui_professorwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORWINDOW_H
