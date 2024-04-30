/********************************************************************************
** Form generated from reading UI file 'logininfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININFO_H
#define UI_LOGININFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginInfo
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *loginInfo)
    {
        if (loginInfo->objectName().isEmpty())
            loginInfo->setObjectName("loginInfo");
        loginInfo->resize(400, 300);
        textEdit = new QTextEdit(loginInfo);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 60, 161, 21));
        label = new QLabel(loginInfo);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 51, 16));
        textEdit_2 = new QTextEdit(loginInfo);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(90, 100, 161, 21));
        label_2 = new QLabel(loginInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 51, 16));
        pushButton = new QPushButton(loginInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 140, 161, 20));
        pushButton_2 = new QPushButton(loginInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(350, 10, 31, 20));

        retranslateUi(loginInfo);

        QMetaObject::connectSlotsByName(loginInfo);
    } // setupUi

    void retranslateUi(QWidget *loginInfo)
    {
        loginInfo->setWindowTitle(QCoreApplication::translate("loginInfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("loginInfo", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("loginInfo", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("loginInfo", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("loginInfo", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginInfo: public Ui_loginInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININFO_H
