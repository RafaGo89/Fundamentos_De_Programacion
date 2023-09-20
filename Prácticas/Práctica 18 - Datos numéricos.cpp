//Rafael Rodríguez Gómez
//Práctica 18 - Datos numéricos

#include <iostream>

using namespace std;

int main(){
  int num;

  setlocale(LC_ALL, "spanish");

  cout<<"Introduzca un número entero: ";
  cin>>num;

  if(num==0){
    cout<<"\n\n*Ese número es cero";
  }
  else if(num<0){
    cout<<"\n\n*Ese número es negativo";
  }
  else{
    cout<<"\n\n*Ese número es positivo";
    if(num%2==0){
      cout<<"\n*Ese número es par";
    }
    else{
      cout<<"\n*Ese número es impar";
      if(num%7==0){
        cout<<"\n*Es múltiplo de 7";
      }
      else{
        cout<<"\n*No es múltiplo de 7";
      }
    }
  }
    
}