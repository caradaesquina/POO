#include "politico.h"
#include <iostream>

using namespace std;

Politico::Politico(){
    Politico("Lucas","UNIFEI",10);
}

Politico::Politico(string _nome, string _partido, int _numero){
    nome = _nome;
    partido = _partido;
    numero = _numero;
    cout << "Criando politico!" << endl;
}

Politico::~Politico(){
    cout << "Destruindo politico!" << endl;
}

void Politico::imprime(){
    cout << "NOME: " << nome << endl;
    cout << "PARTIDO: "<< partido << endl;
    cout << "NUMERO: "<< numero << endl;
}

Presidente::Presidente(){
    Presidente("Lucas","UNIFEI","Brasil",10);
}

Presidente::Presidente(string _nome, string _partido, string _pais, int _numero){
    Politico(_nome, _partido, _numero);
    pais = _pais;
    cout << "Criando presidente!";
}

Presidente::~Presidente(){
    cout << "Destruindo presidente!";
}

void Presidente::imprime(){
    Politico::imprime();
    cout << "PAIS: " << pais << endl;
}

Governador::Governador(){
    Governador("Lucas","UNIFEI", "Brasil", "Minas Gerais",  10);
}

Governador::Governador(string _nome, string _partido, string _pais, string _estado, int _numero){
    Presidente(_nome, _partido, _pais, _numero);
    estado = _estado;
    cout << "Criando governador!" << endl;
}

Governador::~Governador(){
    cout << "Destruindo governador!" << endl;
}

void Governador::imprime(){
    Presidente::imprime();
    cout << "ESTADO: " << estado << endl;
}

Prefeito::Prefeito(){
    Prefeito("Lucas","UNIFEI", "Brasil", "Minas Gerais", "Itajuba",  10);
}

Prefeito::Prefeito(string _nome, string _partido, string _pais, string _estado, string _cidade, int _numero){
    Governador(_nome, _partido, _pais,_estado, _numero);
    cidade   = _cidade;
    cout << "Criando prefeito!" << endl;
}

Prefeito::~Prefeito(){
    cout << "Destruindo prefeito!" << endl;
}

void Prefeito::imprime(){
    Governador::imprime();
    cout << "CIDADE: " << cidade << endl;
}
