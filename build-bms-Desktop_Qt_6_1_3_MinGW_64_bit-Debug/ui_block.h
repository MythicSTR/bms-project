/********************************************************************************
** Form generated from reading UI file 'block.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCK_H
#define UI_BLOCK_H

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

class Ui_block
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *block_show;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *block_new;
    QPushButton *block_add;
    QPushButton *block_exit;

    void setupUi(QDialog *block)
    {
        if (block->objectName().isEmpty())
            block->setObjectName(QString::fromUtf8("block"));
        block->resize(785, 589);
        widget = new QWidget(block);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 160, 451, 231));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        block_show = new QComboBox(widget);
        block_show->setObjectName(QString::fromUtf8("block_show"));

        horizontalLayout->addWidget(block_show);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        block_new = new QLineEdit(widget);
        block_new->setObjectName(QString::fromUtf8("block_new"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(block_new->sizePolicy().hasHeightForWidth());
        block_new->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(block_new);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        block_add = new QPushButton(widget);
        block_add->setObjectName(QString::fromUtf8("block_add"));
        sizePolicy.setHeightForWidth(block_add->sizePolicy().hasHeightForWidth());
        block_add->setSizePolicy(sizePolicy);
        block_add->setContextMenuPolicy(Qt::NoContextMenu);

        verticalLayout_2->addWidget(block_add);

        block_exit = new QPushButton(widget);
        block_exit->setObjectName(QString::fromUtf8("block_exit"));
        sizePolicy.setHeightForWidth(block_exit->sizePolicy().hasHeightForWidth());
        block_exit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(block_exit);


        retranslateUi(block);

        QMetaObject::connectSlotsByName(block);
    } // setupUi

    void retranslateUi(QDialog *block)
    {
        block->setWindowTitle(QCoreApplication::translate("block", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("block", "Blocks", nullptr));
        label_2->setText(QCoreApplication::translate("block", "New Block", nullptr));
        block_add->setText(QCoreApplication::translate("block", "Add", nullptr));
        block_exit->setText(QCoreApplication::translate("block", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class block: public Ui_block {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCK_H
