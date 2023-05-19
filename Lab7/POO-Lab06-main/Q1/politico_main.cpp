#include <string>
#include <iostream>
#include "politico.h"
using namespace std;
int main(){
cout << "## POLITICO COMPLETO ##" << endl << endl;
Prefeito p("Nome1", "P1", "BRASIL", "MG", "Itajuba", 1);
cout << "*******************" << endl << endl;
cout << "# Prefeito 01 #" << endl;
p.imprime();
Governador g("Nome2", "P2", "Brasil", "QQuer", 2);
cout << endl << "# Governador 01 #" << endl;
g.imprime(); cout << endl;
Presidente pr("Nome3",  "P3", "Brasil", 3);
cout << endl << "# PRESIDENTE 01 #" << endl;
pr.imprime(); cout << endl;
Politico pi("Nome", "P4", 0);
cout << endl << "# POLITICO 01 #" << endl;
pi.imprime(); cout << endl;
cout << "*******************" << endl << endl;
return 0;
}