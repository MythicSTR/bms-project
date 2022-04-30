/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *as_name;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *as_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *as_pwd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *as_year;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *as_semester;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cs_create;
    QPushButton *cs_exit;

    void setupUi(QDialog *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName(QString::fromUtf8("student"));
        student->resize(1177, 659);
        layoutWidget = new QWidget(student);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 30, 511, 291));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        as_name = new QLineEdit(layoutWidget);
        as_name->setObjectName(QString::fromUtf8("as_name"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(as_name->sizePolicy().hasHeightForWidth());
        as_name->setSizePolicy(sizePolicy);
        as_name->setMinimumSize(QSize(0, 40));

        horizontalLayout_6->addWidget(as_name);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        as_username = new QLineEdit(layoutWidget);
        as_username->setObjectName(QString::fromUtf8("as_username"));
        sizePolicy.setHeightForWidth(as_username->sizePolicy().hasHeightForWidth());
        as_username->setSizePolicy(sizePolicy);
        as_username->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(as_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        as_pwd = new QLineEdit(layoutWidget);
        as_pwd->setObjectName(QString::fromUtf8("as_pwd"));
        sizePolicy.setHeightForWidth(as_pwd->sizePolicy().hasHeightForWidth());
        as_pwd->setSizePolicy(sizePolicy);
        as_pwd->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(as_pwd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        as_year = new QComboBox(layoutWidget);
        as_year->addItem(QString());
        as_year->addItem(QString());
        as_year->addItem(QString());
        as_year->addItem(QString());
        as_year->setObjectName(QString::fromUtf8("as_year"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(as_year->sizePolicy().hasHeightForWidth());
        as_year->setSizePolicy(sizePolicy1);
        as_year->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(as_year);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        as_semester = new QComboBox(layoutWidget);
        as_semester->addItem(QString());
        as_semester->addItem(QString());
        as_semester->setObjectName(QString::fromUtf8("as_semester"));
        as_semester->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(as_semester);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cs_create = new QPushButton(layoutWidget);
        cs_create->setObjectName(QString::fromUtf8("cs_create"));
        cs_create->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(cs_create);

        cs_exit = new QPushButton(layoutWidget);
        cs_exit->setObjectName(QString::fromUtf8("cs_exit"));
        cs_exit->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(cs_exit);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(student);

        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QDialog *student)
    {
        student->setWindowTitle(QCoreApplication::translate("student", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("student", "Name", nullptr));
        label->setText(QCoreApplication::translate("student", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("student", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("student", "Year", nullptr));
        as_year->setItemText(0, QCoreApplication::translate("student", "I", nullptr));
        as_year->setItemText(1, QCoreApplication::translate("student", "II", nullptr));
        as_year->setItemText(2, QCoreApplication::translate("student", "III", nullptr));
        as_year->setItemText(3, QCoreApplication::translate("student", "Iv", nullptr));

        label_4->setText(QCoreApplication::translate("student", "Semester", nullptr));
        as_semester->setItemText(0, QCoreApplication::translate("student", "I", nullptr));
        as_semester->setItemText(1, QCoreApplication::translate("student", "II", nullptr));

        cs_create->setText(QCoreApplication::translate("student", "Create", nullptr));
        cs_exit->setText(QCoreApplication::translate("student", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
