#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;


int Complexo::n = 0;

Complexo Complexo::somar(Complexo _complexo)
{
	Complexo temp(getReal() + _complexo.getReal(), getImaginario() + _complexo.getImaginario());
	return temp;
}

Complexo Complexo::subtrair(Complexo _complexo)
{
	Complexo temp(getReal() - _complexo.getReal(), getImaginario() - _complexo.getImaginario());
	cout << "\n" << getObjetos() << "\n";
	return temp;
}

Complexo Complexo::multiplicar(Complexo _complexo)
{
	Complexo temp(getReal()*_complexo.getReal() - getImaginario()*_complexo.getImaginario(), getReal()*_complexo.getImaginario() + getImaginario()*_complexo.getReal());
	return temp;
}

Complexo Complexo::dividir(Complexo _complexo)
{
	double a = (getReal()*_complexo.getReal() + getImaginario()*_complexo.getImaginario()) / (pow(_complexo.getReal(), 2) + pow(_complexo.getImaginario(), 2));
	double b = (_complexo.getReal()*getImaginario() - getReal()*_complexo.getImaginario()) / (pow(_complexo.getReal(), 2) + pow(_complexo.getImaginario(), 2));
	Complexo temp(a, b);
	return temp;
}

double Complexo::modulo()
{
	return sqrt(pow(getReal(), 2) + pow(getImaginario(), 2));
}

void Complexo::print()
{
	cout << getReal() << " ";
	if(getImaginario() < 0) cout << getImaginario() << "i" << endl;
	else cout << "+" << getImaginario() << "i" << endl;
}

Complexo::operator int(){
	return modulo();
}

Complexo::operator float(){
	return modulo();
}