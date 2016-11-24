/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Details
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *labelNum;
    QLabel *lobelAddress;
    QLabel *labelTel;
    QLabel *labelTime;
    QLabel *labelSum;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *Details)
    {
        if (Details->objectName().isEmpty())
            Details->setObjectName(QStringLiteral("Details"));
        Details->resize(557, 378);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Details->setWindowIcon(icon);
        label_2 = new QLabel(Details);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 51, 17));
        label_3 = new QLabel(Details);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 51, 17));
        label_4 = new QLabel(Details);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 51, 17));
        label_5 = new QLabel(Details);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 20, 51, 17));
        label_6 = new QLabel(Details);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 80, 51, 17));
        label_8 = new QLabel(Details);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 110, 51, 17));
        labelNum = new QLabel(Details);
        labelNum->setObjectName(QStringLiteral("labelNum"));
        labelNum->setGeometry(QRect(80, 20, 211, 17));
        lobelAddress = new QLabel(Details);
        lobelAddress->setObjectName(QStringLiteral("lobelAddress"));
        lobelAddress->setGeometry(QRect(80, 50, 461, 17));
        labelTel = new QLabel(Details);
        labelTel->setObjectName(QStringLiteral("labelTel"));
        labelTel->setGeometry(QRect(80, 80, 181, 17));
        labelTime = new QLabel(Details);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(380, 20, 161, 17));
        labelSum = new QLabel(Details);
        labelSum->setObjectName(QStringLiteral("labelSum"));
        labelSum->setGeometry(QRect(380, 80, 151, 17));
        tableWidget = new QTableWidget(Details);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 130, 541, 201));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::DotLine);
        tableWidget->setSortingEnabled(true);
        tableWidget->setColumnCount(5);
        pushButton = new QPushButton(Details);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 340, 541, 31));

        retranslateUi(Details);

        QMetaObject::connectSlotsByName(Details);
    } // setupUi

    void retranslateUi(QWidget *Details)
    {
        Details->setWindowTitle(QApplication::translate("Details", "\350\256\242\345\215\225\350\257\246\346\203\205\351\241\265", 0));
        label_2->setText(QApplication::translate("Details", "\350\256\242\345\215\225\347\274\226\345\217\267:", 0));
        label_3->setText(QApplication::translate("Details", "\346\224\266\350\264\247\345\234\260\345\235\200:", 0));
        label_4->setText(QApplication::translate("Details", "\350\201\224\347\263\273\347\224\265\350\257\235:", 0));
        label_5->setText(QApplication::translate("Details", "\350\256\242\345\215\225\346\227\266\351\227\264:", 0));
        label_6->setText(QApplication::translate("Details", "\350\256\242\345\215\225\351\207\221\351\242\235:", 0));
        label_8->setText(QApplication::translate("Details", "\350\256\242\345\215\225\350\257\246\346\203\205:", 0));
        labelNum->setText(QString());
        lobelAddress->setText(QString());
        labelTel->setText(QString());
        labelTime->setText(QString());
        labelSum->setText(QString());
        pushButton->setText(QApplication::translate("Details", "\346\211\223\345\215\260\345\260\217\347\245\250", 0));
    } // retranslateUi

};

namespace Ui {
    class Details: public Ui_Details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
