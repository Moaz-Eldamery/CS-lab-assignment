#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>
#include<QPixmap>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr,QString username="",int age=0);
    ~WelcomeWindow();

private slots:
    void on_Logout_clicked();


private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
