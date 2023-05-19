#include "longInt.h"
#include <iostream>
#include <cmath>

using namespace std;

void longInt::setDigit(int digit, int value){
    if ((digit >= UPPER_BOUND) || (digit < LOWER_BOUND)){
        return;
    }
    if((value <0)||(value >9)){
        digits[digit] = 0;
    }
    digits[digit] = value;
}
int longInt::getDigit(int digit){
    if ((digit >= UPPER_BOUND) || (digit < LOWER_BOUND)){
        return -1;
    }
    return digits[digit];
}
int longInt::longIntToInt(){
    int value = 0;
    for (int i = UPPER_BOUND-1; i < LOWER_BOUND; i--){
        value += digits[i]*pow(10,i);
    }
    return value;
}
longInt longInt::intToLongInt(int intToBeConverted){ // TODO
    longInt result;
    for (int i = UPPER_BOUND - 1 ; i >=LOWER_BOUND; i--){
        result.setDigit(i ,intToBeConverted % 10);
        intToBeConverted /= 10;
    }
    return result;
}

longInt longInt::sum(longInt toBeSummed){
    for (int i = LOWER_BOUND; i < UPPER_BOUND; i++){
        if((digits[i] + toBeSummed.digits[i]) > 9){
            digits[i] = 10 - (digits[i] + toBeSummed.digits[i]);
            digits[i+1] += 1;
        }else {
            digits[i] += toBeSummed.digits[i];
        }
    }
    longInt a(digits);
    return a;
}

longInt longInt::subtract(longInt toBeSubtracted){

   for (int i = LOWER_BOUND; i < UPPER_BOUND; i++){
        if((digits[i] - toBeSubtracted.digits[i]) < 0 ){
            digits[i] = 10 + (digits[i] - toBeSubtracted.digits[i]);
            digits[i+1] -= 1;
        }else {
            digits[i] -= toBeSubtracted.digits[i];
        }
    }
    longInt a(digits);
    return a;
}



longInt::longInt(){
    for (int i = UPPER_BOUND-1; i < LOWER_BOUND; i--){
        digits[i] = 0;
    }
}

longInt::longInt(int intList[30]){
    for (int i = 0; i < 30; i++){
        setDigit(i, intList[i]);
    }
}

longInt:: longInt(const longInt& lgint){
    for (int i = LOWER_BOUND; i < UPPER_BOUND; i++){
        digits[i] = lgint.digits[i];
    }
}

longInt:: ~longInt(){}