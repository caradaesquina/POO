#include <iostream>
#include "polinomio.h"
using namespace std;
int main(){
    Polinomio p0(2);
    cin >> p0;
    cout << "Inicial: " << p0 << endl;
    cout << "A funcao " <<  p0 << " para (x = 2) eh " << p0.valorPonto( 2 ) << endl;
    Polinomio derivada = p0.derivada();
    cout << endl << "A derivada eh " << derivada << endl;
    int n_inicial = 20, iteracoes = 100;
    cout << "Raiz aproximada " << p0.acharRaiz(n_inicial, iteracoes) << endl;
}
