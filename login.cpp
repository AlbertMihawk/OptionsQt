#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    this->close();
}

void Login::on_pushButton_clicked()
{
       this->close();
        m.show();
}
