#ifndef GAMERULES_H
#define GAMERULES_H

#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class GameRules;
}

class GameRules : public QDialog
{
    Q_OBJECT

public:
    explicit GameRules(QWidget *parent = nullptr);
    ~GameRules();

private slots:
    void on_previous_picture_clicked(); //funkcja wykonywana po nacisnieciu przycisku znajdujacego sie po lewej stronie zdjec planszy
    void on_next_picture_clicked();     //funkcja wykonywana po nacisnieciu przycisku znajdujacego sie po prawej stronie zdjec planszy

private:
    Ui::GameRules *ui;                  //wskaznik do okna dialogowego
    QGraphicsScene *scene;              //scena wyswietlajaca zdjecia planszy podczas przykladowej gry
    QStringList pictures;               //lista  zwierajaca sciezki do zdjec przykladowej gry
    int currentPicture;                 //numer zdjecia ktore obecnie jest wyswietlane w oknie
    void setScene();                    //funkcja odswiezajaca widoczne zdjecie
    void createPictureList();           //funkcja tworzaca liste zdjec planszy podczas przykladowej gry
};

#endif // GAMERULES_H
