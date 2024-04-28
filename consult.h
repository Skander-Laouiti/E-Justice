#ifndef CONSULT_H
#define CONSULT_H
#include "accuse.h"
#include <QDialog>



namespace Ui {
class Consult;
}

class Consult : public QDialog
{
    Q_OBJECT

public:
    explicit Consult(QWidget *parent = nullptr);
    ~Consult();

       

private slots:




private:
    Ui::Consult *ui;
    Accuse A;
};

#endif 
