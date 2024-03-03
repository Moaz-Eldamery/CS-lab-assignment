#include "loginwindow.h"
#include "ui_loginwindow.h"\


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_Login_clicked()
{



}


void LoginWindow::on_Register_clicked()
{

    a[i].username=ui->username->text();
    a[i].password=ui->password->text();


}

