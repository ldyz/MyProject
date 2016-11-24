/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *LoginButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *msg;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(324, 205);
        Login->setAcceptDrops(false);
        LoginButton = new QPushButton(Login);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(110, 140, 111, 31));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 61, 41));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(54, 90, 71, 41));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 10, 151, 31));
        QFont font2;
        font2.setPointSize(16);
        label_3->setFont(font2);
        username = new QLineEdit(Login);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(130, 61, 131, 21));
        username->setFocusPolicy(Qt::StrongFocus);
        username->setFrame(true);
        password = new QLineEdit(Login);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(131, 101, 131, 21));
        password->setEchoMode(QLineEdit::Password);
        msg = new QLabel(Login);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(70, 180, 371, 16));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\345\225\206\346\210\267\350\256\242\345\215\225\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        LoginButton->setText(QApplication::translate("Login", "\350\277\233\345\205\245\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("Login", "\345\257\206  \347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("Login", "9V\345\225\206\345\237\216\350\256\242\345\215\225\347\263\273\347\273\237", 0));
        password->setInputMask(QString());
        msg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
