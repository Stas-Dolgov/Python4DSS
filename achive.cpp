#include "achive.h"
#include "ui_achive.h"

achive::achive(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::achive)
{
    ui->setupUi(this);
}

achive::~achive()
{
    delete ui;
}

void achive::on_achive_back_clicked()
{
    this -> close();
}

