#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "welcomewindow.h"
#include "users.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    resetErrors();
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
void RegisterWindow::resetErrors() {
    ui->filltheform->setVisible(0);
    ui->undertheage->setVisible(0);
    ui->nomatch->setVisible(0);
    ui->userteken->setVisible(0);
}

void RegisterWindow::on_pushButton_clicked()
{
    resetErrors();
    QString uname = ui->username->text();
    QString pass = ui->password->text();
    QString pass2 = ui->repassword->text();
    QString day = ui->Day->text();
    QString year = ui->Year->text();
    QString month = ui->Month->currentText();
    QString gender;
    QString acctype;
    bool p1=0,p2=0,p3=0,p4=0;
    if (ui->Male->isChecked()){
        gender = ui->Male->text();
    }
    else if (ui->Female->isChecked()){
        gender = ui->Female->text();
    }
    if (ui->User->isChecked()){
        acctype = ui->User->text();
    }
    else if (ui->Admin->isChecked()){
        acctype = ui->Admin->text();
    }
    for(int i=0;i<usercount;i++){
        if(uname==username[i]){
            ui->userteken->setVisible(true);

        }
        else{p1 =1;}
    }
    if(pass!=pass2){
        ui->nomatch->setVisible(true);

    }
    else{p2 =1;}
    int x = year.toInt();
    if(2024-x<12){
        ui->undertheage->setVisible(true);

    }
    else{p3 =1;}
    if(uname.isEmpty()||pass.isEmpty()||pass2.isEmpty()||
            day.isEmpty()||month.isEmpty()||year.isEmpty()||
            gender.isEmpty()||acctype.isEmpty()||(!ui->checkBox->isChecked()
                &&!ui->checkBox_2->isChecked()
                &&!ui->checkBox_3->isChecked()
                &&!ui->checkBox_4->isChecked()
                &&!ui->checkBox_5->isChecked()
                &&!ui->checkBox_6->isChecked())){
                ui->filltheform->setVisible(true);

                //hiii
            }
    else{p4=1;
            }
    if(p1&&p2&&p3&&p4){
        // Append user to users array and increase count
        username[usercount] = uname;
        password[usercount] = pass;
        ages[usercount] = 2024-x;


        hide();
        WelcomeWindow* welcomeWindow = new WelcomeWindow(this,username[usercount],ages[usercount]);
        usercount++;
        welcomeWindow->show();
    }

}
