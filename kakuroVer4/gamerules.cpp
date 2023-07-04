#include "gamerules.h"
#include "ui_gamerules.h"

GameRules::GameRules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameRules)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    currentPicture=0;
    createPictureList();

    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setScene();
}

GameRules::~GameRules()
{
    delete ui;
}

void GameRules::createPictureList()
{
    pictures.append(":/zasoby/gra/gra_1.png");
    pictures.append(":/zasoby/gra/gra_2.png");
    pictures.append(":/zasoby/gra/gra_3.png");
    pictures.append(":/zasoby/gra/gra_4.png");
    pictures.append(":/zasoby/gra/gra_5.png");
    pictures.append(":/zasoby/gra/gra_6.png");
    pictures.append(":/zasoby/gra/gra_7.png");
    pictures.append(":/zasoby/gra/gra_8.png");
    pictures.append(":/zasoby/gra/gra_9.png");
    pictures.append(":/zasoby/gra/gra_10.png");
}

void GameRules::on_previous_picture_clicked()
{
    if(currentPicture>0)
        currentPicture--;

    setScene();
}


void GameRules::on_next_picture_clicked()
{
    if(currentPicture<pictures.size()-1)
        currentPicture++;

    setScene();
}

void GameRules::setScene()
{
    QPixmap pixmap(pictures.at(currentPicture));
    scene = new QGraphicsScene(this);
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
}


