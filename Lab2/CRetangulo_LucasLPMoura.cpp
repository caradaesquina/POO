#include <iostream>
#include<unistd.h>
#include <cmath>
#include "CRETANGULO_H_LUCASLPMOURA.h"

using namespace std;

int CRetangulo::getAltura(){return altura;}
int CRetangulo::getLargura(){return largura;}
char CRetangulo::getBorda(){return borda;}
char CRetangulo::getPreenchimento(){return preenchimento;}
void CRetangulo::setAltura(int alt){altura = ((alt <20)&&(alt >0)) ? alt : 1;}
void CRetangulo::setLargura(int larg){largura = ((larg <20)&&(larg >0)) ? larg : 1;}
void CRetangulo::setBorda(char bor){borda = bor ;}
void CRetangulo::setPreenchimento(char preen){preenchimento = preen;}
int CRetangulo::getArea(){return altura*largura;}
int CRetangulo::getPerimetro(){return (altura+largura)*2;}
bool CRetangulo::isQuadrado(){return (largura == altura);}
void CRetangulo::draw(){
    desenharRetangulo(altura,largura,borda,preenchimento);
}
CRetangulo::CRetangulo(){altura = 1; largura = 1; borda = 'x'; preenchimento = 'o'; cout << "Objeto CRetangulo padrão criado!" << endl;}
CRetangulo::CRetangulo(int alt, int larg, char bord, char preen){
    setAltura(alt);
    setLargura(larg);
    setBorda(bord);
    setPreenchimento(preen);
    cout << "Objeto CRetangulo personalizado criado!" << endl;
}
CRetangulo::CRetangulo(CRetangulo &ret){
    altura = ret.altura;
    largura = ret.largura;
    borda = ret.borda;
    preenchimento = ret.preenchimento;
}
CRetangulo::~CRetangulo(){
    cout << "Objeto CRetangulo destruído!" << endl;
}

void desenharRetangulo(int altura, int largura, char borda, char preenchimento){
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            if ((i == 0) || (i == altura - 1) || (j == 0) || (j == largura -1)){
                cout << borda << " ";
            } else{
                cout << preenchimento << " ";
            }
        }
        cout << endl;
    }
}
