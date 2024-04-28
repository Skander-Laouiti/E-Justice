#include "tri.h"
#include "ui_tri.h"

tri::tri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tri)
{
    ui->setupUi(this);
    ui->tabletri->setModel(A.tri());
}

tri::~tri()
{
    delete ui;
}
