#ifndef RESULTS_H
#define RESULTS_H
#include "accuse.h"
#include <QDialog>

namespace Ui {
class results;
}

class results : public QDialog
{
    Q_OBJECT

public:
    explicit results(QWidget *parent = nullptr);
    ~results();

private slots:
    void on_UPLOAD_clicked();

private:
    Ui::results *ui;
    Accuse A;
};

#endif 
