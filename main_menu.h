#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QWidget>
#include <QStandardItemModel>


#include "form_avtoriz.h"
#include "form_registration.h"
#include "achive.h"

namespace Ui {
class main_menu;
}

class main_menu : public QWidget
{
    Q_OBJECT

public:
    explicit main_menu(QWidget *parent = nullptr);
    ~main_menu();

private slots:
    void on_music_clicked();

    void on_reg_b_clicked();

    void on_sign_b_clicked();

    void on_achiv_clicked();

private:
    Ui::main_menu *ui;
    Form_AVTORIZ *sign;
    form_registration *reg;
    achive *achivem;
};

#endif // MAIN_MENU_H
