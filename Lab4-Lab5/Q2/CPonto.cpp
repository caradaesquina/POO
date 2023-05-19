#include "CPonto.h"
#include <iostream>

CPonto::CPonto(){
    x = 1;
    y = 1;
}
CPonto::CPonto(int xx, int yy){
    x = xx;
    y = yy;
}
CPonto::CPonto(const CPonto& Ponto){
    x = Ponto.x;
    y = Ponto.y;
}
CPonto::~CPonto(){}

CPonto& CPonto::operator++(){
    x++;
    y++;
    return *this;
}
CPonto CPonto::operator++(int value){
    CPonto temp = *this;
    ++(*this);
    return temp;
}
CPonto& CPonto::operator--(){
    x--;
    y--;
    return *this;
}
CPonto CPonto::operator--(int value){
    CPonto temp = *this;
    --(*this);
    return temp;
}
ostream& operator << (ostream& out, CPonto& Ponto){
    cout << "(" << Ponto.x << ", " << Ponto.y << ")";
}
