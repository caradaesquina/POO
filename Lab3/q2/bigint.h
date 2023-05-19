#ifndef BIGINT_H
#define BIGINT_H

class BigInt
{
	private:
		int num[31];
		int len;

		void inicializar()
		{
			for(int i = 0; i < 31; i++) num[i] = 0;
		}

	public:

		BigInt() {inicializar();}
		~BigInt() {};

		void leia();
		void print();
		BigInt soma(BigInt);
		BigInt subtrai(BigInt);

};

#endif
