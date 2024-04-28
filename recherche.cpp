#include "recherche.h"
#include "ui_recherche.h"

Recherche::Recherche(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recherche)
{
    ui->setupUi(this);
}

Recherche::~Recherche()
{
    delete ui;
}


void Recherche::on_getsrch_clicked()
{
    int id=ui->Lid_rech->text().toInt();
  QSqlQueryModel *verif=A.recherche(id);
               if (verif!=nullptr)
               {
                   ui->tablerech->setModel(verif);
               }
}
