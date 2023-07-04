/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QPushButton *wskazowka;
    QPushButton *wyczysc;
    QPushButton *nowa_gra;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *sprawdz;
    QPushButton *pushButton_4;
    QPushButton *pokaz_rozwiazanie;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_9;
    QTextBrowser *textBrowser_10;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(511, 527);
        Interface->setMinimumSize(QSize(511, 527));
        Interface->setMaximumSize(QSize(511, 527));
        QPalette palette;
        Interface->setPalette(palette);
        wskazowka = new QPushButton(Interface);
        wskazowka->setObjectName(QString::fromUtf8("wskazowka"));
        wskazowka->setGeometry(QRect(30, 330, 151, 31));
        wyczysc = new QPushButton(Interface);
        wyczysc->setObjectName(QString::fromUtf8("wyczysc"));
        wyczysc->setGeometry(QRect(30, 370, 151, 31));
        nowa_gra = new QPushButton(Interface);
        nowa_gra->setObjectName(QString::fromUtf8("nowa_gra"));
        nowa_gra->setGeometry(QRect(30, 290, 151, 31));
        pushButton_2 = new QPushButton(Interface);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 170, 51, 41));
        pushButton_3 = new QPushButton(Interface);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 110, 51, 41));
        pushButton = new QPushButton(Interface);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 50, 51, 41));
        sprawdz = new QPushButton(Interface);
        sprawdz->setObjectName(QString::fromUtf8("sprawdz"));
        sprawdz->setGeometry(QRect(30, 450, 151, 31));
        pushButton_4 = new QPushButton(Interface);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 230, 51, 41));
        pokaz_rozwiazanie = new QPushButton(Interface);
        pokaz_rozwiazanie->setObjectName(QString::fromUtf8("pokaz_rozwiazanie"));
        pokaz_rozwiazanie->setGeometry(QRect(30, 410, 151, 31));
        QFont font;
        font.setPointSize(8);
        pokaz_rozwiazanie->setFont(font);
        textBrowser_2 = new QTextBrowser(Interface);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(210, 50, 256, 41));
        textBrowser_3 = new QTextBrowser(Interface);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(210, 110, 256, 41));
        textBrowser_4 = new QTextBrowser(Interface);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(210, 170, 256, 41));
        textBrowser_5 = new QTextBrowser(Interface);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(210, 230, 256, 41));
        textBrowser_6 = new QTextBrowser(Interface);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(210, 290, 256, 31));
        textBrowser_7 = new QTextBrowser(Interface);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(210, 330, 256, 31));
        textBrowser_8 = new QTextBrowser(Interface);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(210, 370, 256, 31));
        textBrowser_9 = new QTextBrowser(Interface);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(210, 410, 256, 31));
        textBrowser_10 = new QTextBrowser(Interface);
        textBrowser_10->setObjectName(QString::fromUtf8("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(210, 450, 256, 31));
        textBrowser = new QTextBrowser(Interface);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 521, 541));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(0, 0));
        textBrowser->setMaximumSize(QSize(521, 541));
        QPalette palette1;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(227, 227, 227, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(160, 160, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush5(QColor(222, 222, 222, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(105, 105, 105, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(0, 120, 215, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush14(QColor(120, 120, 120, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QBrush brush15(QColor(247, 247, 247, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        textBrowser->setPalette(palette1);
        textBrowser->raise();
        wskazowka->raise();
        wyczysc->raise();
        nowa_gra->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton->raise();
        sprawdz->raise();
        pushButton_4->raise();
        pokaz_rozwiazanie->raise();
        textBrowser_2->raise();
        textBrowser_3->raise();
        textBrowser_4->raise();
        textBrowser_5->raise();
        textBrowser_6->raise();
        textBrowser_7->raise();
        textBrowser_8->raise();
        textBrowser_9->raise();
        textBrowser_10->raise();

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QDialog *Interface)
    {
        Interface->setWindowTitle(QCoreApplication::translate("Interface", "Interfejs", nullptr));
        wskazowka->setText(QCoreApplication::translate("Interface", "WSKAZ\303\223WKA", nullptr));
        wyczysc->setText(QCoreApplication::translate("Interface", "WYCZY\305\232\304\206", nullptr));
        nowa_gra->setText(QCoreApplication::translate("Interface", "NOWA GRA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Interface", "A", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Interface", "S", nullptr));
        pushButton->setText(QCoreApplication::translate("Interface", "W", nullptr));
        sprawdz->setText(QCoreApplication::translate("Interface", "SPRAWD\305\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Interface", "D", nullptr));
        pokaz_rozwiazanie->setText(QCoreApplication::translate("Interface", "POKA\305\273 ROZWI\304\204ZANIE", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">ruch w g\303\263r\304\231</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">ruch w d\303\263\305\202</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">ruch w lewo</span></p></body></html>", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">ruch w prawo</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">rozpocznij now\304\205 gr\304\231</span></p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">uzyskaj wskaz\303\263wk\304\231</span></p></body></html>", nullptr));
        textBrowser_8->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">wyczy\305\233\304\207 plansz\304\231</span></p></body></html>", nullptr));
        textBrowser_9->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">wy\305\233wietl przyk\305\202adowe rozwi\304\205zanie</span></p></body></html>", nullptr));
        textBrowser_10->setHtml(QCoreApplication::translate("Interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">sprawd\305\272 wprowadzone rozwi\304\205zanie</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
