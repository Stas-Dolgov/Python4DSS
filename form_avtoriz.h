#ifndef FORM_AVTORIZ_H
#define FORM_AVTORIZ_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
class form_registration;

namespace Ui {
class Form_AVTORIZ;
}

class Form_AVTORIZ : public QWidget
{
    Q_OBJECT

public:
    explicit Form_AVTORIZ(QWidget *parent = nullptr);
    ~Form_AVTORIZ();

private slots:
    void on_pushButton_sign_clicked();

    void on_pushButton_reg_clicked();

    void on_pushBack_clicked();

private:
    Ui::Form_AVTORIZ *ui;
    form_registration *reg;
};

#endif // FORM_AVTORIZ_H
