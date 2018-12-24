/********************************************************************************
** Form generated from reading UI file 'templateprinter.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEPRINTER_H
#define UI_TEMPLATEPRINTER_H

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

class Ui_TemplatePrinter
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *Cancel;
    QPushButton *Print;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *TemplatePrinter)
    {
        if (TemplatePrinter->objectName().isEmpty())
            TemplatePrinter->setObjectName(QStringLiteral("TemplatePrinter"));
        TemplatePrinter->resize(400, 300);
        lineEdit = new QLineEdit(TemplatePrinter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 40, 113, 20));
        lineEdit_2 = new QLineEdit(TemplatePrinter);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 70, 113, 20));
        lineEdit_3 = new QLineEdit(TemplatePrinter);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 100, 113, 20));
        Cancel = new QPushButton(TemplatePrinter);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(220, 260, 75, 23));
        Print = new QPushButton(TemplatePrinter);
        Print->setObjectName(QStringLiteral("Print"));
        Print->setGeometry(QRect(310, 260, 75, 23));
        label = new QLabel(TemplatePrinter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 47, 13));
        label_2 = new QLabel(TemplatePrinter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 47, 13));
        label_3 = new QLabel(TemplatePrinter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 47, 13));

        retranslateUi(TemplatePrinter);

        QMetaObject::connectSlotsByName(TemplatePrinter);
    } // setupUi

    void retranslateUi(QDialog *TemplatePrinter)
    {
        TemplatePrinter->setWindowTitle(QApplication::translate("TemplatePrinter", "Print", 0));
        Cancel->setText(QApplication::translate("TemplatePrinter", "Cancel", 0));
        Print->setText(QApplication::translate("TemplatePrinter", "Print", 0));
        label->setText(QApplication::translate("TemplatePrinter", "Name", 0));
        label_2->setText(QApplication::translate("TemplatePrinter", "SBU ID", 0));
        label_3->setText(QApplication::translate("TemplatePrinter", "Ticket #", 0));
    } // retranslateUi

};

namespace Ui {
    class TemplatePrinter: public Ui_TemplatePrinter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEPRINTER_H
