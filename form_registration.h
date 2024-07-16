#ifndef FORM_REGISTRATION_H
#define FORM_REGISTRATION_H

#include <QWidget>
class Form_AVTORIZ;


namespace Ui {
class form_registration;
}

class form_registration : public QWidget
{
    Q_OBJECT

public:
    explicit form_registration(QWidget *parent = nullptr);
    ~form_registration();

private slots:
    void on_push_Back_clicked();

    void on_alreadyReg_clicked();

private:
    Ui::form_registration *ui;
    Form_AVTORIZ *sign;

};

#endif // FORM_REGISTRATION_H
