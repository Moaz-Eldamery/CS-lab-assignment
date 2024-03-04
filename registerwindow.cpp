#include "registerwindow.h"
#include "ui_registerwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->filltheform->setVisible(0);
    ui->undertheage->setVisible(0);
    ui->nomatch->setVisible(0);
    ui->userteken->setVisible(0);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
