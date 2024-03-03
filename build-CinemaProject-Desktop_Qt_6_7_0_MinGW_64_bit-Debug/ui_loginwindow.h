/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *labeluser;
    QLabel *labelpass;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *Login;
    QPushButton *Register;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        labeluser = new QLabel(centralwidget);
        labeluser->setObjectName("labeluser");
        labeluser->setGeometry(QRect(90, 59, 161, 51));
        labelpass = new QLabel(centralwidget);
        labelpass->setObjectName("labelpass");
        labelpass->setGeometry(QRect(90, 120, 161, 51));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(220, 70, 291, 28));
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(220, 120, 291, 28));
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(220, 180, 121, 41));
        Register = new QPushButton(centralwidget);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(390, 180, 121, 41));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        labeluser->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Username</span></p></body></html>", nullptr));
        labelpass->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Password</span></p><p><br/></p></body></html>", nullptr));
        Login->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        Register->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
