//Rafael Rodríguez Gómez
//Práctica 13 - Par/Impar

#include <iostream>

using namespace std;

int main(){
  int numero;
  
  setlocale(LC_ALL, "spanish");

  cout<<"*¿Número par o impar?*";

  cout<<"\n\nIngrese un número que sea entero y positivo: ";
  cin>>numero;

  if(numero%2==0){
    cout<<"\n"<<numero<<" es un número par";
  }
  else{
    cout<<"\n"<<numero<<" es un número impar";
  }
}