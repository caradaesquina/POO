#include "CData.h"
#include <iostream>

using namespace std;

const int CData::numDiasBisextos[13] =  {0,31,28,31,30,31,30,31,31,30,31,30,31};
const int CData::numDias[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

CData::CData(){
    dia = 1; mes = 1; ano = 2023;
}
CData::CData(int d, int m, int a){
    setData(d,m,a);
}
CData::CData(const CData& data){
    dia = data.dia;
    mes = data.mes;
    ano = data.ano;
}
CData::~CData(){}

bool CData::checkBisexto(int a){
    if ((a%4==0)){
        if (a % 100 == 0){
            if (a%400 != 0){
                return true;
            }else {return false;}
        }
        return true;
    }else {return false;}
}

void CData::incrementDay(){
    if (checkBisexto(ano)){
        if (dia < numDiasBisextos[mes]){
            dia++;
            return;
        }
    }else{
        if (dia < numDias[mes]){
            dia++;
            return;
        }
    }
    dia = 1;
    if (mes < 12){
        mes++;
    }else{
        mes = 1;
        ano++;
    };
}

void CData::setData(int d, int m, int a){
    if ((a<1800)||(a>2200)){
        a = 2023;
    }
    if ((m < 1)||(m > 12)){
        m = 1;
    }
    if (d < 1){
        d = 1;
    }
    if (checkBisexto(a)){
        if (d > numDiasBisextos[m]){
            d = 1;
        }
    }else{
        if (d > numDias[m]){
            d = 1;
        }
    }
}

CData& CData::operator++(){
    incrementDay();
    return *this;
}

CData CData::operator++(int value){
    CData aux(*this);
    incrementDay();
    return aux;
}

CData& CData::operator+=(unsigned int value){
    for(int i =0; i < value; i++){
        incrementDay();
    }
    return *this;
}

ostream& operator << (ostream& out, CData& data){
    static string monthNames[13]{"", "Janeiro", "Fevereiro",
    "Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
    "Setembro", "Outubro", "Novembro", "Dezembro"};
    out << data.dia << "/" << data.mes << "/" << data.ano;
    return out;
}