#include "modify.h"
#include "ui_modify.h"
#include "delete.h"
#include "ui_delete.h"
#include "accuse.h"
#include <QLineEdit>
#include <QMessageBox>
#include "accuse.h"
#include "consult.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QString>

Modify::Modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modify)
{
    ui->setupUi(this);
}

Modify::~Modify()
{
    delete ui;
}


void Modify::on_modify_clicked()
{
    QSqlQuery query;
    int id=ui->Lmid->text().toInt();
     QString id_string=QString::number(id);
    QString name=ui->Lmname->text();
    QString lastname=ui->Lmlastname->text();
    QDate Date_B=ui->LmDate_B->date();
    Date_B.toString("mm/dd/yyyy");
    QString gender=ui->LMgender->currentText();
    QString acc_cause=ui->Lmacc_cause->text();
    QDate Date_S=ui->LMDateS->date();
    Date_S.toString("mm/dd/yyyy");

    Accuse A(id, name,lastname, gender, Date_B, acc_cause, Date_S);


        bool test=A.modifier(id,name,lastname,gender,Date_B,acc_cause,Date_S);

        if(test)
          {
              QMessageBox::information(nullptr,QObject::tr("Database is not open"
                                                         "Modification Failed"),
                                                   QObject::tr("Database is open"
                                                               " Modified Successfully.\n"
                                                               "Click Cancel to exit ."),QMessageBox::Cancel);
                   }
              else
              {
              QMessageBox::critical(nullptr,QObject::tr(""
                                                        ""),
                                               QObject::tr(" FAILED MODIFY.\n"
                                                           "Click Cancel to exit ."),QMessageBox::Cancel);
              }
}

