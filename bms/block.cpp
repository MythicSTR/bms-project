#include "block.h"
#include "ui_block.h"
#include <QMessageBox>
#include <QtWidgets>
block::block(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::block)
{
    ui->setupUi(this);
}

block::~block()
{
    delete ui;
}

void block::on_block_add_clicked()
{
    QString new_block = ui->block_new->text();

    collegedbOpen();
    QSqlQuery qry;
    qry.prepare("select * from block where block_no='"+new_block+"'");
    if(qry.exec())
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }

        if(count==0)
        {
            qry.prepare("insert into block (block_no) values ('"+new_block+"')");
            if(qry.exec())
            {
                QMessageBox::information(this,"Success","Block has been Sucessfully Added");
            }
        }

        else if(count>0)
        {
            QMessageBox::warning(this,"warning","Block already exist");
        }
    }

    collegedbClose();
}


void block::on_block_exit_clicked()
{

    this->hide();
}

//class ComboBox: public QComboBox
//{
//    Q_OBJECT
//public:
//    using QComboBox::QComboBox;
//signals:
//    void clicked();
//protected:
//    void mousePressEvent(QMouseEvent *event) override{
//        QComboBox::mousePressEvent(event);
//        QStyleOptionComboBox opt;
//        initStyleOption(&opt);
//        QStyle::SubControl sc = style()->hitTestComplexControl(QStyle::CC_ComboBox, &opt, event->pos(), this);
//        if(sc == QStyle::SC_ComboBoxArrow)
//            emit clicked();
//    }
//};


void block::on_block_show_activated(int index)      //not working currently
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    collegedbOpen();
    QSqlQuery qry;
    qry.prepare("select * from block");
    qry.exec();
    modal->setQuery(qry);
    ui->block_show->setModel(modal);
    collegedbClose();
}

