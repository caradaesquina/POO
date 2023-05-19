#include <iostream>
#include "CRETANGULO_H_LUCASLPMOURA.h"

using namespace std;
CRetangulo lista_retangulos[5];

int main(){

    for (int i = 0; i < 5; i++){
        int alt, larg;
        char bord, preen;
        cout << "Digite a altura do retangulo " << i << ": " << endl;
        cin >> alt;
        cout << "Digite a largura do retangulo " << i  << ": "<< endl;
        cin >> larg;
        cout << "Digite a borda do retangulo " << i <<  ": "<< endl;
        cin >> bord;
        cout << "Digite o preenchimento do retangulo " << i <<  ": "<< endl;
        cin >> preen;
        CRetangulo ret(alt,larg,bord,preen);
        lista_retangulos[i] = ret;
    }
    for (int i =0; i < 5; i++){
        CRetangulo ret(lista_retangulos[i]);
        cout << "Retangulo " << i << endl;
        ret.draw();
    }
    CRetangulo *ret = new CRetangulo;
    ret->setAltura(5);
    ret->setLargura(7);
    ret->setPreenchimento('o');
    ret->setBorda('-');
    ret->draw();
}
