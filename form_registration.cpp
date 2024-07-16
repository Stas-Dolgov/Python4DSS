#include "form_registration.h"
#include "ui_form_registration.h"
#include "form_avtoriz.h"

form_registration::form_registration(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::form_registration)
{
    ui->setupUi(this);
}

form_registration::~form_registration()
{
    delete ui;
}

void form_registration::on_push_Back_clicked()
{
    this -> close();
}


void form_registration::on_alreadyReg_clicked()
{
    this -> close();
    sign = new Form_AVTORIZ();
    sign -> show();
}

