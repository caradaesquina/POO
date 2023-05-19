#ifndef POLITICO_H
#define POLITICO_H
#include <string>

using namespace std;

class Politico{
    protected:
        string nome, partido;
        int numero;
    public:
        Politico();
        Politico(string, string, int);
        ~Politico();
        void imprime();
};

class Presidente: public Politico{
    protected:
        string pais;
    public:
        Presidente();
        Presidente(string, string, string, int);
        ~Presidente();
        void imprime();

};

class Governador: public Presidente{
    protected:
        string estado;
    public:
        Governador();
        Governador(string,string,string,string,int);
        ~Governador();
        void imprime();
};

class Prefeito: public Governador{
    protected:
        string cidade;
    public:
        Prefeito();
        Prefeito(string,string,string,string,string,int);
        ~Prefeito();
        void imprime();
};

#endif