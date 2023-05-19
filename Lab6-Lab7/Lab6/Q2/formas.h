#ifndef FORMAS_H
#define FORMAS_H

#include <iostream>

using namespace std;

class Ponto{
    protected:
        float x,y;
    public:
        Ponto();
        Ponto(float,float);
        ~Ponto();
        void read();
        void print() const;
        float getX();
        float getY();
        friend istream& operator >> (istream&, Ponto&); 
        friend ostream& operator << (ostream &, const Ponto&);   
};

class Circulo : public Ponto{
    protected:
        float raio;
    public:
        Circulo();
        Circulo(float,float,float);
        ~Circulo();
        void read();
        void print() const;
        float getRaio();
        float getArea();
        friend istream& operator >> (istream&,  Circulo&); 
        friend ostream& operator << (ostream&, const Circulo&); 
};

class Cilindro : public Circulo{
    protected:
        float altura;
    public:
        Cilindro();
        Cilindro(float,float,float,float);
        ~Cilindro();
        void read();
        void print() const;
        float getAltura();
        float getArea();
        float getVolume();
        friend istream& operator >> (istream&,  Cilindro&); 
        friend ostream& operator << (ostream &, const Cilindro&); 
};


#endif