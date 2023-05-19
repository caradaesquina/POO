//implementação supondo que os objetos desta classe farao parte de um banco de dados
//onde info como "estoque" ou "unidades vendidas" seriam contabilizadas

#ifndef CLIVRO_H
#define CLIVRO_H
#include "CData.h"
#include <string>

using namespace std;

class CLivro{
    private:
        string tituto;
        string tema, subTema;
        string autor;
        int ano;
        int codigo;
        bool emprestado;
        int vezesEmprestado;
        int dataEmprestimo;
        int dataDevolucaoEsperada;
        CData dataDevolucaoReal; // CData dataVenda;
        //float preço; - necessario para uma livraria
    public:
        CLivro();
        CLivro(const string, const string, const string, const string, int, int, bool = false);
        CLivro(const CLivro&);
        ~CLivro();
        void getTitulo();
        void getTemaESubTema();
        void getAutor();
        void getCodigo();
        void emprestar(CData dataDevEsp); //void vender();
        void devolver(CData dataDevReal);
        bool checkAtraso();
};

#endif