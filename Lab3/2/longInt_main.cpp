#include "longInt.h"
#include <cmath>
#include <iostream>

using namespace std;


int nums[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8};

int main(){
    longInt a(nums);
    longInt b;
    longInt c;
    for (int i = 0; i < 4; i++){
        int value;
        cout << "Digite o digito " << i << ": ";
        cin >> value;
        b.setDigit(i, value);
    }
    cout << a.sum(b).longIntToInt() << endl;
    cout << b.subtract(a).longIntToInt()<< endl;
    return 0;
}