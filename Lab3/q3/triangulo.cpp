#include <iostream>
#include <math.h>
#include "triangulo.h"

using namespace std;


void TrianguloRet::todos100(){

	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			for(int k=1;k<=100;k++){
			
				if(i==sqrt(j*j + k*k)){
					cout << i << " "<< j << " " << k <<endl;
				}			
					
			}		
		}
	}
}

TrianguloRet::TrianguloRet(int a, int b, int c){
	if(((a*a) == (b*b + c*c)) ||((b*b) == (a*a + c*c)) ||
									((c*c) == (a*a + b*b)) ){
		m_a = a;
		m_b = b;
		m_c = c;		
	}else{
		cout << "Nao e triangulo. Valor padrao a=5, b=4 , c=3"<<endl;
		m_a = 5;
		m_b = 4;
		m_c = 3;
	}	
}