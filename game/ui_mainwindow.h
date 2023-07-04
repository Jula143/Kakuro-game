/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionZapisz_gre;
    QAction *actionWczytaj_gre;
    QAction *actionZakoncz;
    QAction *actionZasady_gry;
    QAction *actionInterfejs;
    QWidget *centralwidget;
    QLCDNumber *Timer;
    QPushButton *nowa_gra;
    QPushButton *wskazowka;
    QPushButton *pokaz_rozwiazanie;
    QGraphicsView *graphicsView;
    QPushButton *wyczysc;
    QPushButton *sprawdz;
    QMenuBar *menubar;
    QMenu *menuGra;
    QMenu *menuPomoc;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(860, 650);
        MainWindow->setMinimumSize(QSize(860, 650));
        MainWindow->setMaximumSize(QSize(860, 650));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(227, 227, 227, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(160, 160, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush5(QColor(9, 0, 61, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(105, 105, 105, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(0, 120, 215, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush14(QColor(120, 120, 120, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QBrush brush15(QColor(247, 247, 247, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionZapisz_gre = new QAction(MainWindow);
        actionZapisz_gre->setObjectName(QString::fromUtf8("actionZapisz_gre"));
        actionWczytaj_gre = new QAction(MainWindow);
        actionWczytaj_gre->setObjectName(QString::fromUtf8("actionWczytaj_gre"));
        actionZakoncz = new QAction(MainWindow);
        actionZakoncz->setObjectName(QString::fromUtf8("actionZakoncz"));
        actionZasady_gry = new QAction(MainWindow);
        actionZasady_gry->setObjectName(QString::fromUtf8("actionZasady_gry"));
        actionInterfejs = new QAction(MainWindow);
        actionInterfejs->setObjectName(QString::fromUtf8("actionInterfejs"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Timer = new QLCDNumber(centralwidget);
        Timer->setObjectName(QString::fromUtf8("Timer"));
        Timer->setGeometry(QRect(690, 40, 141, 41));
        nowa_gra = new QPushButton(centralwidget);
        nowa_gra->setObjectName(QString::fromUtf8("nowa_gra"));
        nowa_gra->setGeometry(QRect(690, 250, 151, 31));
        wskazowka = new QPushButton(centralwidget);
        wskazowka->setObjectName(QString::fromUtf8("wskazowka"));
        wskazowka->setGeometry(QRect(690, 290, 151, 31));
        pokaz_rozwiazanie = new QPushButton(centralwidget);
        pokaz_rozwiazanie->setObjectName(QString::fromUtf8("pokaz_rozwiazanie"));
        pokaz_rozwiazanie->setGeometry(QRect(690, 400, 151, 31));
        QFont font;
        font.setPointSize(8);
        pokaz_rozwiazanie->setFont(font);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 631, 581));
        wyczysc = new QPushButton(centralwidget);
        wyczysc->setObjectName(QString::fromUtf8("wyczysc"));
        wyczysc->setGeometry(QRect(690, 360, 151, 31));
        sprawdz = new QPushButton(centralwidget);
        sprawdz->setObjectName(QString::fromUtf8("sprawdz"));
        sprawdz->setGeometry(QRect(690, 470, 151, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 26));
        menuGra = new QMenu(menubar);
        menuGra->setObjectName(QString::fromUtf8("menuGra"));
        menuPomoc = new QMenu(menubar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGra->menuAction());
        menubar->addAction(menuPomoc->menuAction());
        menuGra->addAction(actionZapisz_gre);
        menuGra->addAction(actionWczytaj_gre);
        menuGra->addAction(actionZakoncz);
        menuPomoc->addAction(actionZasady_gry);
        menuPomoc->addAction(actionInterfejs);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kakuro", nullptr));
        actionZapisz_gre->setText(QCoreApplication::translate("MainWindow", "Zapisz gr\304\231", nullptr));
#if QT_CONFIG(shortcut)
        actionZapisz_gre->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWczytaj_gre->setText(QCoreApplication::translate("MainWindow", "Wczytaj gr\304\231", nullptr));
#if QT_CONFIG(shortcut)
        actionWczytaj_gre->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZakoncz->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz", nullptr));
#if QT_CONFIG(shortcut)
        actionZakoncz->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZasady_gry->setText(QCoreApplication::translate("MainWindow", "Zasady gry", nullptr));
#if QT_CONFIG(shortcut)
        actionZasady_gry->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterfejs->setText(QCoreApplication::translate("MainWindow", "Interfejs", nullptr));
#if QT_CONFIG(shortcut)
        actionInterfejs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        nowa_gra->setText(QCoreApplication::translate("MainWindow", "NOWA GRA", nullptr));
        wskazowka->setText(QCoreApplication::translate("MainWindow", "WSKAZ\303\223WKA", nullptr));
        pokaz_rozwiazanie->setText(QCoreApplication::translate("MainWindow", "POKA\305\273 ROZWI\304\204ZANIE", nullptr));
        wyczysc->setText(QCoreApplication::translate("MainWindow", "WYCZY\305\232\304\206", nullptr));
        sprawdz->setText(QCoreApplication::translate("MainWindow", "SPRAWD\305\271", nullptr));
        menuGra->setTitle(QCoreApplication::translate("MainWindow", "Gra", nullptr));
        menuPomoc->setTitle(QCoreApplication::translate("MainWindow", "Pomoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
