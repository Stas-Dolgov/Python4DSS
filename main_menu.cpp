#include "main_menu.h"
#include "ui_main_menu.h"


main_menu::main_menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::main_menu)
{
    ui->setupUi(this);
}

main_menu::~main_menu()
{
    delete ui;
}

void main_menu::on_music_clicked()
{

}

void main_menu::on_reg_b_clicked()
{
    this -> close();
    reg = new form_registration();
    reg -> show();
}


void main_menu::on_sign_b_clicked()
{
    this -> close();
    sign = new Form_AVTORIZ();
    sign -> show();
}


void main_menu::on_achiv_clicked()
{
    this -> close();
    achivem = new achive();
    achivem -> show();
}

