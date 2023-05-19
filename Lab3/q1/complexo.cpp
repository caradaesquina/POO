#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

// inicialização do membro estático
int Complexo::n = 0;

//função somar - recebe um complexo como parametro e retorna um complexo
Complexo Complexo::somar(Complexo _complexo)
{
	Complexo temp(getReal() + _complexo.getReal(), getImaginario() + _complexo.getImaginario());
	return temp;
}

//função subtrair - recebe um complexo como parametro e retorna um complexo
Complexo Complexo::subtrair(Complexo _complexo)
{
	Complexo temp(getReal() - _complexo.getReal(), getImaginario() - _complexo.getImaginario());
	cout << "\n" << getObjetos() << "\n";
	return temp;
}

//função multiplicar - recebe um complexo como parametro e retorna um complexo
Complexo Complexo::multiplicar(Complexo _complexo)
{
	Complexo temp(getReal()*_complexo.getReal() - getImaginario()*_complexo.getImaginario(), getReal()*_complexo.getImaginario() + getImaginario()*_complexo.getReal());
	return temp;
}

//função dividir - recebe um complexo como parametro e retorna um complexo
Complexo Complexo::dividir(Complexo _complexo)
{
	double a = (getReal()*_complexo.getReal() + getImaginario()*_complexo.getImaginario()) / (pow(_complexo.getReal(), 2) + pow(_complexo.getImaginario(), 2));
	double b = (_complexo.getReal()*getImaginario() - getReal()*_complexo.getImaginario()) / (pow(_complexo.getReal(), 2) + pow(_complexo.getImaginario(), 2));
	Complexo temp(a, b);
	return temp;
}

//função modulo - calcula o modulo do complexo
double Complexo::modulo()
{
	return sqrt(pow(getReal(), 2) + pow(getImaginario(), 2));
}

//função print - imprime um complexo com o formato desejado
void Complexo::print()
{
	cout << getReal() << " ";
	if(getImaginario() < 0) cout << getImaginario() << "i" << endl;
	else cout << "+" << getImaginario() << "i" << endl;
}
