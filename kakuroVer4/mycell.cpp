#include "mycell.h"

Mycell::Mycell()
{

    type = NORMAL;
    value=0;
    sumsValue[RIGHT]=0;
    sumsValue[DOWN]=0;
    clue=0;

}


void Mycell::setValue(int v)
{
    if(v>=0 && v<10)
        value = v;
    else
        return;
}

void Mycell::setSums(int s1, int s2){
    sumsValue[RIGHT]=s1;
    sumsValue[DOWN]=s2;
}

void Mycell::setType(Type t){
    type=t;
}

int Mycell::getSum(Direction dir){
    return sumsValue[dir];
}

int Mycell::getValue(){
    return value;
}

Type Mycell::getType(){
    return type;
}






