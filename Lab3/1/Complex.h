#ifndef Complex
#define Complex
#include <iostream>

using namespace std;

class complex{
    private:
        double real, imaginary;
    public:
        static int num_of_instances;
        double getReal();
        double getImaginary();
        double getModulus();
        void setReal(double);
        void setImaginary(double);
        complex sum(complex);
        complex subtract(complex);
        complex multiply(complex);
        complex divide(complex);
        string print();
        int getNumOfInstances();
        complex();
        complex(double, double);
        complex(const complex&);
        ~complex();


};

#endif