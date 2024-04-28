#include "consult.h"
#include "ui_consult.h"
#include "accuse.h"
#include <QMessageBox>
#include <QDialog>
#include <QFrame>
#include <QSqlQueryModel>



Consult::Consult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Consult)
{
    ui->setupUi(this);
    ui->tab_aff->setModel(A.afficher());

}

Consult::~Consult()
{
    delete ui;
}



