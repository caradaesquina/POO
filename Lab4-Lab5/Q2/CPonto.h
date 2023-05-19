#ifndef CPONTO_H
#define CPONTO_H
#include <iostream>

using namespace std;

class CPonto{
    private:
        int x,y;
    public:
        CPonto();
        CPonto(int,int);
        CPonto(const CPonto&);
        ~CPonto();
        CPonto& operator ++();
        CPonto operator ++(int value);
        CPonto& operator --();
        CPonto operator --(int value);
        friend ostream& operator <<(ostream&, CPonto&);
};

#endif