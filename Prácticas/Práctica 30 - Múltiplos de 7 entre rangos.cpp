//Rafael Rodríguez Gómez
//Práctica 30 - Múltiplos de 7 entre rangos

#include <iostream>

using namespace std;

int main() {
  int max, min;

  cout<<"*Múltiplos de 7 entre 2 números*\n\n";
  cout<<"Ingrese el rango inferior: ";
  cin>>min;

  cout<<"\nIngrese el rango supeior: ";
  cin>>max;

  cout<<"\nLos multiplos de 7 entre "<<min<<" y "<<max<<" son: ";
  while(min<=max){
    if(min%7==0){
      cout<<endl<<min;
    }
    min++;
  }
}