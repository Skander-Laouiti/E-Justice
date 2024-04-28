#include "delete.h"
#include "ui_delete.h"
#include "accuse.h"
#include <QLineEdit>
#include <QMessageBox>
#include "accuse.h"
#include "consult.h"
#include <QIntValidator>

Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_supp_btn_clicked()
{



int id=ui->Lsupp->text().toInt();



QMessageBox msgBox;

if(A.supprimer(id))
{

    QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Deleted successfully.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}


    else
       { QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("Delete failed \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}

}
