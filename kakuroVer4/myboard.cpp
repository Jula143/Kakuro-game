#include "myboard.h"

Myboard::Myboard()
{
    size = 0;
    selectedColumn=1;
    selectedRow=1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
                kakuro[i][j] = Mycell();
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
                solved[i][j] = Mycell();
         }
    }

    availableClues=0;

}


QString Myboard::toString(QTime* timerecord){
    QString board;
    board.append(QString::number(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board.append(' ');

            if(kakuro[i][j].getType()==SUM)
                board.append('/'+QString::number(kakuro[i][j].getSum(RIGHT))+'/'+QString::number(kakuro[i][j].getSum(DOWN)));
            else if(kakuro[i][j].getType()==BLANK)
                board.append('-');
            else if(kakuro[i][j].getType()==NORMAL)
                board.append(QString::number(kakuro[i][j].getValue()));

        }
    }
    board.append(' ');
    board.append('S');
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board.append(' ');
            if(solved[i][j].getType()==SUM)
                board.append('/'+QString::number(solved[i][j].getSum(RIGHT))+'/'+QString::number(solved[i][j].getSum(DOWN)));
            else if(solved[i][j].getType()==BLANK)
                board.append('-');
            else if(solved[i][j].getType()==NORMAL)
                board.append(QString::number(solved[i][j].getValue()));

        }
    }
    board.append(' ');
    board.append('T');
    board.append(timerecord->toString("hh:mm:ss"));
    return board;
}

int getNumberFromString(QString & s) {
    int x;
    if (s.size()==0 || s[0] < '0' || s[0] > '9')
        return 0;

    x = s[0].digitValue();
    s.remove(0, 1);
    while (s.size()!=0 && s[0].digitValue() != -1) {
        x *= 10;
        x += s[0].digitValue();
        s.remove(0, 1);
    }
    return x;
}


void removeSpaces(QString & s) {
    while (s.size()!=0 && s[0] == ' ') {
        s.remove(0, 1);
    }
}


bool Myboard::loadFromString(QString s, QTime& t)
{

    size = getNumberFromString(s);
    removeSpaces(s);

    for (int i = 0; i < size; i++) {
          for (int j = 0; j < size; j++) {
                kakuro[i][j] = Mycell();
          }
    }
    for (int i = 0; i < size; i++) {
          for (int j = 0; j < size; j++) {
                solved[i][j] = Mycell();
        }
   }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(s[0]>='0' && s[0]<='9'){
                int value = getNumberFromString(s);
                kakuro[i][j].setType(NORMAL);
                kakuro[i][j].setValue(value);
            }
            else if(s[0] == '-'){
                kakuro[i][j].setType(BLANK);
                s.remove(0, 1);
            }
            else if(s[0] == '/'){
                s.remove(0, 1);
                kakuro[i][j].setType(SUM);
                int sumRight=getNumberFromString(s);

                s.remove(0, 1);
                int sumDown=getNumberFromString(s);

                kakuro[i][j].setSums(sumRight,sumDown);

            }
            else
                return false;

            removeSpaces(s);
        }

    }
    if(s[0] == 'S'){
        s.remove(0, 1);
        removeSpaces(s);
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(s[0]>='0' && s[0]<='9'){
                    int value = getNumberFromString(s);
                    solved[i][j].setType(NORMAL);
                    solved[i][j].setValue(value);
                 }
                else if(s[0] == '-'){
                    solved[i][j].setType(BLANK);
                    s.remove(0, 1);
                }
                else if(s[0] == '/'){
                    s.remove(0, 1);
                    solved[i][j].setType(SUM);
                    int s1=getNumberFromString(s);

                    s.remove(0, 1);
                    int s2=getNumberFromString(s);
                    solved[i][j].setSums(s1,s2);

                }
                else
                    return false;
                removeSpaces(s);
            }
        }
    }
    else
        return false;

    int h=0,m=0,sec=0;
    if(s[0] == 'T'){
        s.remove(0, 1);
        removeSpaces(s);
        h=getNumberFromString(s);
        s.remove(0, 1);
        m=getNumberFromString(s);
        s.remove(0, 1);
        sec=getNumberFromString(s);
    }
    else
        return false;

    t = QTime(h,m,0,0);
    t = t.addSecs(sec);
    return true;

}


