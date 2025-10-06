//Rafael Rodríguez Gómez
//Practica 46 - Numero Mayor, Menor

#include <iostream>

using namespace std;

int main() {
  int num, resp, mayor=0, menor=0;

  setlocale(LC_ALL, "spanish");

  cout<<"*Determinación del número mayor y menor*";

  cout<<"\n\n¿Cuántos números te gustaría ingresar? ";
  cin>>resp;

  for(int cont=1; cont<=resp; cont++){
    cout<<"\nIngrese un número: ";
    cin>>num;
    if(cont==1){
      mayor=num;
      menor=num;
    }
    else if(num>mayor){
      mayor=num;
    }
    else if(num<menor){
      menor=num;
    }
  }
  cout<<"\nEl número mayor de esa serie de números es: "<<mayor;
  cout<<"\nEl número menor de esa serie de números es: "<<menor;
}