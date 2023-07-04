/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StartScreen
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *StartScreen)
    {
        if (StartScreen->objectName().isEmpty())
            StartScreen->setObjectName(QString::fromUtf8("StartScreen"));
        StartScreen->resize(860, 640);
        StartScreen->setMinimumSize(QSize(860, 640));
        StartScreen->setMaximumSize(QSize(860, 640));
        graphicsView = new QGraphicsView(StartScreen);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 861, 641));
        pushButton = new QPushButton(StartScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 230, 241, 71));
        pushButton_2 = new QPushButton(StartScreen);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 320, 241, 81));

        retranslateUi(StartScreen);

        QMetaObject::connectSlotsByName(StartScreen);
    } // setupUi

    void retranslateUi(QDialog *StartScreen)
    {
        StartScreen->setWindowTitle(QCoreApplication::translate("StartScreen", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("StartScreen", "NOWA GRA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StartScreen", "WCZYTAJ GR\304\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScreen: public Ui_StartScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
