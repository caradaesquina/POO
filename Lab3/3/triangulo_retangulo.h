#ifndef triangulo_retangulo
#define triangulo_retangulo

#include <stdlib.h>
#include <stdbool.h>
#include <vector>

class trianguloRetangulo{
    private:
        int cateto1, cateto2, hipotenusa;
        bool checkIfValid(int,int);
    public:
        int getCateto1();
        int getCateto2();
        int getHipotenusa();
        void setCatetos(int,int);
        static void getAllTriangulosRetangulosLessThan200();
        trianguloRetangulo();
        trianguloRetangulo(int,int,int);
        trianguloRetangulo(const trianguloRetangulo&);
        ~trianguloRetangulo();

};

#endif