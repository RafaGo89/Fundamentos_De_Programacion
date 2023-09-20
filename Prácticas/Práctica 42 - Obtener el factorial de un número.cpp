//Rafael Rodríguez Gómez
//Práctica 42 - Obtener el factorial de un número

#include <iostream>

using namespace std;

int main() {
  int num; 
  double factorial;
  
  setlocale(LC_ALL, "spanish");

  cout<<"*Factorial de un número*\n\n";

  cout<<"Ingrese un número entero: ";
  cin>>num;
  factorial=num;

  for(int contador=num-1; contador>0; contador--){
    factorial=contador*factorial;
  }

  cout<<"\n\nEl factorial de "<<num<<" es: "<<factorial;
}