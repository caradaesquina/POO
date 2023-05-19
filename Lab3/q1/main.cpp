#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

int main()
{
	Complexo a(1,2);
	Complexo b(3,4);
	Complexo aux;
	int ans;

	cout << "A: ";
	a.print();
	cout << "B: ";
	b.print();
	
	cout << "A + B: ";
	aux = a.somar(b);
	aux.print();

	cout << "A - B: ";
	aux = a.subtrair(b);
	aux.print();

	cout << "A * B: ";
	aux = a.multiplicar(b);
	aux.print();

	cout << "A / B: ";
	aux = a.dividir(b);
	aux.print();

	cout << "|A|: " << a.modulo() << endl;
	cout << "|B|: " << b.modulo() << endl;

	cout << "Qt de objetos: " << a.getObjetos() << endl;
}
