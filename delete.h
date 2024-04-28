#ifndef DELETE_H
#define DELETE_H
#include "accuse.h"

#include <QDialog>



namespace Ui {
class Delete;
}

class Delete : public QDialog
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();

private slots:
    void on_supp_btn_clicked();

private:
    Ui::Delete *ui;
    Accuse A;
};

#endif 
