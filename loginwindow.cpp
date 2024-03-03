#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>


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




}

