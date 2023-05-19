#include "polinomio.h"
#include <iostream>
#include <cmath>

using namespace std;

Polinomio::Polinomio(){
    n = 2;
    valores = new double[n];
    valores[0] = 1;
    valores[1] = 1;
}
Polinomio::Polinomio(int _n){
    n = _n + 1;
    valores = new double[n];
    for(int i = 0; i < n; i++)
    valores[i] = 1;
}

Polinomio::Polinomio(const Polinomio& p){
    n = p.n;
    valores = new double[n];
    for(int i = 0; i < p.n; i++){
        valores[i] = p.valores[i];
    }
} 

Polinomio::~Polinomio(){delete[] valores;}

Polinomio Polinomio::operator=(const Polinomio& p){
    delete [] valores;
    n = p.n;
    valores = new double[n]; 
    for(int i = 0; i < p.n; i++){
        valores[i] = p.valores[i]; 
    }
}
Polinomio Polinomio::operator+(Polinomio _pol){
    Polinomio temp(max(_pol.n, n)-1);
    int i;
    for(i = 0; i < min(_pol.n, n); i++){
        temp[i] = _pol.valores[i] + valores[i];
    }
    if(_pol.n > n){
        for(int j = i; j < _pol.n; j++){
            temp[i] = _pol.valores[i];
        }
    }
    else{
        for(int j = i; j < n; j++){
                temp[i] = valores[i];
        }
    }
    return temp;
} 
Polinomio Polinomio::operator-(Polinomio _pol){
    Polinomio temp(max(_pol.n, n)-1);
    int i;
    for(i = 0; i < min(_pol.n, n); i++){
        temp[i] = valores[i] - _pol.valores[i];
    }
    if(_pol.n > n){
        for(int j = i; j < _pol.n; j++){
            temp[i] = - _pol.valores[i];
        }
    }
    else{
        for(int j = i; j < n; j++){
            temp[i] = valores[i];
        }
    }
    return temp;
}

istream& operator >> (istream& input, Polinomio& _pol){
    cout << "Polinomio: C0 + C1x^1 + C2x^2 + ... + Cnx^n = 0" << endl;
    for(int i = 0; i < _pol.n; i++){
        cout << "Digite o valor de C" << i << ": ";
        input >> _pol[i];
    }
    return input;
} 
ostream& operator << (ostream& output, Polinomio& _pol){
    for(int i = 0; i < _pol.n; i++){
        if(i != _pol.n-1) {
            output  << _pol[i] << "x^" << i << " + ";
        }
        else{
            output << _pol[i] << "x^" << i << " = 0";
        } 
    }
return output;

}
double& Polinomio::operator[](int pos){
    if(pos >= 0 && pos < n){
        return valores[pos];
    }
    else{
        return valores[0];
    }
}

Polinomio Polinomio::derivada(){
    Polinomio resultado(n-2);
    for (int i = 1; i < n; i++){
        resultado.valores[i-1] = i *valores[i];
    }
    return resultado;
}

double Polinomio::valorPonto(double x){
    double resp = 0;
    for(int i = 0; i < n ; i++){
        resp += valores[i] * pow(x,i);
    }
    return resp;
} 

float Polinomio::acharRaiz(int num_inicial, int iteracoes){
    Polinomio inicial = (*this);
    Polinomio derivada = inicial.derivada();
    double raiz;
    for (int i = 0; i < iteracoes; i++){
        raiz = num_inicial - (inicial.valorPonto(num_inicial)/derivada.valorPonto(num_inicial));
        num_inicial = raiz;
    }
    return raiz;
}