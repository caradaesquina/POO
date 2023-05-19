#include "formas.h"
#include <iostream>

using namespace std;

int main(){
    Ponto r(1, 2);
    cout << "Ponto = " << r << endl;
    Circulo c(3, 4, 5);
    cout << "Circulo = " << c << endl;
    Cilindro cl(7, 8, 9, 10);
    cout << "Cilindro = " << cl << endl;
    cout << endl;
    cout << "Area circulo = "    << c.getArea() << endl;
    cout << "Volume cilindro = " << cl.getArea() << endl;
    Ponto p;
    cout << endl << "Digite x e y para o centro do ponto: ";
    cin >> p;
    cout << "Digitado foi " << p << endl;
    Circulo circ;
    cout << endl << "Digite x e y do centro e o raio: ";
    cin >> circ;
    cout << "Digitado foi " << circ << endl;
    Cilindro cilin;
    cout << endl << "Digite x e y do centro, raio e altura: ";
    cin >> cilin;
    cout << "Digitado foi " << cilin << endl;
    return 0;
}