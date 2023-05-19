#include <iostream>
#include "bigint.h"

using namespace std;

int main()
{
	BigInt a, b, c;
	cout << "Digite o valor de A: ";
	a.leia();
	cout << "Digite o valor de B: ";
	b.leia();
	cout << "A+B = ";
	c = a.soma(b);
	c.print();
	cout << "A-B = ";
	c = a.subtrai(b);
	c.print();

	return 0;
}