#include "triangulo_retangulo.h"
#include<iostream>
#include <vector>
#include<cmath>

bool checkValid(int a, int b, int c){
    return sqrt(a*a + b*b) == c;
}
int trianguloRetangulo::getCateto1(){return cateto1;}
int trianguloRetangulo::getCateto2(){return cateto2;}
int trianguloRetangulo::getHipotenusa(){return hipotenusa;}
void trianguloRetangulo::getAllTriangulosRetangulosLessThan200(){
    for (int i =1; i < 200; i++){
        for (int j=1; j<200; j++){
            for (int k =1; k<200; k++){
                if (i == sqrt(j*j + k*k)){
                    std::cout << i << " "<<j << " " << k << std::endl;
                }
            }
        }
    }
}
trianguloRetangulo::trianguloRetangulo(){cateto1 = 3; cateto2=4; hipotenusa=5;}
trianguloRetangulo::trianguloRetangulo(int c1, int c2, int h){
    if (checkValid(c1,c2,h)){cateto1 = c1; cateto2=c2; hipotenusa=h;}
    else {cateto1 = 3; cateto2=4; hipotenusa=5;}
}
trianguloRetangulo::trianguloRetangulo(const trianguloRetangulo& t){
    cateto1 = t.cateto1;
    cateto2 = t.cateto2;
    hipotenusa = t.hipotenusa;
}
trianguloRetangulo::~trianguloRetangulo(){}