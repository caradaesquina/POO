#include "formas.h"
#include <iostream>

using namespace std;

int main(){
   Ponto *pontos[3];
    for (int i = 0; i < 3; i++){
        pontos[i] = NULL;
    } 
    Ponto *p1 = new Ponto;
    p1->print();
    int op;
    int pos = 0;
    while ((op != 4) && (pos < 3)){
        cout << "----MENU DOS PONTOS----" << endl;
        cout << "(1) Criar Ponto" << endl;
        cout << "(2) Criar Circulo" << endl;
        cout << "(3) Criar Cilindro" << endl;
        cout << "(4) Sair" << endl;
        cin >> op;
        switch (op){
            case 1:{
                Ponto *pt = new Ponto;
                pontos[pos] = pt;
                pos++;
                break;
            }
            case 2:{
                Circulo *circ = new Circulo;
                pontos[pos] = circ;
                pos++;
                break;
            }
            case 3:{
                Cilindro *cil = new Cilindro;
                pontos[pos] = cil;
                pos++;
                break;
            }
                
            case 4:               
                break;
            default:
                cout << "Digite um opcao valida." << endl;
                break;
        }
    
    }
    cout << endl;
    for (int i = 0; i < pos; i++){
        if(pontos[i] != NULL){
            pontos[i]->print();
            cout << endl;
        }
    }
    return 0;
}