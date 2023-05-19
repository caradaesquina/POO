
#ifndef NUMTELEFONE_H 
#define NUMTELEFONE_H 
 
#include <iostream> 
#include <string> 

using namespace std; 
 
class PhoneNumber 
{ 
   friend ostream &operator<<( ostream &, const PhoneNumber & ); 
   friend istream &operator>>( istream &, PhoneNumber & ); 
private: 
   string ddd; 
   string numero;  
}; 

#endif 
 
