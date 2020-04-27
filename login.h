#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
signals:
    void login_success();

private:
    Ui::Login *ui;
    MainWindow m;
};

#endif // LOGIN_H
