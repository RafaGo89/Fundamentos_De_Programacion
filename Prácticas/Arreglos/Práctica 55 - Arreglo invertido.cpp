//Rafael Rodríguez Gómez
//Práctica 55 - Arreglo invertido

#include <iostream>

using namespace std;

int main() {
  int tam;

  setlocale(LC_ALL, "spanish");

  cout<<"¿De qué tamaño quieres que sea el arreglo? ";
  cin>>tam;

  int arreglo1[tam], arreglo2[tam];

  for(int i=0, i2=tam-1; i<tam; i++, i2--){
    cout<<"\nIngrese el valor número "<<i+1<<": ";
    cin>>arreglo1[i];
    arreglo2[i2]=arreglo1[i];
  }

  cout<<"\n*Arreglo original: \n";
  for(int i=0; i<tam; i++){
    cout<<arreglo1[i]<<" ";
  }

  cout<<"\n\n*Arreglo invertido: \n";
  for(int i=0; i<tam; i++){
    cout<<arreglo2[i]<<" ";
  }
}