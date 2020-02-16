/********************************************************************************
** Form generated from reading UI file 'menu_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_DIALOG_H
#define UI_MENU_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu_dialog
{
public:
    QLineEdit *EntradaA;
    QLineEdit *SalidaB;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBoxBaseA;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBoxBaseB;
    QPushButton *pushButton;

    void setupUi(QDialog *menu_dialog)
    {
        if (menu_dialog->objectName().isEmpty())
            menu_dialog->setObjectName(QString::fromUtf8("menu_dialog"));
        menu_dialog->resize(329, 263);
        EntradaA = new QLineEdit(menu_dialog);
        EntradaA->setObjectName(QString::fromUtf8("EntradaA"));
        EntradaA->setGeometry(QRect(100, 90, 131, 21));
        SalidaB = new QLineEdit(menu_dialog);
        SalidaB->setObjectName(QString::fromUtf8("SalidaB"));
        SalidaB->setGeometry(QRect(100, 180, 131, 21));
        label = new QLabel(menu_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 171, 16));
        label_2 = new QLabel(menu_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 47, 13));
        label_3 = new QLabel(menu_dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 190, 47, 13));
        comboBoxBaseA = new QComboBox(menu_dialog);
        comboBoxBaseA->setObjectName(QString::fromUtf8("comboBoxBaseA"));
        comboBoxBaseA->setGeometry(QRect(100, 120, 69, 22));
        label_4 = new QLabel(menu_dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 120, 47, 13));
        label_5 = new QLabel(menu_dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 150, 47, 13));
        comboBoxBaseB = new QComboBox(menu_dialog);
        comboBoxBaseB->setObjectName(QString::fromUtf8("comboBoxBaseB"));
        comboBoxBaseB->setGeometry(QRect(100, 150, 69, 22));
        pushButton = new QPushButton(menu_dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 221, 71, 20));

        retranslateUi(menu_dialog);

        QMetaObject::connectSlotsByName(menu_dialog);
    } // setupUi

    void retranslateUi(QDialog *menu_dialog)
    {
        menu_dialog->setWindowTitle(QApplication::translate("menu_dialog", "menu_dialog", nullptr));
        label->setText(QApplication::translate("menu_dialog", "Conversor de bases (2 - 30)", nullptr));
        label_2->setText(QApplication::translate("menu_dialog", "EntradaA", nullptr));
        label_3->setText(QApplication::translate("menu_dialog", "SalidaB", nullptr));
        label_4->setText(QApplication::translate("menu_dialog", "BaseA ", nullptr));
        label_5->setText(QApplication::translate("menu_dialog", "BaseB", nullptr));
        pushButton->setText(QApplication::translate("menu_dialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_dialog: public Ui_menu_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_DIALOG_H
