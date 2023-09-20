//Rafael Rodríguez Gómez
//Práctica 9 - Convertidor de Temperaturas P1

#include <iostream>

using namespace std;

int main(){
  float temp, fare, kelvin;
  
  setlocale(LC_ALL, "spanish");
  cout<<"Ingrese una temperatura en grados celsius: ";
  cin>>temp;

  fare=(temp*1.8)+32;
  kelvin=temp+273.15;

  cout<<"\n*Su equivalencia en grados Fahrenheit es: "<<fare;

  cout<<"\n\n*Su equivalencia en grados Kelvin es: "<<kelvin;
}