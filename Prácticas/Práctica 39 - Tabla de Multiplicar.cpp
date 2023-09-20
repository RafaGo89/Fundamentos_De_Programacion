//Rafael Rodríguez Gómez
//Práctica 39 - Tabla de Multiplicar

#include <iostream>

using namespace std;

int main() {
  int resp;
  
  setlocale(LC_ALL, "spanish");

  cout<<"¿Qué tabla de multiplicar te gustaría ver? ";
  cin>>resp;

  for(int num=1; num<=12; num++){
    cout<<endl<<resp<<" x "<<num<<" = "<<resp*num<<endl;
  }
}