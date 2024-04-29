#include "login.h"
#include "ui_login.h"
#include<QPixmap>
logIn::logIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logIn)
{
    ui->setupUi(this);
    QPixmap b(":/Images/Login2.png");
   b = b.scaled(ui->BackgroundLabel->size());
    ui->BackgroundLabel->setPixmap(b);
}

logIn::~logIn()
{
    delete ui;
}
