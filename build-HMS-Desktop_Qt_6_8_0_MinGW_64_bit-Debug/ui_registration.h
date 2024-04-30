/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName("Registration");
        Registration->resize(477, 258);
        label_2 = new QLabel(Registration);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 51, 16));
        pushButton = new QPushButton(Registration);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 150, 221, 20));
        label = new QLabel(Registration);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 51, 16));
        textEdit_2 = new QTextEdit(Registration);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(130, 110, 161, 21));
        textEdit = new QTextEdit(Registration);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(130, 70, 161, 21));
        pushButton_2 = new QPushButton(Registration);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 10, 31, 20));

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "Register", nullptr));
        label->setText(QCoreApplication::translate("Registration", "Username:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Registration", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
