#ifndef ACHIVE_H
#define ACHIVE_H

#include <QWidget>

namespace Ui {
class achive;
}

class achive : public QWidget
{
    Q_OBJECT

public:
    explicit achive(QWidget *parent = nullptr);
    ~achive();

private slots:
    void on_achive_back_clicked();

private:
    Ui::achive *ui;
};

#endif // ACHIVE_H
