#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    complex c1;
    complex c2(2,2);
    complex c3(3,3);
    complex c4(c3);
    complex c5;
    cout << "C1 = " << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
    cout << "Modulo de C2 = " << c2.getModulus() << endl;
    c5.setReal(5); c5.setImaginary(5);
    cout << "C5 " << c5.print() << endl;
    cout << c2.sum(c3).print() << endl;
    cout << c2.subtract(c3).print() << endl;
    cout << c2.multiply(c4).print() << endl;
    cout << c2.divide(c4).print() << endl;
    return 0;
}