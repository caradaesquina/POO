#include <iostream>
#include <cmath>
#include "Complex.h"
#include <string>

using namespace std;

double complex::getReal() {return real;}
double complex::getImaginary() {return imaginary;}
double complex::getModulus() {return sqrt(pow(real,2) + pow (imaginary,2));}
void complex::setReal(double r) {real = r;}
void complex::setImaginary(double i) {imaginary = i;}
complex complex::sum(complex c) {return complex((real + c.getReal()), (imaginary+c.getImaginary()));}
complex complex::subtract(complex c) {return complex((real - c.getReal()), (imaginary - c.getImaginary()));}
complex complex::multiply(complex c) {
    double real_part = real*c.getReal() - imaginary*c.getImaginary();
    double imaginary_part = real*c.getImaginary() + imaginary*c.getReal();
    return complex(real_part, imaginary_part);
}
complex complex::divide(complex c){
    double real_part = (real*c.getReal() + imaginary*c.getImaginary())/(pow(c.getReal(),2) + pow(c.getImaginary(),2));
    double imaginary_part = (imaginary*c.getReal() - real*c.getImaginary())/(pow(c.getReal(),2) + pow(c.getImaginary(),2));
    return complex(real_part, imaginary_part);
}
string complex::print(){
    string real_string = to_string(real);
    string imaginary_string = to_string(abs(imaginary));
    return real_string + ((imaginary < 0) ? "-" : "+" ) + imaginary_string + "i";
}
int complex::getNumOfInstances(){return num_of_instances;}    
complex::complex(){real = 1; imaginary = 1;num_of_instances++;}
complex::complex(double r, double i){real = r; imaginary = i;num_of_instances++;}
complex::complex(const complex& c){
    real = c.real;
    imaginary = c.imaginary;
    num_of_instances++;
}
complex::~complex(){num_of_instances--;}