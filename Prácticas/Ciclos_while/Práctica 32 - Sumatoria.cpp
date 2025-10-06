//Rafael Rodríguez Gómez
//Práctica 32 - Sumatoria

#include <iostream>

using namespace std;

int main() {
  int num, num2;

  setlocale(LC_ALL, "spanish");

  cout<<"*Realizar una sumatoria de valores hasta que el resultado sea 100 o más*\n\n";
  cout<<"Ingrese un número: ";
  cin>>num;

  while(num<100){
    cout<<"\nLa suma va en "<<num;
    cout<<"\nIngrese un número: ";
    cin>>num2;
    num+=num2;
  }
  cout<<"\nLa suma finalizó en "<<num;
}