/********************************************************************************
** Form generated from reading UI file 'professor.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSOR_H
#define UI_PROFESSOR_H

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

class Ui_Professor
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *cp_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *cp_username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *cp_pwd;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cp_dept;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cp_create;
    QPushButton *cp_exit;

    void setupUi(QDialog *Professor)
    {
        if (Professor->objectName().isEmpty())
            Professor->setObjectName(QString::fromUtf8("Professor"));
        Professor->resize(1171, 668);
        widget = new QWidget(Professor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 71, 411, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cp_name = new QLineEdit(widget);
        cp_name->setObjectName(QString::fromUtf8("cp_name"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cp_name->sizePolicy().hasHeightForWidth());
        cp_name->setSizePolicy(sizePolicy);
        cp_name->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(cp_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cp_username = new QLineEdit(widget);
        cp_username->setObjectName(QString::fromUtf8("cp_username"));
        sizePolicy.setHeightForWidth(cp_username->sizePolicy().hasHeightForWidth());
        cp_username->setSizePolicy(sizePolicy);
        cp_username->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(cp_username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cp_pwd = new QLineEdit(widget);
        cp_pwd->setObjectName(QString::fromUtf8("cp_pwd"));
        cp_pwd->setEnabled(true);
        sizePolicy.setHeightForWidth(cp_pwd->sizePolicy().hasHeightForWidth());
        cp_pwd->setSizePolicy(sizePolicy);
        cp_pwd->setMinimumSize(QSize(0, 40));
        cp_pwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(cp_pwd);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cp_dept = new QComboBox(widget);
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->addItem(QString());
        cp_dept->setObjectName(QString::fromUtf8("cp_dept"));
        sizePolicy.setHeightForWidth(cp_dept->sizePolicy().hasHeightForWidth());
        cp_dept->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(cp_dept);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cp_create = new QPushButton(widget);
        cp_create->setObjectName(QString::fromUtf8("cp_create"));
        cp_create->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(cp_create);

        cp_exit = new QPushButton(widget);
        cp_exit->setObjectName(QString::fromUtf8("cp_exit"));
        cp_exit->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(cp_exit);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Professor);

        QMetaObject::connectSlotsByName(Professor);
    } // setupUi

    void retranslateUi(QDialog *Professor)
    {
        Professor->setWindowTitle(QCoreApplication::translate("Professor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Professor", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Professor", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Professor", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("Professor", "Department", nullptr));
        cp_dept->setItemText(0, QCoreApplication::translate("Professor", "Department of Computer Science and Engineering", nullptr));
        cp_dept->setItemText(1, QCoreApplication::translate("Professor", "Department of Mechanical Engineering", nullptr));
        cp_dept->setItemText(2, QCoreApplication::translate("Professor", "Department of Environmental Science and Engineering", nullptr));
        cp_dept->setItemText(3, QCoreApplication::translate("Professor", "Department of Life Sciences", nullptr));
        cp_dept->setItemText(4, QCoreApplication::translate("Professor", "Department of Mathematics", nullptr));
        cp_dept->setItemText(5, QCoreApplication::translate("Professor", "Department of Physics", nullptr));
        cp_dept->setItemText(6, QCoreApplication::translate("Professor", "Department of Chemical Science and Engineering", nullptr));
        cp_dept->setItemText(7, QCoreApplication::translate("Professor", "Department of Geometics Engineering", nullptr));
        cp_dept->setItemText(8, QCoreApplication::translate("Professor", "Department of Civil Engineering", nullptr));
        cp_dept->setItemText(9, QCoreApplication::translate("Professor", "Department of Architecture", nullptr));
        cp_dept->setItemText(10, QCoreApplication::translate("Professor", "Department of Pharmacy", nullptr));
        cp_dept->setItemText(11, QCoreApplication::translate("Professor", "Department of Biotechnology", nullptr));
        cp_dept->setItemText(12, QCoreApplication::translate("Professor", "Department of Electrical and Electronics Engineering", nullptr));
        cp_dept->setItemText(13, QCoreApplication::translate("Professor", "Department of Management", nullptr));

        cp_create->setText(QCoreApplication::translate("Professor", "Create", nullptr));
        cp_exit->setText(QCoreApplication::translate("Professor", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Professor: public Ui_Professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSOR_H
