#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "main_menu.h"
#include "form_avtoriz.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_EXIT_clicked();
    //void slot_on_auth_ok();
    void on_how_play_clicked();
    void on_menu_main_clicked();

private:
    Ui::MainWindow *ui;
    Form_AVTORIZ *ui_reg;
    main_menu *open_menu;
};
#endif // MAINWINDOW_H
