#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"
#include<QPixmap>


WelcomeWindow::WelcomeWindow(QWidget *parent,QString username,int age)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QString str = QString::number(age);
    ui->Hello->setText("Hello "+ username+ str);

    QPixmap pix ("C:\\Users\\Dell\\Desktop\\Test\\Welcome.png");
    int w = ui->Photo->width();
    int h = ui->Photo->height();
    ui->Photo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_Logout_clicked()
{
    hide();
    LoginWindow* Login = new LoginWindow(this);
    Login->show();
}




