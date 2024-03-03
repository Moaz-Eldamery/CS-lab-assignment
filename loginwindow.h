#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_Login_clicked();

    void on_Register_clicked();

private:
    Ui::LoginWindow *ui;
    struct customer
    {
        QString username;
        QString password;
    };
    customer *a = new customer[100];


    int i=0;
};
#endif // LOGINWINDOW_H
