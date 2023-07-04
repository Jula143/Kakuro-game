#ifndef MYBOARD_H
#define MYBOARD_H
#include "mycell.h"
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QSet>
#include <QKeyEvent>
#include <QTextStream>
#include <QTime>




class Myboard {

public:
    Myboard();                                      //kontruktor bezargumentowy
    int size;                                       //obecny rozmiar planszy
    int selectedRow;                                //rzad obecnie zaznaczonej komorki planszy
    int selectedColumn;                             //kolumna obecnie zaznaczonej komorki planszy
    int availableClues;                             //liczba obecnie dostepnych wskazowek
    Mycell kakuro[10][10];                          //plansza do gry
    Mycell solved[10][10];                          //plansza z rozwiazaniem
    void generator();                               //generator planszy

    QString toString(QTime* timerecord);                //konwersja planszy na typ string
    bool loadFromString(QString s, QTime& t);           //zaladowanie planszy z typu string
    bool checkSolution(Mycell p[][10]);                 //sprawdzenie poprawnosci wprowadzonego rozwiazania
private:
    bool checkColumn(int row, int col, int num);        //sprawdzenie czy liczba num nie powtarza sie w kolumnie
    int sumInRow(int row, int col);                     //obliczenie sumy w prawo od danej komorki
    int sumInColumn(int row, int col);                  //obliczenie sumy w dol od danej komorki

};

#endif // MYBOARD_H


