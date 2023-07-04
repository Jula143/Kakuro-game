#ifndef MYCELL_H
#define MYCELL_H



enum Type { NORMAL = 0, SUM, BLANK}; //enum okreslajacy typ komorki
enum Direction {RIGHT = 0, DOWN}; //enum okreslajacy kierunek w ktorym komorki sa zliczane do sumy

class Mycell
{
public:
    Mycell();
    void setValue(int s); //ustawia pole value komórki na wartość podaną w argumencie metody
    void setSums(int s1, int s2); //ustawia sumValue komórki na wartości podane w argumentach metody
    void setType(Type t); //ustawia typ komorki na podany w argumencie
    int getSum(Direction dir); //zwraca sume komorek w prawo lub w dol od komorki w zaleznosci od argumentu
    int getValue(); //zwraca wartosc komorki
    Type getType(); //zwraca typ komorki
    int clue; //wskazowka
private:
    Type type; //typ komórki (0=normalna, 1=suma, 2=pusta)
    int value; //wartosc przechowywana przez komorke
    int sumsValue[2]; //wartości sum komórki w dół i w lewo aż do następnej sumy
};



#endif // MYCELL_H