void Myboard::generator(){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            kakuro[i][j] = Mycell();

        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
             solved[i][j] = Mycell();
        }
    }


    for (int i = 0; i < size; i++) {
        kakuro[0][i].setType(SUM);
        kakuro[i][0].setType(SUM);
    }



    for (int i = 1; i < size; i++) {
        QSet<int> rowSet = QSet<int>();
        for (int j = 1; j < size; j++) {
            int number = rand()%9+1;
            if (!rowSet.contains(number) && !checkColumn(i, j, number)) {
                kakuro[i][j].setValue(number);
                kakuro[i][j].setType(NORMAL);
                rowSet.insert(number);
            }
            else {
                kakuro[i][j].setType(SUM);
                rowSet.clear();
            }
        }
     }


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(kakuro[i][j].getType()==SUM) {
                int row = sumInRow(i, j);
                int column = sumInColumn(i, j);
                kakuro[i][j].setSums(row,column);

            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
               solved[i][j] = kakuro[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(kakuro[i][j].getSum(RIGHT)==0 && kakuro[i][j].getSum(DOWN)==0 && kakuro[i][j].getType()==SUM){
                 kakuro[i][j].setType(BLANK);
                 solved[i][j].setType(BLANK);
            }

            if (kakuro[i][j].getType()==NORMAL) {
                kakuro[i][j].setValue(0);
            }
        }
    }
}


bool Myboard::checkColumn(int row, int col, int num) {
    QSet<int> set = QSet<int>();
    set.insert(num);
    for (int i = row - 1; i > 0; i--) {
        if(kakuro[i][col].getType()!=NORMAL){
            break;
        }
        if (!set.contains(kakuro[i][col].getValue())) {
            set.insert(kakuro[i][col].getValue());
        }
        else
            return true;

    }
    return false;

}

int Myboard::sumInRow(int row, int col) {
   int sum = 0;
   for (int j = col + 1; j < size; j++) {
       if (kakuro[row][j].getType()==NORMAL) {
           sum += kakuro[row][j].getValue();
       }
       else {
           break;
       }
   }
   return sum;
}

int Myboard::sumInColumn(int row, int col) {
    int sum = 0;
    for (int i = row + 1; i < size; i++) {
        if (kakuro[i][col].getType()==NORMAL) {
            sum += kakuro[i][col].getValue();
        }
        else {
            break;
        }
    }
    return sum;
 }

bool Myboard::checkSolution(Mycell kakuro[][10]){
    for(int i =0; i<size; i++){
        QSet<int> rowSet = QSet<int>();
        for(int j =0; j<size; j++){
            if(kakuro[i][j].getType()==NORMAL){ //sprawdzenie czy liczby nie powtarzaja sie w rzedzie i kolumnie
                                                // oraz czy wszystkie komorki sa wypelnione
                if(kakuro[i][j].getValue()==0)
                    return false;
                else if(rowSet.contains(kakuro[i][j].getValue()) || checkColumn(i-1, j, kakuro[i][j].getValue())){
                    return false;
                }
                rowSet.insert(kakuro[i][j].getValue());
                continue;
            }
            else
                rowSet.clear();

            if(kakuro[i][j].getType()==SUM){ //sprawdzenie poprawnosci sum
                if(sumInRow(i,j)==kakuro[i][j].getSum(RIGHT) && sumInColumn(i,j)==kakuro[i][j].getSum(DOWN))
                      continue;

                return false;
            }
        }
    }
    return true;
}
