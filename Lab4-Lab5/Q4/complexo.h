#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo
{
	private:
		double real, imag;
		static int n;

	public:
		Complexo() {
			real = 1;
			imag = 1;
			n++;
		}
		Complexo(double a, double b) {
			real = a;
			imag = b;
			n++;
		}
		Complexo(const Complexo& c) {
			real = c.real;
			imag = c.imag;
			n++;
		}
		~Complexo() {n--;}

		Complexo somar(Complexo);
		Complexo subtrair(Complexo);
		Complexo multiplicar(Complexo);
		Complexo dividir(Complexo);

		void setReal(double a) {real = a;}
		void setImaginario(double a) {imag = a;}
		double getReal() {return real;}
		double getImaginario() {return imag;}
		int getObjetos() {return n;}

		operator int();
		operator float();

		double modulo();
		void print();

};

#endif
