/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentwindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *routine_day;
    QLabel *label_2;
    QComboBox *routine_faculty;
    QLabel *label;
    QComboBox *routine_year;
    QLabel *label_3;
    QComboBox *routine_semester;
    QTableView *routine_table;
    QPushButton *routine_show;

    void setupUi(QDialog *studentwindow)
    {
        if (studentwindow->objectName().isEmpty())
            studentwindow->setObjectName(QString::fromUtf8("studentwindow"));
        studentwindow->resize(1016, 668);
        tabWidget = new QTabWidget(studentwindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 651));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(-10, 0, 1001, 631));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 961, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        routine_day = new QComboBox(layoutWidget);
        routine_day->addItem(QString());
        routine_day->addItem(QString());
        routine_day->addItem(QString());
        routine_day->addItem(QString());
        routine_day->addItem(QString());
        routine_day->addItem(QString());
        routine_day->setObjectName(QString::fromUtf8("routine_day"));

        horizontalLayout->addWidget(routine_day);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        routine_faculty = new QComboBox(layoutWidget);
        routine_faculty->setObjectName(QString::fromUtf8("routine_faculty"));

        horizontalLayout->addWidget(routine_faculty);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        routine_year = new QComboBox(layoutWidget);
        routine_year->addItem(QString());
        routine_year->addItem(QString());
        routine_year->addItem(QString());
        routine_year->addItem(QString());
        routine_year->addItem(QString());
        routine_year->addItem(QString());
        routine_year->setObjectName(QString::fromUtf8("routine_year"));

        horizontalLayout->addWidget(routine_year);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        routine_semester = new QComboBox(layoutWidget);
        routine_semester->addItem(QString());
        routine_semester->addItem(QString());
        routine_semester->addItem(QString());
        routine_semester->addItem(QString());
        routine_semester->setObjectName(QString::fromUtf8("routine_semester"));

        horizontalLayout->addWidget(routine_semester);

        routine_table = new QTableView(tab_3);
        routine_table->setObjectName(QString::fromUtf8("routine_table"));
        routine_table->setGeometry(QRect(-5, 41, 991, 521));
        routine_show = new QPushButton(tab_3);
        routine_show->setObjectName(QString::fromUtf8("routine_show"));
        routine_show->setGeometry(QRect(20, 520, 931, 40));
        routine_show->setMinimumSize(QSize(0, 30));
        tabWidget_2->addTab(tab_3, QString());
        tabWidget->addTab(tab, QString());

        retranslateUi(studentwindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(studentwindow);
    } // setupUi

    void retranslateUi(QDialog *studentwindow)
    {
        studentwindow->setWindowTitle(QCoreApplication::translate("studentwindow", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("studentwindow", "Day", nullptr));
        routine_day->setItemText(0, QCoreApplication::translate("studentwindow", "Sunday", nullptr));
        routine_day->setItemText(1, QCoreApplication::translate("studentwindow", "Monday", nullptr));
        routine_day->setItemText(2, QCoreApplication::translate("studentwindow", "Tuesday", nullptr));
        routine_day->setItemText(3, QCoreApplication::translate("studentwindow", "Wednesday", nullptr));
        routine_day->setItemText(4, QCoreApplication::translate("studentwindow", "Thursday", nullptr));
        routine_day->setItemText(5, QCoreApplication::translate("studentwindow", "Friday", nullptr));

        label_2->setText(QCoreApplication::translate("studentwindow", "Faculty", nullptr));
        label->setText(QCoreApplication::translate("studentwindow", "Year", nullptr));
        routine_year->setItemText(0, QCoreApplication::translate("studentwindow", "1", nullptr));
        routine_year->setItemText(1, QCoreApplication::translate("studentwindow", "2", nullptr));
        routine_year->setItemText(2, QCoreApplication::translate("studentwindow", "3", nullptr));
        routine_year->setItemText(3, QCoreApplication::translate("studentwindow", "4", nullptr));
        routine_year->setItemText(4, QString());
        routine_year->setItemText(5, QString());

        label_3->setText(QCoreApplication::translate("studentwindow", "Semester", nullptr));
        routine_semester->setItemText(0, QCoreApplication::translate("studentwindow", "I", nullptr));
        routine_semester->setItemText(1, QCoreApplication::translate("studentwindow", "II", nullptr));
        routine_semester->setItemText(2, QString());
        routine_semester->setItemText(3, QString());

        routine_show->setText(QCoreApplication::translate("studentwindow", "Show", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("studentwindow", "Routine", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("studentwindow", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentwindow: public Ui_studentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
