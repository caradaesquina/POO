#include <string>
#include <iostream>
#include "politico.h"

using namespace std;

int main(){
    Politico *politicos[3];
    for (int i = 0; i < 3; i++){
        politicos[i] = NULL;
    } 
    Presidente p;
    p.imprime();
    int op;
    int pos = 0;
    while ((op != 4) && (pos < 3)){
        cout << "----MENU DOS POLITICOS----" << endl;
        cout << "(1) Criar Presidente" << endl;
        cout << "(2) Criar Governador" << endl;
        cout << "(3) Criar Prefeito" << endl;
        cout << "(4) Sair" << endl;
        cin >> op;
        switch (op){
            case 1:{
                Presidente *pres = new Presidente;
                politicos[pos] = pres;
                pos++;
                break;
            }
            case 2:{
                Governador *gov = new Governador;
                politicos[pos] = gov;
                pos++;
                break;
            }
            case 3:{
                Prefeito *pref = new Prefeito;
                politicos[pos] = pref;
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
        if(politicos[i] != NULL){
            politicos[i]->imprime();
            cout << endl;
        }
    }
    return 0;
}