#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QTimer>
#include <QTime>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include "myboard.h"
#include "gamerules.h"
#include "interface.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent * event);  //metoda obslugująca nacisniecie wybranych klawiszy (WSAD oraz klawiszy numerycznych 1-9)

private slots:
    void on_actionZasady_gry_triggered();   //metoda wyswietlajaca dodatkowe okno objasniajace zasady gry
    void on_actionZapisz_gre_triggered();    //metoda obslugująca zapisywanie gry
    void on_actionWczytaj_gre_triggered();   //metoda obslugująca wczytywanie gry z pliku
    void on_actionZakoncz_triggered();      //metoda konczaca program
    void on_actionInterfejs_triggered();    //otwiera okno zawierajace objasnienie interfejsu i sterowania
    void on_nowa_gra_clicked();             //rozpoczyna nowa gre i odpowiednio inicjalizuje plansze
    void on_wskazowka_clicked();            //uzupelnia jedno z pustych pol na planszy wedlug przykladowego rozwiazania
    void on_pokaz_rozwiazanie_clicked();    //wyswietla przykladowe rozwiazanie planszy
    void on_wyczysc_clicked();              //czysci plansze ze wszystkich uzupelnionych liczb
    void on_sprawdz_clicked();              //sprawdza poprawnosc wprowadzonego rozwiazania

private:
    Ui::MainWindow *ui;     //wskaznik do glownego okna dialogowego
    Myboard board;          //plansza do gry
    QGraphicsScene *scene;  //wskaznik do obiektu gdzie wyswietlana jest plansza
    QTimer *timer;          //wskaznik do zegara
    QTime *timeRecord;      //przechowuje obecny czas gry

    void timerstart();                          //odpowiada za obsluge stopera
    void starterScreen();                       //inicjalizuje graficzna scene obrazem poczatkowym
    void paint_board(Mycell kakuro[][10]);      //rysuje plansze na ekranie
    void timeupdate();                          //zmienia czas widoczny na stoperze
};
#endif // MAINWINDOW_H



