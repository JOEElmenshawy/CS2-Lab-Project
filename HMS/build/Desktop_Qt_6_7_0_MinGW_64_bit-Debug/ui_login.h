/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logIn
{
public:
    QWidget *centralwidget;
    QLabel *BackgroundLabel;
    QPushButton *LoginButton;
    QLabel *TitleLabel;
    QPushButton *SignUpButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logIn)
    {
        if (logIn->objectName().isEmpty())
            logIn->setObjectName("logIn");
        logIn->resize(837, 619);
        centralwidget = new QWidget(logIn);
        centralwidget->setObjectName("centralwidget");
        BackgroundLabel = new QLabel(centralwidget);
        BackgroundLabel->setObjectName("BackgroundLabel");
        BackgroundLabel->setGeometry(QRect(0, 0, 831, 591));
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(250, 360, 121, 41));
        QPalette palette;
        QBrush brush(QColor(85, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 131, 232, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        LoginButton->setPalette(palette);
        LoginButton->setStyleSheet(QString::fromUtf8("font:12pt \"Times New Roman\";"));
        TitleLabel = new QLabel(centralwidget);
        TitleLabel->setObjectName("TitleLabel");
        TitleLabel->setGeometry(QRect(180, 200, 591, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(28);
        font.setBold(true);
        TitleLabel->setFont(font);
        SignUpButton = new QPushButton(centralwidget);
        SignUpButton->setObjectName("SignUpButton");
        SignUpButton->setGeometry(QRect(480, 360, 121, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        SignUpButton->setPalette(palette1);
        SignUpButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        logIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 837, 26));
        logIn->setMenuBar(menubar);
        statusbar = new QStatusBar(logIn);
        statusbar->setObjectName("statusbar");
        logIn->setStatusBar(statusbar);

        retranslateUi(logIn);

        QMetaObject::connectSlotsByName(logIn);
    } // setupUi

    void retranslateUi(QMainWindow *logIn)
    {
        logIn->setWindowTitle(QCoreApplication::translate("logIn", "logIn", nullptr));
        BackgroundLabel->setText(QString());
        LoginButton->setText(QCoreApplication::translate("logIn", "Login", nullptr));
        TitleLabel->setText(QCoreApplication::translate("logIn", "Hospital Managment System", nullptr));
        SignUpButton->setText(QCoreApplication::translate("logIn", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logIn: public Ui_logIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
