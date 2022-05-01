/********************************************************************************
** Form generated from reading UI file 'view_professor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_PROFESSOR_H
#define UI_VIEW_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_view_professor
{
public:
    QTableView *vp_table;
    QPushButton *vp_load;

    void setupUi(QDialog *view_professor)
    {
        if (view_professor->objectName().isEmpty())
            view_professor->setObjectName(QString::fromUtf8("view_professor"));
        view_professor->resize(827, 579);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(view_professor->sizePolicy().hasHeightForWidth());
        view_professor->setSizePolicy(sizePolicy);
        vp_table = new QTableView(view_professor);
        vp_table->setObjectName(QString::fromUtf8("vp_table"));
        vp_table->setGeometry(QRect(0, 10, 800, 351));
        vp_load = new QPushButton(view_professor);
        vp_load->setObjectName(QString::fromUtf8("vp_load"));
        vp_load->setGeometry(QRect(320, 390, 141, 41));

        retranslateUi(view_professor);

        QMetaObject::connectSlotsByName(view_professor);
    } // setupUi

    void retranslateUi(QDialog *view_professor)
    {
        view_professor->setWindowTitle(QCoreApplication::translate("view_professor", "Dialog", nullptr));
        vp_load->setText(QCoreApplication::translate("view_professor", "Load Professors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_professor: public Ui_view_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_PROFESSOR_H
