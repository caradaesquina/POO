
#include <iomanip> 
#include "numTelefone.h" 
using namespace std; 
 

ostream &operator<<( ostream &output, const PhoneNumber &number ) { 
   output << "(" << number.ddd << ")" 
    << number.numero; 
   return output; 
} 
 

istream &operator>>( istream &input, PhoneNumber &number ) { 
   //input.ignore(); 
   input >> setw( 2 ) >> number.ddd; 
   //input.ignore();
   input >> setw( 9 ) >> number.numero; 
   return input; 
} 