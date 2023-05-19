#ifndef CRETANGULO_H_LUCASLPMOURA
#define CRETANGULO_H_LUCASLPMOURA

void desenharRetangulo(int, int, char, char);

class CRetangulo {
    private:
        int altura, largura;
        char borda, preenchimento;
    public:
        int getAltura();
        int getLargura();
        char getBorda();
        char getPreenchimento();
        void setAltura(int alt);
        void setLargura(int larg);
        void setBorda(char bor);
        void setPreenchimento(char preen);
        int getArea();
        int getPerimetro();
        bool isQuadrado();
        void draw();
        CRetangulo();
        CRetangulo(int, int, char, char);
        CRetangulo(CRetangulo&ret);
        ~CRetangulo();

};


#endif
