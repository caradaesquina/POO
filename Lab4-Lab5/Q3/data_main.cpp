#include <iostream>
#include "CData.h" 

using namespace std;

int main() {
    CData d1{27, 12, 2010}; 
    CData d2; 
    cout << "d1 is " << d1 << "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << (d1 += 7);
    d2.setData(28, 2, 2008);
    cout << "\n\n  d2 is " << d2;
    cout << "\n++d2 is " << ++d2 << " (ano bissexto permite dia 29)";
    CData d3{13, 7, 2010};
    cout << "\n\nTeste da forma pre-fixada do operador de incremento :\n"
        << " d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << " d3 is " << d3;
    cout << "\n\nTeste da forma pos-fixada do operador de incremento: \n"
        << " d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << " d3 is " << d3 << endl;
}