//Rafael Rodríguez Gómez
//Práctica 33 - Producto 0

#include <iostream>

using namespace std;

int main() {
  float num, num2, producto;

  setlocale(LC_ALL, "spanish");

  cout<<"*Multiplicar 2 números hasta que el resultado sea 0*\n\n";
  cout<<"Ingrese un número: ";
  cin>>num;
  cout<<"Ingrese otro número: ";
  cin>>num2;
  producto=num*num2;

  while(num*num2!=0){
    cout<<"\nEl producto de multiplicar "<<num<<" x "<<num2<<" es: "<<num*num2;
    num=num*num2;
    cout<<"\n\nIngrese otro número: ";
    cin>>num2;
  }
  cout<<"\nLa multiplicación finalizó en "<<num*num2;
}