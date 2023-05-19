#include "formas.h"
#include <iostream>
#include <cmath>

using namespace std;

void dprint(){
    cout << "DEPURANDO" << endl;
}

Ponto::Ponto(){Ponto(0,0);}
Ponto::Ponto(float xx, float yy){x = xx; y = yy;}
Ponto::~Ponto(){}

void Ponto::read(){cin >> x >> y;}
void Ponto::print() const {cout << "COORDENADAS: (" << x << ", " << y << ")" << endl; }

float Ponto::getX(){return x;}
float Ponto::getY(){return y;}

Circulo::Circulo(){Circulo(0,0,1);}
Circulo::Circulo(float xx, float yy, float rad){x = xx; y = yy; raio = rad;}
Circulo::~Circulo(){};

void Circulo::read(){cin >> x >> y >> raio;}
void Circulo::print() const {Ponto::print(); ;cout << "RAIO: " << raio << endl;}

float Circulo::getRaio(){return raio;}
float Circulo::getArea(){return M_PI*raio*raio;}

Cilindro::Cilindro(){Cilindro(0,0,1,1);}
Cilindro::Cilindro(float xx, float yy, float rad, float alt){x = xx; y = yy; raio = rad;altura = alt;}
Cilindro::~Cilindro(){};

void Cilindro::read(){cin >> x >> y >> raio >> altura;}
void Cilindro::print() const {Circulo::print(); cout << "ALTURA: " << altura << endl;}

float Cilindro::getAltura(){return altura;}
float Cilindro::getArea(){return 2*M_PI*raio*(altura+raio);}
float Cilindro::getVolume(){return M_PI*raio*raio*altura;}

istream& operator >> (istream& i, Ponto& p){
    p.read();
    return i;
}
ostream& operator << (ostream& o, const Ponto& p){
    p.print();
    return o;
}

istream& operator >> (istream& i, Circulo& c){
    c.read();
    return i;
}
ostream& operator << (ostream& o, const Circulo& c){
    c.print();
    return o;
}

istream& operator >> (istream& i, Cilindro& c){
    c.read();
    return i;
}
ostream& operator << (ostream& o, const Cilindro& c){
    c.print();
    return o;
}


