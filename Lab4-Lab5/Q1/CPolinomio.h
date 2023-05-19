#ifndef CPolinomio_H
#define CPolinomio_H

#include <iostream>

using namespace std;

class CPolinomio{
    private:
        double* values;
        int n;
    public:
        CPolinomio();
        CPolinomio(int);
        CPolinomio(const CPolinomio&);
        ~CPolinomio();
        CPolinomio operator = (const CPolinomio&);
        CPolinomio operator + (CPolinomio);
        CPolinomio operator - (CPolinomio);
        double& operator[] (int);
        friend ostream& operator << (ostream&, CPolinomio&);
        friend istream& operator >> (istream&, CPolinomio&);
};

#endif