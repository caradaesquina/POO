#ifndef CDATA_H
#define CDATA_H
#include <iostream>

using namespace std;

class CData{
    private:
        int dia, mes, ano;
        static const int numDias[13];
        static const int numDiasBisextos[13];
        bool checkBisexto(int);
        void incrementDay();
    public:
        CData();
        CData(int,int,int);
        CData(const CData&);
        ~CData();
        void setData(int,int,int);
        CData& operator++();
        CData operator++(int value);
        CData& operator +=(unsigned int);
        friend istream& operator >> (istream&, CData&);
        friend ostream& operator << (ostream&, CData&);

};

#endif