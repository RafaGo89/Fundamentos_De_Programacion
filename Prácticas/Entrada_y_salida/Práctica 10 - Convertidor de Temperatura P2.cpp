//Rafael Rodríguez Gómez
//Práctica 10 - Convertidor de Temperatura P2

#include <iostream>

using namespace std;

int main(){
  float temp, celsius, kelvin;
  
  setlocale(LC_ALL, "spanish");

  cout<<"Introduzca una temperatura en grados Farenheit: ";
  cin>>temp;

  celsius=(temp-32)/1.8;
  kelvin=((temp-32)/1.8)+273.15;

  cout<<"\n*Su equivalencia en grados celsius es: "<<celsius;
  
  cout<<"\n\n*Su equivalencia en grados kelvin es: "<<kelvin;
}