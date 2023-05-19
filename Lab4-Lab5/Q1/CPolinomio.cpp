#include "CPolinomio.h"
#include <iostream>

using namespace std;

CPolinomio::CPolinomio(){
    n = 2;
    values = new double[n];
    values[0] = 1;
    values[0] = 1;
}

CPolinomio::CPolinomio(int degree){
    values = new double[degree+1];
    for (int i = 0; i < degree+1; i++){
        values[i] = 1;
    }
}

CPolinomio::CPolinomio(const CPolinomio& po){
    n = po.n;
    values = new double[po.n];
    for (int i = 0; i < po.n; i++){
        values[i] = po.values[i];
    }
}

CPolinomio::~CPolinomio(){
    delete[] values;
}

CPolinomio CPolinomio::operator=(const CPolinomio& po){
    delete [] values; // limpar o ponteiro antigo
    n = po.n;
    values = new double[po.n]; // alocar para o novo tamanho
    for(int i = 0; i < po.n; i++){
        values[i] = po.values[i];  //copiar valores
    }
    return *this;
}

CPolinomio CPolinomio::operator + (CPolinomio po){
    CPolinomio aux(max(po.n,n)-1);
    int i;
    for(i = 0; i < min(po.n, n); i++){
        aux.values[i] = po.values[i] + values[i];
    }
    if(po.n > n){
        for(int j = i; j < po.n; j++){
            aux.values[j] = po.values[j];
        }
    }
    else{
        for(int j = i; j < n; j++){
            aux.values[j] = values[j];
        }
    }
    return aux;
}

CPolinomio CPolinomio::operator - (CPolinomio po){
    CPolinomio aux(max(po.n, n)-1);
    int i;
    for(i = 0; i < min(po.n, n); i++)
        aux.values[i] = values[i] - po.values[i];
    if(po.n > n){
        for(int j = i; j < po.n; j++){
            aux.values[j] =  po.values[j];
            }
        }
    else{
        for(int j = i; j < n; j++){
            aux.values[j] = values[j];
        }
    }

    return aux;
}

double& CPolinomio::operator[](int pos){
    if(pos >= 0 && pos < n) {
        return values[pos];
    }
    else{
        return values[0];
    }
}

ostream& operator << (ostream& output, CPolinomio& po){
    for(int i = 0; i < po.n; i++){
        if(i != po.n-1){
            output  << po[i] << "x^" << i << " + ";
        } 
        else{
            output << po[i] << "x^" << i << " = 0";
        } 
    }
    return output;
}

istream& operator >>(istream& input, CPolinomio& po){
    cout << "Polinomio: C0 + C1x1 + C2x2 + ... + Cnxn = 0" << endl;
    for(int i = 0; i < po.n; i++){
        cout << "Digite o valor do Coeficiente" << i << ": ";
        input >> po[i];
    }
    return input;
}

