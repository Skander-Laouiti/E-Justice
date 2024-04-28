#ifndef RECHERCHE_H
#define RECHERCHE_H
#include "accuse.h"
#include <QDialog>

namespace Ui {
class Recherche;
}

class Recherche : public QDialog
{
    Q_OBJECT

public:
    explicit Recherche(QWidget *parent = nullptr);
    ~Recherche();

private slots:

    void on_getsrch_clicked();

private:
    Ui::Recherche *ui;
    Accuse A;
};

#endif 
