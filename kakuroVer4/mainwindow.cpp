#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timerstart();
    timer->blockSignals(true);

    starterScreen();
}

void MainWindow::starterScreen(){
    QPixmap pixmap(":/zasoby/starter2.png");
    scene = new QGraphicsScene(this);
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}

void MainWindow::keyPressEvent(QKeyEvent* event){
    int skip = 1;  //ilosc komorek przez ktore przechodzimy

    switch (event->key()) {
    case Qt::Key_1:
    case Qt::Key_2:
    case Qt::Key_3:
    case Qt::Key_4:
    case Qt::Key_5:
    case Qt::Key_6:
    case Qt::Key_7:
    case Qt::Key_8:
    case Qt::Key_9:
        board.kakuro[board.selectedRow][board.selectedColumn].setValue(event->key() - Qt::Key_0);
        break;

    case Qt::Key_W:
        while(board.selectedRow-skip>0 && board.kakuro[board.selectedRow-skip][board.selectedColumn].getType()!=NORMAL)
            skip++;
        if(board.selectedRow-skip>0)
            board.selectedRow-=skip;
        break;
    case Qt::Key_S:
        while(board.selectedRow+skip<board.size && board.kakuro[board.selectedRow+skip][board.selectedColumn].getType()!=NORMAL)
            skip++;
        if(board.selectedRow+skip<board.size)
            board.selectedRow+=skip;
        break;
    case Qt::Key_A:       
        while(board.selectedColumn-skip>0 && board.kakuro[board.selectedRow][board.selectedColumn-skip].getType()!=NORMAL)
            skip++;
        if(board.selectedColumn-skip>0)
            board.selectedColumn-=skip;
        break;
    case Qt::Key_D:
        while(board.selectedColumn+skip<board.size && board.kakuro[board.selectedRow][board.selectedColumn+skip].getType()!=NORMAL)
            skip++;
        if(board.selectedColumn+skip<board.size)
            board.selectedColumn+=skip;
        break;
    }
    paint_board(board.kakuro);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerstart()
{
    srand(time(NULL));
    timer = new QTimer(this);
    timeRecord=new QTime(0,0,0,0);
    ui->Timer->setDigitCount(8);
    ui->Timer->display(timeRecord->toString("hh:mm:ss"));

    connect(timer,&QTimer::timeout,this,&MainWindow::timeupdate);
    timer->start(1000);

}

void MainWindow::timeupdate()
{
    *timeRecord=timeRecord->addSecs(1);
    ui->Timer->display(timeRecord->toString("hh:mm:ss"));
}

void MainWindow::paint_board(Mycell kakuro[][10]){

    if(board.size==0)
        return;

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(Qt::black);

    QFont font;
    int x=100,y=100;
    for(int i=0;i<board.size;i++) {
       for(int j=0;j<board.size;j++) {
        QRect r(x,y,50,50);
        font.setPointSize(10);
        if(kakuro[i][j].getType()==SUM){
            QPen pen(Qt::white,1.3);
            QBrush brush(Qt::black);
            scene->addRect(r,pen,brush);
            QLineF line(x,y,x+50,y+50);
            scene->addLine(line,pen);

            if(kakuro[i][j].getSum(RIGHT)!=0){
                QString tekst = QString::number(kakuro[i][j].getSum(RIGHT));
                QPoint pos(100+j*50+25,100+i*50+2);
                QGraphicsTextItem *t = scene->addText(tekst);

                t->setFont(font);
                t->setDefaultTextColor(Qt::white);
                t->setPos(pos);
            }
            if(kakuro[i][j].getSum(DOWN)!=0){
                QString tekst = QString::number(kakuro[i][j].getSum(DOWN));
                QPoint pos(100+j*50+5,100+i*50+20);
                QGraphicsTextItem *t = scene->addText(tekst);

                t->setFont(font);
                t->setDefaultTextColor(Qt::white);
                t->setPos(pos);
            }
        }
        else if(kakuro[i][j].getType()==NORMAL){
                if(i==board.selectedRow && j==board.selectedColumn){
                    QPen pen(Qt::blue,4.5);
                    QBrush brush(Qt::white);
                    scene->addRect(r,pen,brush);
                }
                else{
                    QPen pen(Qt::black);
                    QBrush brush(Qt::white);
                    scene->addRect(r,pen,brush);
                }
                if(kakuro[i][j].getValue()!=0){
                    QString tekst = QString::number(kakuro[i][j].getValue());
                    QPoint pos(100+j*50+50/3,100+i*50+50/5);
                    QGraphicsTextItem *t = scene->addText(tekst);

                    t->setFont(font);
                    t->setPos(pos);
                }

                if(kakuro[i][j].clue!=0){
                    QString tekst1 = QString::number(kakuro[i][j].clue);
                    QPoint pos(100+j*50+32,100+i*50+1);
                    QGraphicsTextItem *t = scene->addText(tekst1);

                    t->setFont(font);
                    t->setDefaultTextColor(Qt::darkGreen);
                    t->setPos(pos);
                }
        }
        else {
            scene->addRect(r);
        }

        x+=50; } x=100; y+=50; }



    QString clues = "Ilość dostępnych wskazówek: " + QString::number(board.availableClues);
    QPoint pos(x-20,y+30);
    QGraphicsTextItem *c = scene->addText(clues);
    c->setFont(font);
    c->setDefaultTextColor(Qt::white);
    c->setPos(pos);
}


void MainWindow::on_nowa_gra_clicked()
{

    QInputDialog inputDialog;
    bool ok;
    inputDialog.setWindowFlags(inputDialog.windowFlags() & (~Qt::WindowContextHelpButtonHint));
    board.size = inputDialog.getInt(this, tr("Wybierz"),tr("Wielkość planszy:"), 0, 3, 10, 1, &ok,inputDialog.windowFlags());
    if(ok){
        board.generator();
        board.selectedColumn=1;
        board.selectedRow=1;
        board.availableClues=board.size-2;
        paint_board(board.kakuro);
        timeRecord=new QTime(0,0,0,0);
    }


    if(board.size!=0)
        timer->blockSignals(false);

}



void MainWindow::on_pokaz_rozwiazanie_clicked()
{
    if(board.size==0)
        return;
    paint_board(board.solved);

}


void MainWindow::on_wskazowka_clicked()
{
    if(board.availableClues<=0){
        QMessageBox::warning(this, tr("Kakuro"), tr("Brak dostępnych wskazówek."));
        return;
    }
    bool possibleCell=false;
    for(int i=0;i<board.size;i++) {
        for(int j=0;j<board.size;j++) {
            if(board.kakuro[i][j].getValue()!=board.solved[i][j].getValue())
                possibleCell=true;
        }
     }

    do{
        int i = rand()%board.size;
        int j = rand()%board.size;
        if(board.kakuro[i][j].getType()==NORMAL && board.kakuro[i][j].getValue()!=board.solved[i][j].getValue() && board.kakuro[i][j].clue==0){
            board.kakuro[i][j].clue=board.solved[i][j].getValue();
            possibleCell=false;
            board.availableClues--;
        }
    }while(possibleCell);

    paint_board(board.kakuro);
}


void MainWindow::on_wyczysc_clicked()
{
    if(board.size==0)
        return;

    for(int i=0;i<board.size;i++) {
        for(int j=0;j<board.size;j++) {
            if(board.kakuro[i][j].getType()==NORMAL)
                board.kakuro[i][j].setValue(0);
        }
     }
    paint_board(board.kakuro);
}

void MainWindow::on_actionZapisz_gre_triggered()
{
    if(board.size==0){
        QMessageBox::warning(this, tr("Kakuro"),
                             tr("Aby zapisać musisz najpierw rozpocząć grę!"));
        return;
    }
    timer->blockSignals(true); //zatrzymaj stoper

    QMessageBox::StandardButton answer = QMessageBox::warning(this, tr("Kakuro"),
                               tr("Czy chcesz zapisać grę?"), QMessageBox::Yes | QMessageBox::No);

    if(answer==QMessageBox::Yes){
        QFileDialog dialog(this);
        dialog.setWindowModality(Qt::WindowModal);
        dialog.setAcceptMode(QFileDialog::AcceptSave);
        dialog.setDefaultSuffix((".txt"));

        QStringList filters;
        filters  << "Plik tekstowy (*.txt)";
        dialog.setNameFilters(filters);

        QStringList files;
        if (dialog.exec())
              files = dialog.selectedFiles();
        else
        {
            timer->blockSignals(false); //wznow stoper
            return;
        }

        QString fileName=files.at(0);
        QFile file(fileName);

        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, tr("Kakuro"), tr("Wystąpił błąd dla pliku %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        }

        QTextStream out(&file);
        QString saved = board.toString(timeRecord);
        out << saved;

    }

    timer->blockSignals(false); //wznow stoper

}
void MainWindow::on_actionWczytaj_gre_triggered()
{

    QString fileName = QFileDialog::getOpenFileName(this,tr("Wczytaj grę"),"", "Pliki tekstowe (*.txt)"); //aby nie wszystkie pliki byly wyswietlane
    if (!fileName.isEmpty()){
        QFile file(fileName);
        if (!file.open(QFile::ReadOnly | QFile::Text)) {
            QMessageBox::warning(this, tr("Kakuro"),tr("Błąd odczytu pliku %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file.errorString()));
            return;
        }

        QTextStream in(&file);
        QString saved;
        saved.append(in.readAll());

        if(!board.loadFromString(saved,*timeRecord)){
            QMessageBox::warning(this, tr("Kakuro"),
                               tr("Błąd odczytu pliku %1. Niewłaściwy zapis pliku.")
                               .arg(fileName));
          return;
      }

      board.selectedColumn=1;
      board.selectedRow=1;
      board.availableClues=board.size-2;
      paint_board(board.kakuro);

      timer->blockSignals(false);

   }

}
void MainWindow::on_actionZakoncz_triggered()
{
    if(board.size!=0)
        on_actionZapisz_gre_triggered();
    qApp->quit();

}

void MainWindow::on_sprawdz_clicked()
{
    if(board.size==0)
        return;

   if(board.checkSolution(board.kakuro)){
        scene = new QGraphicsScene(this);
        QPixmap pixmap(":/zasoby/end3.png");
        QFont font;
        font.setPointSize(17);

        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);

        QGraphicsTextItem *timeStr = scene->addText(timeRecord->toString("hh:mm:ss"));
        timeStr->setDefaultTextColor(Qt::white);
        timeStr->setPos(250, 425);
        timeStr->setFont(font);

        ui->graphicsView->setScene(scene);
        timer->blockSignals(true);

        board.size=0;

   }
   else
       QMessageBox::warning(this, tr("Kakuro"), tr("Twoje rozwiązanie nie jest poprawne. Spróbuj jeszcze raz."));

}


void MainWindow::on_actionZasady_gry_triggered()
{
    timer->blockSignals(true);
    GameRules window;
    window.setModal(true);
    window.exec();
    if(!window.isVisible() && board.size!=0)
        timer->blockSignals(false);
}


void MainWindow::on_actionInterfejs_triggered()
{
    timer->blockSignals(true);
    Interface window;
    window.setModal(true);
    window.exec();
    if(!window.isVisible() && board.size!=0)
        timer->blockSignals(false);
}

