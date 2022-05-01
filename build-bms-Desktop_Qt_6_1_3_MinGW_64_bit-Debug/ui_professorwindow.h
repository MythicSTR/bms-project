/********************************************************************************
** Form generated from reading UI file 'professorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORWINDOW_H
#define UI_PROFESSORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_professorwindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *pw_faculty;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *pw_year;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *pw_semester;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *pw_day_2;
    QTableView *pw_table;
    QPushButton *pw_show_2;
    QWidget *tab_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *pw_block;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *pw_room;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *pw_start_time;
    QLabel *label_8;
    QComboBox *pw_end_time;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QComboBox *pw_day;
    QPushButton *pw_show;
    QWidget *tab_4;

    void setupUi(QDialog *professorwindow)
    {
        if (professorwindow->objectName().isEmpty())
            professorwindow->setObjectName(QString::fromUtf8("professorwindow"));
        professorwindow->resize(1202, 806);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(professorwindow->sizePolicy().hasHeightForWidth());
        professorwindow->setSizePolicy(sizePolicy);
        tabWidget = new QTabWidget(professorwindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1191, 801));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 1171, 741));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 1111, 721));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pw_faculty = new QComboBox(layoutWidget);
        pw_faculty->setObjectName(QString::fromUtf8("pw_faculty"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pw_faculty->sizePolicy().hasHeightForWidth());
        pw_faculty->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pw_faculty);


        horizontalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_2);

        pw_year = new QComboBox(layoutWidget);
        pw_year->addItem(QString());
        pw_year->addItem(QString());
        pw_year->addItem(QString());
        pw_year->addItem(QString());
        pw_year->setObjectName(QString::fromUtf8("pw_year"));

        horizontalLayout_2->addWidget(pw_year);


        horizontalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pw_semester = new QComboBox(layoutWidget);
        pw_semester->addItem(QString());
        pw_semester->addItem(QString());
        pw_semester->setObjectName(QString::fromUtf8("pw_semester"));

        horizontalLayout_3->addWidget(pw_semester);


        horizontalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pw_day_2 = new QComboBox(layoutWidget);
        pw_day_2->addItem(QString());
        pw_day_2->addItem(QString());
        pw_day_2->addItem(QString());
        pw_day_2->addItem(QString());
        pw_day_2->addItem(QString());
        pw_day_2->addItem(QString());
        pw_day_2->setObjectName(QString::fromUtf8("pw_day_2"));

        horizontalLayout_4->addWidget(pw_day_2);


        horizontalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_9);

        pw_table = new QTableView(layoutWidget);
        pw_table->setObjectName(QString::fromUtf8("pw_table"));

        verticalLayout_2->addWidget(pw_table);

        pw_show_2 = new QPushButton(layoutWidget);
        pw_show_2->setObjectName(QString::fromUtf8("pw_show_2"));

        verticalLayout_2->addWidget(pw_show_2);

        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 20, 641, 681));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        groupBox_2->setMinimumSize(QSize(600, 500));
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(11, 11, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        pw_block = new QComboBox(groupBox_2);
        pw_block->setObjectName(QString::fromUtf8("pw_block"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pw_block->sizePolicy().hasHeightForWidth());
        pw_block->setSizePolicy(sizePolicy4);
        pw_block->setMinimumSize(QSize(300, 40));

        horizontalLayout_5->addWidget(pw_block);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        pw_room = new QLineEdit(groupBox_2);
        pw_room->setObjectName(QString::fromUtf8("pw_room"));
        sizePolicy4.setHeightForWidth(pw_room->sizePolicy().hasHeightForWidth());
        pw_room->setSizePolicy(sizePolicy4);
        pw_room->setMinimumSize(QSize(300, 40));

        horizontalLayout_6->addWidget(pw_room);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        pw_start_time = new QComboBox(groupBox_2);
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->addItem(QString());
        pw_start_time->setObjectName(QString::fromUtf8("pw_start_time"));
        sizePolicy4.setHeightForWidth(pw_start_time->sizePolicy().hasHeightForWidth());
        pw_start_time->setSizePolicy(sizePolicy4);
        pw_start_time->setMinimumSize(QSize(150, 40));

        horizontalLayout_7->addWidget(pw_start_time);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setMinimumSize(QSize(65, 0));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);

        pw_end_time = new QComboBox(groupBox_2);
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->addItem(QString());
        pw_end_time->setObjectName(QString::fromUtf8("pw_end_time"));
        sizePolicy4.setHeightForWidth(pw_end_time->sizePolicy().hasHeightForWidth());
        pw_end_time->setSizePolicy(sizePolicy4);
        pw_end_time->setMinimumSize(QSize(150, 40));

        horizontalLayout_7->addWidget(pw_end_time);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        pw_day = new QComboBox(groupBox_2);
        pw_day->addItem(QString());
        pw_day->addItem(QString());
        pw_day->addItem(QString());
        pw_day->addItem(QString());
        pw_day->addItem(QString());
        pw_day->addItem(QString());
        pw_day->setObjectName(QString::fromUtf8("pw_day"));
        sizePolicy4.setHeightForWidth(pw_day->sizePolicy().hasHeightForWidth());
        pw_day->setSizePolicy(sizePolicy4);
        pw_day->setMinimumSize(QSize(300, 40));

        horizontalLayout_8->addWidget(pw_day);


        verticalLayout->addLayout(horizontalLayout_8);

        pw_show = new QPushButton(groupBox_2);
        pw_show->setObjectName(QString::fromUtf8("pw_show"));
        pw_show->setMinimumSize(QSize(300, 40));

        verticalLayout->addWidget(pw_show);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());

        retranslateUi(professorwindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(professorwindow);
    } // setupUi

    void retranslateUi(QDialog *professorwindow)
    {
        professorwindow->setWindowTitle(QCoreApplication::translate("professorwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("professorwindow", "Faculty", nullptr));
        label_2->setText(QCoreApplication::translate("professorwindow", "Year", nullptr));
        pw_year->setItemText(0, QCoreApplication::translate("professorwindow", "1st", nullptr));
        pw_year->setItemText(1, QCoreApplication::translate("professorwindow", "2nd", nullptr));
        pw_year->setItemText(2, QCoreApplication::translate("professorwindow", "3rd", nullptr));
        pw_year->setItemText(3, QCoreApplication::translate("professorwindow", "4th", nullptr));

        label_3->setText(QCoreApplication::translate("professorwindow", "Semester", nullptr));
        pw_semester->setItemText(0, QCoreApplication::translate("professorwindow", "1st", nullptr));
        pw_semester->setItemText(1, QCoreApplication::translate("professorwindow", "2nd", nullptr));

        label_4->setText(QCoreApplication::translate("professorwindow", "Day", nullptr));
        pw_day_2->setItemText(0, QCoreApplication::translate("professorwindow", "Sunday", nullptr));
        pw_day_2->setItemText(1, QCoreApplication::translate("professorwindow", "Monday", nullptr));
        pw_day_2->setItemText(2, QCoreApplication::translate("professorwindow", "Tuesday", nullptr));
        pw_day_2->setItemText(3, QCoreApplication::translate("professorwindow", "Wednesday", nullptr));
        pw_day_2->setItemText(4, QCoreApplication::translate("professorwindow", "Thursday", nullptr));
        pw_day_2->setItemText(5, QCoreApplication::translate("professorwindow", "Friday", nullptr));

        pw_show_2->setText(QCoreApplication::translate("professorwindow", "Show", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("professorwindow", "Routine", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("professorwindow", "Block", nullptr));
        label_6->setText(QCoreApplication::translate("professorwindow", "Room No.", nullptr));
        label_7->setText(QCoreApplication::translate("professorwindow", "Time", nullptr));
        pw_start_time->setItemText(0, QCoreApplication::translate("professorwindow", "6", nullptr));
        pw_start_time->setItemText(1, QCoreApplication::translate("professorwindow", "7", nullptr));
        pw_start_time->setItemText(2, QCoreApplication::translate("professorwindow", "8", nullptr));
        pw_start_time->setItemText(3, QCoreApplication::translate("professorwindow", "9", nullptr));
        pw_start_time->setItemText(4, QCoreApplication::translate("professorwindow", "10", nullptr));
        pw_start_time->setItemText(5, QCoreApplication::translate("professorwindow", "11", nullptr));
        pw_start_time->setItemText(6, QCoreApplication::translate("professorwindow", "12", nullptr));
        pw_start_time->setItemText(7, QCoreApplication::translate("professorwindow", "13", nullptr));
        pw_start_time->setItemText(8, QCoreApplication::translate("professorwindow", "14", nullptr));
        pw_start_time->setItemText(9, QCoreApplication::translate("professorwindow", "15", nullptr));
        pw_start_time->setItemText(10, QCoreApplication::translate("professorwindow", "16", nullptr));
        pw_start_time->setItemText(11, QCoreApplication::translate("professorwindow", "17", nullptr));
        pw_start_time->setItemText(12, QCoreApplication::translate("professorwindow", "18", nullptr));

        label_8->setText(QCoreApplication::translate("professorwindow", "to", nullptr));
        pw_end_time->setItemText(0, QCoreApplication::translate("professorwindow", "7", nullptr));
        pw_end_time->setItemText(1, QCoreApplication::translate("professorwindow", "8", nullptr));
        pw_end_time->setItemText(2, QCoreApplication::translate("professorwindow", "9", nullptr));
        pw_end_time->setItemText(3, QCoreApplication::translate("professorwindow", "10", nullptr));
        pw_end_time->setItemText(4, QCoreApplication::translate("professorwindow", "11", nullptr));
        pw_end_time->setItemText(5, QCoreApplication::translate("professorwindow", "12", nullptr));
        pw_end_time->setItemText(6, QCoreApplication::translate("professorwindow", "13", nullptr));
        pw_end_time->setItemText(7, QCoreApplication::translate("professorwindow", "14", nullptr));
        pw_end_time->setItemText(8, QCoreApplication::translate("professorwindow", "15", nullptr));
        pw_end_time->setItemText(9, QCoreApplication::translate("professorwindow", "16", nullptr));
        pw_end_time->setItemText(10, QCoreApplication::translate("professorwindow", "17", nullptr));
        pw_end_time->setItemText(11, QCoreApplication::translate("professorwindow", "18", nullptr));
        pw_end_time->setItemText(12, QCoreApplication::translate("professorwindow", "19", nullptr));

        label_9->setText(QCoreApplication::translate("professorwindow", "Day", nullptr));
        pw_day->setItemText(0, QCoreApplication::translate("professorwindow", "Sunday", nullptr));
        pw_day->setItemText(1, QCoreApplication::translate("professorwindow", "Monday", nullptr));
        pw_day->setItemText(2, QCoreApplication::translate("professorwindow", "Tuesday", nullptr));
        pw_day->setItemText(3, QCoreApplication::translate("professorwindow", "Wednesday", nullptr));
        pw_day->setItemText(4, QCoreApplication::translate("professorwindow", "Thursday", nullptr));
        pw_day->setItemText(5, QCoreApplication::translate("professorwindow", "Friday", nullptr));

        pw_show->setText(QCoreApplication::translate("professorwindow", "Show", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("professorwindow", "Class Status", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("professorwindow", "Request", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("professorwindow", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class professorwindow: public Ui_professorwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORWINDOW_H
