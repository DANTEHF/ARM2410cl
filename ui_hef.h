/********************************************************************************
** Form generated from reading ui file 'hef.ui'
**
** Created: Thu Dec 8 19:23:13 2016
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_HEF_H
#define UI_HEF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *Motor_lab;
    QPushButton *motor_start;
    QPushButton *motor_stop;
    QPushButton *speedUp;
    QPushButton *speedDown;
    QPushButton *motor_reverse;
    QLabel *LED_lab;
    QLabel *AD_lab;
    QPushButton *led_start;
    QPushButton *led_release;
    QPushButton *show1;
    QPushButton *showA;
    QPushButton *ad_start;
    QPushButton *ad_stop;
    QLabel *adpot0;
    QLabel *adpot1;
    QLabel *adpot2;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(570, 451);
    Motor_lab = new QLabel(Form);
    Motor_lab->setObjectName(QString::fromUtf8("Motor_lab"));
    Motor_lab->setGeometry(QRect(20, 70, 54, 12));
    motor_start = new QPushButton(Form);
    motor_start->setObjectName(QString::fromUtf8("motor_start"));
    motor_start->setGeometry(QRect(150, 30, 75, 23));
    motor_stop = new QPushButton(Form);
    motor_stop->setObjectName(QString::fromUtf8("motor_stop"));
    motor_stop->setGeometry(QRect(150, 90, 75, 23));
    speedUp = new QPushButton(Form);
    speedUp->setObjectName(QString::fromUtf8("speedUp"));
    speedUp->setGeometry(QRect(310, 30, 75, 23));
    speedDown = new QPushButton(Form);
    speedDown->setObjectName(QString::fromUtf8("speedDown"));
    speedDown->setGeometry(QRect(310, 90, 75, 23));
    motor_reverse = new QPushButton(Form);
    motor_reverse->setObjectName(QString::fromUtf8("motor_reverse"));
    motor_reverse->setGeometry(QRect(450, 60, 75, 23));
    LED_lab = new QLabel(Form);
    LED_lab->setObjectName(QString::fromUtf8("LED_lab"));
    LED_lab->setGeometry(QRect(20, 200, 54, 12));
    AD_lab = new QLabel(Form);
    AD_lab->setObjectName(QString::fromUtf8("AD_lab"));
    AD_lab->setGeometry(QRect(20, 350, 54, 12));
    led_start = new QPushButton(Form);
    led_start->setObjectName(QString::fromUtf8("led_start"));
    led_start->setGeometry(QRect(150, 170, 75, 23));
    led_release = new QPushButton(Form);
    led_release->setObjectName(QString::fromUtf8("led_release"));
    led_release->setGeometry(QRect(150, 220, 75, 23));
    show1 = new QPushButton(Form);
    show1->setObjectName(QString::fromUtf8("show1"));
    show1->setGeometry(QRect(310, 170, 75, 23));
    showA = new QPushButton(Form);
    showA->setObjectName(QString::fromUtf8("showA"));
    showA->setGeometry(QRect(310, 220, 75, 23));
    ad_start = new QPushButton(Form);
    ad_start->setObjectName(QString::fromUtf8("ad_start"));
    ad_start->setGeometry(QRect(150, 310, 75, 23));
    ad_stop = new QPushButton(Form);
    ad_stop->setObjectName(QString::fromUtf8("ad_stop"));
    ad_stop->setGeometry(QRect(310, 310, 75, 23));
    adpot0 = new QLabel(Form);
    adpot0->setObjectName(QString::fromUtf8("adpot0"));
    adpot0->setGeometry(QRect(150, 390, 54, 16));
    adpot1 = new QLabel(Form);
    adpot1->setObjectName(QString::fromUtf8("adpot1"));
    adpot1->setGeometry(QRect(310, 390, 54, 12));
    adpot2 = new QLabel(Form);
    adpot2->setObjectName(QString::fromUtf8("adpot2"));
    adpot2->setGeometry(QRect(460, 390, 54, 12));

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    Motor_lab->setText(QApplication::translate("Form", "Motor", 0, QApplication::UnicodeUTF8));
    motor_start->setText(QApplication::translate("Form", "Start", 0, QApplication::UnicodeUTF8));
    motor_stop->setText(QApplication::translate("Form", "Stop", 0, QApplication::UnicodeUTF8));
    speedUp->setText(QApplication::translate("Form", "Speed++", 0, QApplication::UnicodeUTF8));
    speedDown->setText(QApplication::translate("Form", "Speed--", 0, QApplication::UnicodeUTF8));
    motor_reverse->setText(QApplication::translate("Form", "Reverse", 0, QApplication::UnicodeUTF8));
    LED_lab->setText(QApplication::translate("Form", "LED", 0, QApplication::UnicodeUTF8));
    AD_lab->setText(QApplication::translate("Form", "AD", 0, QApplication::UnicodeUTF8));
    led_start->setText(QApplication::translate("Form", "Start", 0, QApplication::UnicodeUTF8));
    led_release->setText(QApplication::translate("Form", "Stop", 0, QApplication::UnicodeUTF8));
    show1->setText(QApplication::translate("Form", "show1", 0, QApplication::UnicodeUTF8));
    showA->setText(QApplication::translate("Form", "showA", 0, QApplication::UnicodeUTF8));
    ad_start->setText(QApplication::translate("Form", "Start", 0, QApplication::UnicodeUTF8));
    ad_stop->setText(QApplication::translate("Form", "Stop", 0, QApplication::UnicodeUTF8));
    adpot0->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
    adpot1->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
    adpot2->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEF_H
