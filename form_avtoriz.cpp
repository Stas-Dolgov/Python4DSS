#include "form_avtoriz.h"
#include "ui_form_avtoriz.h"
#include"form_registration.h"



Form_AVTORIZ::Form_AVTORIZ(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_AVTORIZ)
{
    ui->setupUi(this);
}

Form_AVTORIZ::~Form_AVTORIZ()
{
    delete ui;
}

void Form_AVTORIZ::on_pushButton_sign_clicked()
{
    QString log = ui -> login -> text();
    QString pass = ui -> Password -> text();

    if (log == "admin" && pass == "1234")
    {
        QMessageBox::information(this, "successful", "Приветствую, admin!");
        this -> close();
    }
    else
    {
        QMessageBox::information(this, "warning", "Ошибка! Пользователь не найден!");
    }
}


void Form_AVTORIZ::on_pushButton_reg_clicked()
{
    this -> close();
    reg = new form_registration();
    reg -> show();
}


void Form_AVTORIZ::on_pushBack_clicked()
{
    this -> close();
}

