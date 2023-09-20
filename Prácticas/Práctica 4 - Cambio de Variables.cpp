//Rafael Rodríguez Gómez
//Prática 4 - Cambio de Variables

#include<iostream>

using namespace std;

int main(){
  int A, B, L;
  setlocale(LC_ALL, "spanish");

  cout<<"*Cambio de variables*\n\n";

  cout<<"Ingresa el valor de A: ";
  cin>>A;

  cout<<"\nIngresa el valor de B: ";
  cin>>B;

  cout<<"\nEl valor de A es: "<<A;
  cout<<"\nEl valor de B es: "<<B;

  L=A;
  A=B;
  B=L;

  cout<<"\n\n*Cambio de valores en las variables*\n\n";

  cout<<"El valor de A ahora es: "<<A<<endl;
  cout<<"El valor de B ahora es: "<<B;
  
}
