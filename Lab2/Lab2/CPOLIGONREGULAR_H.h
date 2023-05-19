#ifndef CPOLIGONOREGULAR_H
#define CPOLIGONOREGULAR_h

class CPoligonoRegular{
    private:
        int lados;
        float comprimento;
    public:
        int getLados();
        float getComprimento();
        float area();
        float perimetro();
        void nome();
        CPoligonoRegular(int, float);
        ~CPoligonoRegular();

};
#endif
