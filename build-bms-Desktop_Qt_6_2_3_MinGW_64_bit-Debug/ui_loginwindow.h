/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_username;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogInWindow)
    {
        if (LogInWindow->objectName().isEmpty())
            LogInWindow->setObjectName(QString::fromUtf8("LogInWindow"));
        LogInWindow->resize(800, 572);
        centralwidget = new QWidget(LogInWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 160, 83, 29));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 160, 83, 29));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(300, 110, 231, 28));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(300, 60, 231, 28));

        horizontalLayout->addWidget(groupBox);

        LogInWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LogInWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LogInWindow->setStatusBar(statusbar);

        retranslateUi(LogInWindow);

        QMetaObject::connectSlotsByName(LogInWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LogInWindow)
    {
        LogInWindow->setWindowTitle(QCoreApplication::translate("LogInWindow", "LogInWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LogInWindow", "Sign In", nullptr));
        pushButton->setText(QCoreApplication::translate("LogInWindow", "Log In", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LogInWindow", "Exit", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("LogInWindow", "Password", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("LogInWindow", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInWindow: public Ui_LogInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
