#include "loginwindow.h"
#include "registerwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "users.h"
#include <QMessageBox>


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->Wrong->setVisible(0);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_Login_clicked()
{
    for(int i=0;i<usercount;i++){
        if(username[i]==ui->username->text()&& password[i]==ui->password->text()){
            hide();
            WelcomeWindow* welcomewindow = new WelcomeWindow(this,username[i],ages[i]);
            welcomewindow->show();
        }
    }
    ui->Wrong->setVisible(1);
    ui->Wrong->setText("Wrong username or password");
}



void LoginWindow::on_Register_clicked()
{
    hide();
    RegisterWindow* registeropen = new RegisterWindow(this);
    registeropen->show();
}

