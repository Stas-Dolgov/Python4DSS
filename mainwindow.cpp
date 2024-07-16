#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main_menu.h"
#include <QUrl>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_EXIT_clicked()
{
    this->close();
}

void MainWindow::on_how_play_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://sites.google.com/view/super-tic-tak-toe/%D0%B3%D0%BB%D0%B0%D0%B2%D0%BD%D0%B0%D1%8F-%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0?authuser=0")));
}

void MainWindow::on_menu_main_clicked()
{
    open_menu = new main_menu();
    open_menu -> show();
}

