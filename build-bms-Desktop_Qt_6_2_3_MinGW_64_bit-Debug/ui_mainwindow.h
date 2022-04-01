/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *mainTabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *dashboardTabWidget;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_30;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_29;
    QComboBox *ov_day;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_22;
    QComboBox *ov_block;
    QLabel *label_23;
    QComboBox *ov_professor;
    QTableView *ov_tableView;
    QHBoxLayout *horizontalLayout_28;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer;
    QPushButton *ov_show;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_14;
    QComboBox *rev_faculty;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_10;
    QComboBox *rev_year;
    QComboBox *rev_semester;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QComboBox *rev_block_no;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *rev_room_no;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_17;
    QComboBox *rev_start_time;
    QLabel *label_19;
    QComboBox *rev_end_time;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_32;
    QComboBox *rev_day;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QComboBox *rev_professor;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_25;
    QLineEdit *rev_subject;
    QPushButton *reserve_button;
    QWidget *tab_5;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *sw_from_block;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *sw_from_room;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QComboBox *sw_from_day;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_27;
    QComboBox *sw_from_stime;
    QLabel *label_28;
    QComboBox *sw_from_etime;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *sw_to_block;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *sw_to_room;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QComboBox *sw_to_day;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_29;
    QComboBox *sw_to_stime;
    QLabel *label_30;
    QComboBox *sw_to_etime;
    QPushButton *switch_button;
    QWidget *tab_6;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cs_block;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *cs_room;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *cs_start_time;
    QLabel *label_4;
    QComboBox *cs_end_time;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *cs_day;
    QPushButton *cs_show;
    QWidget *tab_7;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_21;
    QComboBox *ps_name;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QComboBox *ps_day;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_31;
    QComboBox *ps_start;
    QLabel *label_33;
    QComboBox *ps_end;
    QPushButton *ps_show;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1035, 744);
        MainWindow->setStyleSheet(QString::fromUtf8("QTabBar::tab { min-width: 60px; }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mainTabWidget = new QTabWidget(centralwidget);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainTabWidget->sizePolicy().hasHeightForWidth());
        mainTabWidget->setSizePolicy(sizePolicy);
        mainTabWidget->setMinimumSize(QSize(0, 0));
        mainTabWidget->setLayoutDirection(Qt::LeftToRight);
        mainTabWidget->setStyleSheet(QString::fromUtf8(""));
        mainTabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dashboardTabWidget = new QTabWidget(tab);
        dashboardTabWidget->setObjectName(QString::fromUtf8("dashboardTabWidget"));
        dashboardTabWidget->setTabPosition(QTabWidget::West);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_30 = new QHBoxLayout(tab_3);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        ov_day = new QComboBox(tab_3);
        ov_day->addItem(QString());
        ov_day->addItem(QString());
        ov_day->addItem(QString());
        ov_day->addItem(QString());
        ov_day->addItem(QString());
        ov_day->addItem(QString());
        ov_day->setObjectName(QString::fromUtf8("ov_day"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ov_day->sizePolicy().hasHeightForWidth());
        ov_day->setSizePolicy(sizePolicy1);

        horizontalLayout_29->addWidget(ov_day);

        horizontalSpacer_3 = new QSpacerItem(1, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_3);

        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);

        horizontalLayout_29->addWidget(label_22);

        ov_block = new QComboBox(tab_3);
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->addItem(QString());
        ov_block->setObjectName(QString::fromUtf8("ov_block"));

        horizontalLayout_29->addWidget(ov_block);

        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy2.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy2);

        horizontalLayout_29->addWidget(label_23);

        ov_professor = new QComboBox(tab_3);
        ov_professor->addItem(QString());
        ov_professor->setObjectName(QString::fromUtf8("ov_professor"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ov_professor->sizePolicy().hasHeightForWidth());
        ov_professor->setSizePolicy(sizePolicy3);

        horizontalLayout_29->addWidget(ov_professor);


        verticalLayout_6->addLayout(horizontalLayout_29);

        ov_tableView = new QTableView(tab_3);
        ov_tableView->setObjectName(QString::fromUtf8("ov_tableView"));

        verticalLayout_6->addWidget(ov_tableView);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer);

        ov_show = new QPushButton(tab_3);
        ov_show->setObjectName(QString::fromUtf8("ov_show"));
        sizePolicy1.setHeightForWidth(ov_show->sizePolicy().hasHeightForWidth());
        ov_show->setSizePolicy(sizePolicy1);

        horizontalLayout_22->addWidget(ov_show);


        horizontalLayout_28->addLayout(horizontalLayout_22);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_28);


        horizontalLayout_30->addLayout(verticalLayout_6);

        dashboardTabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_18->addWidget(label_14);

        rev_faculty = new QComboBox(groupBox_4);
        rev_faculty->setObjectName(QString::fromUtf8("rev_faculty"));
        rev_faculty->setMinimumSize(QSize(300, 40));

        horizontalLayout_18->addWidget(rev_faculty);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_23->addWidget(label_10);

        rev_year = new QComboBox(groupBox_4);
        rev_year->addItem(QString());
        rev_year->addItem(QString());
        rev_year->addItem(QString());
        rev_year->addItem(QString());
        rev_year->setObjectName(QString::fromUtf8("rev_year"));
        sizePolicy1.setHeightForWidth(rev_year->sizePolicy().hasHeightForWidth());
        rev_year->setSizePolicy(sizePolicy1);
        rev_year->setMinimumSize(QSize(210, 40));

        horizontalLayout_23->addWidget(rev_year);

        rev_semester = new QComboBox(groupBox_4);
        rev_semester->addItem(QString());
        rev_semester->addItem(QString());
        rev_semester->setObjectName(QString::fromUtf8("rev_semester"));
        sizePolicy1.setHeightForWidth(rev_semester->sizePolicy().hasHeightForWidth());
        rev_semester->setSizePolicy(sizePolicy1);
        rev_semester->setMinimumSize(QSize(210, 40));

        horizontalLayout_23->addWidget(rev_semester);


        verticalLayout_4->addLayout(horizontalLayout_23);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        rev_block_no = new QComboBox(groupBox_4);
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->addItem(QString());
        rev_block_no->setObjectName(QString::fromUtf8("rev_block_no"));
        rev_block_no->setMinimumSize(QSize(300, 40));

        horizontalLayout_16->addWidget(rev_block_no);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        rev_room_no = new QLineEdit(groupBox_4);
        rev_room_no->setObjectName(QString::fromUtf8("rev_room_no"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(rev_room_no->sizePolicy().hasHeightForWidth());
        rev_room_no->setSizePolicy(sizePolicy4);
        rev_room_no->setMinimumSize(QSize(300, 40));

        horizontalLayout_17->addWidget(rev_room_no);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_15->addWidget(label_17);

        rev_start_time = new QComboBox(groupBox_4);
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->addItem(QString());
        rev_start_time->setObjectName(QString::fromUtf8("rev_start_time"));
        sizePolicy1.setHeightForWidth(rev_start_time->sizePolicy().hasHeightForWidth());
        rev_start_time->setSizePolicy(sizePolicy1);
        rev_start_time->setMinimumSize(QSize(180, 40));

        horizontalLayout_15->addWidget(rev_start_time);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy2.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy2);
        label_19->setMinimumSize(QSize(65, 0));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_19);

        rev_end_time = new QComboBox(groupBox_4);
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->addItem(QString());
        rev_end_time->setObjectName(QString::fromUtf8("rev_end_time"));
        sizePolicy1.setHeightForWidth(rev_end_time->sizePolicy().hasHeightForWidth());
        rev_end_time->setSizePolicy(sizePolicy1);
        rev_end_time->setMinimumSize(QSize(180, 40));

        horizontalLayout_15->addWidget(rev_end_time);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_32 = new QLabel(groupBox_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_19->addWidget(label_32);

        rev_day = new QComboBox(groupBox_4);
        rev_day->addItem(QString());
        rev_day->addItem(QString());
        rev_day->addItem(QString());
        rev_day->addItem(QString());
        rev_day->addItem(QString());
        rev_day->addItem(QString());
        rev_day->setObjectName(QString::fromUtf8("rev_day"));
        rev_day->setMinimumSize(QSize(300, 40));

        horizontalLayout_19->addWidget(rev_day);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_14->addWidget(label_18);

        rev_professor = new QComboBox(groupBox_4);
        rev_professor->setObjectName(QString::fromUtf8("rev_professor"));
        rev_professor->setMinimumSize(QSize(300, 40));

        horizontalLayout_14->addWidget(rev_professor);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_24->addWidget(label_25);

        rev_subject = new QLineEdit(groupBox_4);
        rev_subject->setObjectName(QString::fromUtf8("rev_subject"));
        sizePolicy3.setHeightForWidth(rev_subject->sizePolicy().hasHeightForWidth());
        rev_subject->setSizePolicy(sizePolicy3);
        rev_subject->setMinimumSize(QSize(300, 40));

        horizontalLayout_24->addWidget(rev_subject);


        verticalLayout_4->addLayout(horizontalLayout_24);

        reserve_button = new QPushButton(groupBox_4);
        reserve_button->setObjectName(QString::fromUtf8("reserve_button"));
        reserve_button->setMinimumSize(QSize(0, 40));

        verticalLayout_4->addWidget(reserve_button);


        gridLayout->addWidget(groupBox_4, 0, 0, 1, 1);

        dashboardTabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_2 = new QGridLayout(tab_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        sw_from_block = new QComboBox(groupBox_2);
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->addItem(QString());
        sw_from_block->setObjectName(QString::fromUtf8("sw_from_block"));
        sizePolicy1.setHeightForWidth(sw_from_block->sizePolicy().hasHeightForWidth());
        sw_from_block->setSizePolicy(sizePolicy1);
        sw_from_block->setMinimumSize(QSize(300, 40));

        horizontalLayout_9->addWidget(sw_from_block);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        sw_from_room = new QLineEdit(groupBox_2);
        sw_from_room->setObjectName(QString::fromUtf8("sw_from_room"));
        sizePolicy3.setHeightForWidth(sw_from_room->sizePolicy().hasHeightForWidth());
        sw_from_room->setSizePolicy(sizePolicy3);
        sw_from_room->setMinimumSize(QSize(300, 40));
        sw_from_room->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(sw_from_room);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        sw_from_day = new QComboBox(groupBox_2);
        sw_from_day->addItem(QString());
        sw_from_day->addItem(QString());
        sw_from_day->addItem(QString());
        sw_from_day->addItem(QString());
        sw_from_day->addItem(QString());
        sw_from_day->addItem(QString());
        sw_from_day->setObjectName(QString::fromUtf8("sw_from_day"));
        sw_from_day->setMinimumSize(QSize(300, 40));

        horizontalLayout_11->addWidget(sw_from_day);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_25->addWidget(label_27);

        sw_from_stime = new QComboBox(groupBox_2);
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->addItem(QString());
        sw_from_stime->setObjectName(QString::fromUtf8("sw_from_stime"));
        sw_from_stime->setMinimumSize(QSize(0, 40));

        horizontalLayout_25->addWidget(sw_from_stime);

        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy5);
        label_28->setMinimumSize(QSize(65, 0));
        label_28->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(label_28);

        sw_from_etime = new QComboBox(groupBox_2);
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->addItem(QString());
        sw_from_etime->setObjectName(QString::fromUtf8("sw_from_etime"));
        sw_from_etime->setMinimumSize(QSize(0, 40));

        horizontalLayout_25->addWidget(sw_from_etime);


        verticalLayout_3->addLayout(horizontalLayout_25);


        horizontalLayout_13->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        sw_to_block = new QComboBox(groupBox_3);
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->addItem(QString());
        sw_to_block->setObjectName(QString::fromUtf8("sw_to_block"));
        sw_to_block->setMinimumSize(QSize(300, 40));

        horizontalLayout_8->addWidget(sw_to_block);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        sw_to_room = new QLineEdit(groupBox_3);
        sw_to_room->setObjectName(QString::fromUtf8("sw_to_room"));
        sizePolicy3.setHeightForWidth(sw_to_room->sizePolicy().hasHeightForWidth());
        sw_to_room->setSizePolicy(sizePolicy3);
        sw_to_room->setMinimumSize(QSize(300, 40));

        horizontalLayout_7->addWidget(sw_to_room);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_12->addWidget(label_13);

        sw_to_day = new QComboBox(groupBox_3);
        sw_to_day->addItem(QString());
        sw_to_day->addItem(QString());
        sw_to_day->addItem(QString());
        sw_to_day->addItem(QString());
        sw_to_day->addItem(QString());
        sw_to_day->addItem(QString());
        sw_to_day->setObjectName(QString::fromUtf8("sw_to_day"));
        sw_to_day->setMinimumSize(QSize(300, 40));

        horizontalLayout_12->addWidget(sw_to_day);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_26->addWidget(label_29);

        sw_to_stime = new QComboBox(groupBox_3);
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->addItem(QString());
        sw_to_stime->setObjectName(QString::fromUtf8("sw_to_stime"));
        sw_to_stime->setMinimumSize(QSize(0, 40));

        horizontalLayout_26->addWidget(sw_to_stime);

        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy2.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy2);
        label_30->setMinimumSize(QSize(65, 0));
        label_30->setAlignment(Qt::AlignCenter);

        horizontalLayout_26->addWidget(label_30);

        sw_to_etime = new QComboBox(groupBox_3);
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->addItem(QString());
        sw_to_etime->setObjectName(QString::fromUtf8("sw_to_etime"));
        sw_to_etime->setMinimumSize(QSize(0, 40));

        horizontalLayout_26->addWidget(sw_to_etime);


        verticalLayout_2->addLayout(horizontalLayout_26);


        horizontalLayout_13->addWidget(groupBox_3);


        verticalLayout_10->addLayout(horizontalLayout_13);

        switch_button = new QPushButton(tab_5);
        switch_button->setObjectName(QString::fromUtf8("switch_button"));
        switch_button->setMinimumSize(QSize(0, 40));

        verticalLayout_10->addWidget(switch_button);


        gridLayout_2->addLayout(verticalLayout_10, 0, 0, 1, 1);

        dashboardTabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_3 = new QGridLayout(tab_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(tab_6);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        groupBox->setMinimumSize(QSize(600, 500));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(11, 11, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        cs_block = new QComboBox(groupBox);
        cs_block->setObjectName(QString::fromUtf8("cs_block"));
        sizePolicy6.setHeightForWidth(cs_block->sizePolicy().hasHeightForWidth());
        cs_block->setSizePolicy(sizePolicy6);
        cs_block->setMinimumSize(QSize(300, 40));

        horizontalLayout_3->addWidget(cs_block);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        cs_room = new QLineEdit(groupBox);
        cs_room->setObjectName(QString::fromUtf8("cs_room"));
        sizePolicy6.setHeightForWidth(cs_room->sizePolicy().hasHeightForWidth());
        cs_room->setSizePolicy(sizePolicy6);
        cs_room->setMinimumSize(QSize(300, 40));

        horizontalLayout_4->addWidget(cs_room);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        cs_start_time = new QComboBox(groupBox);
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->addItem(QString());
        cs_start_time->setObjectName(QString::fromUtf8("cs_start_time"));
        sizePolicy6.setHeightForWidth(cs_start_time->sizePolicy().hasHeightForWidth());
        cs_start_time->setSizePolicy(sizePolicy6);
        cs_start_time->setMinimumSize(QSize(150, 40));

        horizontalLayout_5->addWidget(cs_start_time);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);
        label_4->setMinimumSize(QSize(65, 0));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);

        cs_end_time = new QComboBox(groupBox);
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->addItem(QString());
        cs_end_time->setObjectName(QString::fromUtf8("cs_end_time"));
        sizePolicy6.setHeightForWidth(cs_end_time->sizePolicy().hasHeightForWidth());
        cs_end_time->setSizePolicy(sizePolicy6);
        cs_end_time->setMinimumSize(QSize(150, 40));

        horizontalLayout_5->addWidget(cs_end_time);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        cs_day = new QComboBox(groupBox);
        cs_day->addItem(QString());
        cs_day->addItem(QString());
        cs_day->addItem(QString());
        cs_day->addItem(QString());
        cs_day->addItem(QString());
        cs_day->addItem(QString());
        cs_day->setObjectName(QString::fromUtf8("cs_day"));
        sizePolicy6.setHeightForWidth(cs_day->sizePolicy().hasHeightForWidth());
        cs_day->setSizePolicy(sizePolicy6);
        cs_day->setMinimumSize(QSize(300, 40));

        horizontalLayout_6->addWidget(cs_day);


        verticalLayout->addLayout(horizontalLayout_6);

        cs_show = new QPushButton(groupBox);
        cs_show->setObjectName(QString::fromUtf8("cs_show"));
        cs_show->setMinimumSize(QSize(300, 40));

        verticalLayout->addWidget(cs_show);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        dashboardTabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        groupBox_5 = new QGroupBox(tab_7);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(239, 140, 431, 301));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_21->addWidget(label_21);

        ps_name = new QComboBox(groupBox_5);
        ps_name->setObjectName(QString::fromUtf8("ps_name"));

        horizontalLayout_21->addWidget(ps_name);


        verticalLayout_5->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_20->addWidget(label_20);

        ps_day = new QComboBox(groupBox_5);
        ps_day->addItem(QString());
        ps_day->addItem(QString());
        ps_day->addItem(QString());
        ps_day->addItem(QString());
        ps_day->addItem(QString());
        ps_day->addItem(QString());
        ps_day->setObjectName(QString::fromUtf8("ps_day"));

        horizontalLayout_20->addWidget(ps_day);


        verticalLayout_5->addLayout(horizontalLayout_20);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_31 = new QLabel(groupBox_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_27->addWidget(label_31);

        ps_start = new QComboBox(groupBox_5);
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->addItem(QString());
        ps_start->setObjectName(QString::fromUtf8("ps_start"));

        horizontalLayout_27->addWidget(ps_start);

        label_33 = new QLabel(groupBox_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setAlignment(Qt::AlignCenter);

        horizontalLayout_27->addWidget(label_33);

        ps_end = new QComboBox(groupBox_5);
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->addItem(QString());
        ps_end->setObjectName(QString::fromUtf8("ps_end"));

        horizontalLayout_27->addWidget(ps_end);


        verticalLayout_5->addLayout(horizontalLayout_27);

        ps_show = new QPushButton(groupBox_5);
        ps_show->setObjectName(QString::fromUtf8("ps_show"));

        verticalLayout_5->addWidget(ps_show);

        dashboardTabWidget->addTab(tab_7, QString());

        horizontalLayout_2->addWidget(dashboardTabWidget);

        mainTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        mainTabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(mainTabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1035, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        mainTabWidget->setCurrentIndex(0);
        dashboardTabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ov_day->setItemText(0, QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        ov_day->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        ov_day->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        ov_day->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        ov_day->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        ov_day->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        label_22->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        ov_block->setItemText(0, QCoreApplication::translate("MainWindow", "All", nullptr));
        ov_block->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        ov_block->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        ov_block->setItemText(3, QCoreApplication::translate("MainWindow", "3", nullptr));
        ov_block->setItemText(4, QCoreApplication::translate("MainWindow", "4", nullptr));
        ov_block->setItemText(5, QCoreApplication::translate("MainWindow", "5", nullptr));
        ov_block->setItemText(6, QCoreApplication::translate("MainWindow", "6", nullptr));
        ov_block->setItemText(7, QCoreApplication::translate("MainWindow", "7", nullptr));
        ov_block->setItemText(8, QCoreApplication::translate("MainWindow", "8", nullptr));
        ov_block->setItemText(9, QCoreApplication::translate("MainWindow", "9", nullptr));

        label_23->setText(QCoreApplication::translate("MainWindow", "Professor", nullptr));
        ov_professor->setItemText(0, QCoreApplication::translate("MainWindow", "All", nullptr));

        ov_show->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        dashboardTabWidget->setTabText(dashboardTabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Overview", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Reserve a classroom", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Faculty", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Year/Semester", nullptr));
        rev_year->setItemText(0, QCoreApplication::translate("MainWindow", "1st", nullptr));
        rev_year->setItemText(1, QCoreApplication::translate("MainWindow", "2nd", nullptr));
        rev_year->setItemText(2, QCoreApplication::translate("MainWindow", "3rd", nullptr));
        rev_year->setItemText(3, QCoreApplication::translate("MainWindow", "4th", nullptr));

        rev_semester->setItemText(0, QCoreApplication::translate("MainWindow", "1st", nullptr));
        rev_semester->setItemText(1, QCoreApplication::translate("MainWindow", "2nd", nullptr));

        label_16->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        rev_block_no->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        rev_block_no->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        rev_block_no->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        rev_block_no->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        rev_block_no->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        rev_block_no->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        rev_block_no->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        rev_block_no->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        rev_block_no->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        rev_block_no->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        rev_block_no->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));

        label_15->setText(QCoreApplication::translate("MainWindow", "Room", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        rev_start_time->setItemText(0, QCoreApplication::translate("MainWindow", "6", nullptr));
        rev_start_time->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        rev_start_time->setItemText(2, QCoreApplication::translate("MainWindow", "8", nullptr));
        rev_start_time->setItemText(3, QCoreApplication::translate("MainWindow", "9", nullptr));
        rev_start_time->setItemText(4, QCoreApplication::translate("MainWindow", "10", nullptr));
        rev_start_time->setItemText(5, QCoreApplication::translate("MainWindow", "11", nullptr));
        rev_start_time->setItemText(6, QCoreApplication::translate("MainWindow", "12", nullptr));
        rev_start_time->setItemText(7, QCoreApplication::translate("MainWindow", "13", nullptr));
        rev_start_time->setItemText(8, QCoreApplication::translate("MainWindow", "14", nullptr));
        rev_start_time->setItemText(9, QCoreApplication::translate("MainWindow", "15", nullptr));
        rev_start_time->setItemText(10, QCoreApplication::translate("MainWindow", "16", nullptr));
        rev_start_time->setItemText(11, QCoreApplication::translate("MainWindow", "17", nullptr));

        label_19->setText(QCoreApplication::translate("MainWindow", "to", nullptr));
        rev_end_time->setItemText(0, QCoreApplication::translate("MainWindow", "7", nullptr));
        rev_end_time->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        rev_end_time->setItemText(2, QCoreApplication::translate("MainWindow", "9", nullptr));
        rev_end_time->setItemText(3, QCoreApplication::translate("MainWindow", "10", nullptr));
        rev_end_time->setItemText(4, QCoreApplication::translate("MainWindow", "11", nullptr));
        rev_end_time->setItemText(5, QCoreApplication::translate("MainWindow", "12", nullptr));
        rev_end_time->setItemText(6, QCoreApplication::translate("MainWindow", "13", nullptr));
        rev_end_time->setItemText(7, QCoreApplication::translate("MainWindow", "14", nullptr));
        rev_end_time->setItemText(8, QCoreApplication::translate("MainWindow", "15", nullptr));
        rev_end_time->setItemText(9, QCoreApplication::translate("MainWindow", "16", nullptr));
        rev_end_time->setItemText(10, QCoreApplication::translate("MainWindow", "17", nullptr));
        rev_end_time->setItemText(11, QCoreApplication::translate("MainWindow", "18", nullptr));
        rev_end_time->setItemText(12, QCoreApplication::translate("MainWindow", "19", nullptr));

        label_32->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        rev_day->setItemText(0, QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        rev_day->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        rev_day->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        rev_day->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        rev_day->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        rev_day->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        label_18->setText(QCoreApplication::translate("MainWindow", "Professsor", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Subject", nullptr));
        reserve_button->setText(QCoreApplication::translate("MainWindow", "Reserve", nullptr));
        dashboardTabWidget->setTabText(dashboardTabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Reserve", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "From", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        sw_from_block->setItemText(0, QCoreApplication::translate("MainWindow", "3", nullptr));
        sw_from_block->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        sw_from_block->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        sw_from_block->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));
        sw_from_block->setItemText(4, QCoreApplication::translate("MainWindow", "9", nullptr));
        sw_from_block->setItemText(5, QCoreApplication::translate("MainWindow", "10", nullptr));
        sw_from_block->setItemText(6, QCoreApplication::translate("MainWindow", "11", nullptr));
        sw_from_block->setItemText(7, QCoreApplication::translate("MainWindow", "12", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Room", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        sw_from_day->setItemText(0, QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        sw_from_day->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        sw_from_day->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        sw_from_day->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        sw_from_day->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        sw_from_day->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        label_27->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        sw_from_stime->setItemText(0, QCoreApplication::translate("MainWindow", "7", nullptr));
        sw_from_stime->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        sw_from_stime->setItemText(2, QCoreApplication::translate("MainWindow", "9", nullptr));
        sw_from_stime->setItemText(3, QCoreApplication::translate("MainWindow", "10", nullptr));
        sw_from_stime->setItemText(4, QCoreApplication::translate("MainWindow", "11", nullptr));
        sw_from_stime->setItemText(5, QCoreApplication::translate("MainWindow", "12", nullptr));
        sw_from_stime->setItemText(6, QCoreApplication::translate("MainWindow", "13", nullptr));
        sw_from_stime->setItemText(7, QCoreApplication::translate("MainWindow", "14", nullptr));
        sw_from_stime->setItemText(8, QCoreApplication::translate("MainWindow", "15", nullptr));

        label_28->setText(QCoreApplication::translate("MainWindow", "to", nullptr));
        sw_from_etime->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        sw_from_etime->setItemText(1, QCoreApplication::translate("MainWindow", "9", nullptr));
        sw_from_etime->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        sw_from_etime->setItemText(3, QCoreApplication::translate("MainWindow", "11", nullptr));
        sw_from_etime->setItemText(4, QCoreApplication::translate("MainWindow", "12", nullptr));
        sw_from_etime->setItemText(5, QCoreApplication::translate("MainWindow", "13", nullptr));
        sw_from_etime->setItemText(6, QCoreApplication::translate("MainWindow", "14", nullptr));
        sw_from_etime->setItemText(7, QCoreApplication::translate("MainWindow", "15", nullptr));
        sw_from_etime->setItemText(8, QCoreApplication::translate("MainWindow", "16", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "To", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        sw_to_block->setItemText(0, QCoreApplication::translate("MainWindow", "3", nullptr));
        sw_to_block->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        sw_to_block->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        sw_to_block->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));
        sw_to_block->setItemText(4, QCoreApplication::translate("MainWindow", "9", nullptr));
        sw_to_block->setItemText(5, QCoreApplication::translate("MainWindow", "10", nullptr));
        sw_to_block->setItemText(6, QCoreApplication::translate("MainWindow", "11", nullptr));
        sw_to_block->setItemText(7, QCoreApplication::translate("MainWindow", "12", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Room", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        sw_to_day->setItemText(0, QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        sw_to_day->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        sw_to_day->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        sw_to_day->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        sw_to_day->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        sw_to_day->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        label_29->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        sw_to_stime->setItemText(0, QCoreApplication::translate("MainWindow", "7", nullptr));
        sw_to_stime->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        sw_to_stime->setItemText(2, QCoreApplication::translate("MainWindow", "9", nullptr));
        sw_to_stime->setItemText(3, QCoreApplication::translate("MainWindow", "10", nullptr));
        sw_to_stime->setItemText(4, QCoreApplication::translate("MainWindow", "11", nullptr));
        sw_to_stime->setItemText(5, QCoreApplication::translate("MainWindow", "12", nullptr));
        sw_to_stime->setItemText(6, QCoreApplication::translate("MainWindow", "13", nullptr));
        sw_to_stime->setItemText(7, QCoreApplication::translate("MainWindow", "14", nullptr));
        sw_to_stime->setItemText(8, QCoreApplication::translate("MainWindow", "15", nullptr));

        label_30->setText(QCoreApplication::translate("MainWindow", "to", nullptr));
        sw_to_etime->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        sw_to_etime->setItemText(1, QCoreApplication::translate("MainWindow", "9", nullptr));
        sw_to_etime->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        sw_to_etime->setItemText(3, QCoreApplication::translate("MainWindow", "11", nullptr));
        sw_to_etime->setItemText(4, QCoreApplication::translate("MainWindow", "12", nullptr));
        sw_to_etime->setItemText(5, QCoreApplication::translate("MainWindow", "13", nullptr));
        sw_to_etime->setItemText(6, QCoreApplication::translate("MainWindow", "14", nullptr));
        sw_to_etime->setItemText(7, QCoreApplication::translate("MainWindow", "15", nullptr));
        sw_to_etime->setItemText(8, QCoreApplication::translate("MainWindow", "16", nullptr));

        switch_button->setText(QCoreApplication::translate("MainWindow", "Switch", nullptr));
        dashboardTabWidget->setTabText(dashboardTabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Switch", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Room No.", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        cs_start_time->setItemText(0, QCoreApplication::translate("MainWindow", "6", nullptr));
        cs_start_time->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        cs_start_time->setItemText(2, QCoreApplication::translate("MainWindow", "8", nullptr));
        cs_start_time->setItemText(3, QCoreApplication::translate("MainWindow", "9", nullptr));
        cs_start_time->setItemText(4, QCoreApplication::translate("MainWindow", "10", nullptr));
        cs_start_time->setItemText(5, QCoreApplication::translate("MainWindow", "11", nullptr));
        cs_start_time->setItemText(6, QCoreApplication::translate("MainWindow", "12", nullptr));
        cs_start_time->setItemText(7, QCoreApplication::translate("MainWindow", "13", nullptr));
        cs_start_time->setItemText(8, QCoreApplication::translate("MainWindow", "14", nullptr));
        cs_start_time->setItemText(9, QCoreApplication::translate("MainWindow", "15", nullptr));
        cs_start_time->setItemText(10, QCoreApplication::translate("MainWindow", "16", nullptr));
        cs_start_time->setItemText(11, QCoreApplication::translate("MainWindow", "17", nullptr));
        cs_start_time->setItemText(12, QCoreApplication::translate("MainWindow", "18", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "to", nullptr));
        cs_end_time->setItemText(0, QCoreApplication::translate("MainWindow", "7", nullptr));
        cs_end_time->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        cs_end_time->setItemText(2, QCoreApplication::translate("MainWindow", "9", nullptr));
        cs_end_time->setItemText(3, QCoreApplication::translate("MainWindow", "10", nullptr));
        cs_end_time->setItemText(4, QCoreApplication::translate("MainWindow", "11", nullptr));
        cs_end_time->setItemText(5, QCoreApplication::translate("MainWindow", "12", nullptr));
        cs_end_time->setItemText(6, QCoreApplication::translate("MainWindow", "13", nullptr));
        cs_end_time->setItemText(7, QCoreApplication::translate("MainWindow", "14", nullptr));
        cs_end_time->setItemText(8, QCoreApplication::translate("MainWindow", "15", nullptr));
        cs_end_time->setItemText(9, QCoreApplication::translate("MainWindow", "16", nullptr));
        cs_end_time->setItemText(10, QCoreApplication::translate("MainWindow", "17", nullptr));
        cs_end_time->setItemText(11, QCoreApplication::translate("MainWindow", "18", nullptr));
        cs_end_time->setItemText(12, QCoreApplication::translate("MainWindow", "19", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        cs_day->setItemText(0, QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        cs_day->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        cs_day->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        cs_day->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        cs_day->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        cs_day->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        cs_show->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        dashboardTabWidget->setTabText(dashboardTabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Class Status", nullptr));
        groupBox_5->setTitle(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "Professor", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        ps_day->setItemText(0, QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        ps_day->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        ps_day->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        ps_day->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        ps_day->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        ps_day->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        label_31->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        ps_start->setItemText(0, QCoreApplication::translate("MainWindow", "6", nullptr));
        ps_start->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        ps_start->setItemText(2, QCoreApplication::translate("MainWindow", "8", nullptr));
        ps_start->setItemText(3, QCoreApplication::translate("MainWindow", "9", nullptr));
        ps_start->setItemText(4, QCoreApplication::translate("MainWindow", "10", nullptr));
        ps_start->setItemText(5, QCoreApplication::translate("MainWindow", "11", nullptr));
        ps_start->setItemText(6, QCoreApplication::translate("MainWindow", "12", nullptr));
        ps_start->setItemText(7, QCoreApplication::translate("MainWindow", "13", nullptr));
        ps_start->setItemText(8, QCoreApplication::translate("MainWindow", "14", nullptr));
        ps_start->setItemText(9, QCoreApplication::translate("MainWindow", "15", nullptr));
        ps_start->setItemText(10, QCoreApplication::translate("MainWindow", "16", nullptr));
        ps_start->setItemText(11, QCoreApplication::translate("MainWindow", "17", nullptr));
        ps_start->setItemText(12, QCoreApplication::translate("MainWindow", "18", nullptr));

        label_33->setText(QCoreApplication::translate("MainWindow", "to", nullptr));
        ps_end->setItemText(0, QCoreApplication::translate("MainWindow", "7", nullptr));
        ps_end->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        ps_end->setItemText(2, QCoreApplication::translate("MainWindow", "9", nullptr));
        ps_end->setItemText(3, QCoreApplication::translate("MainWindow", "10", nullptr));
        ps_end->setItemText(4, QCoreApplication::translate("MainWindow", "11", nullptr));
        ps_end->setItemText(5, QCoreApplication::translate("MainWindow", "12", nullptr));
        ps_end->setItemText(6, QCoreApplication::translate("MainWindow", "13", nullptr));
        ps_end->setItemText(7, QCoreApplication::translate("MainWindow", "14", nullptr));
        ps_end->setItemText(8, QCoreApplication::translate("MainWindow", "15", nullptr));
        ps_end->setItemText(9, QCoreApplication::translate("MainWindow", "16", nullptr));
        ps_end->setItemText(10, QCoreApplication::translate("MainWindow", "17", nullptr));
        ps_end->setItemText(11, QCoreApplication::translate("MainWindow", "18", nullptr));
        ps_end->setItemText(12, QCoreApplication::translate("MainWindow", "19", nullptr));

        ps_show->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        dashboardTabWidget->setTabText(dashboardTabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Professor Status", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
