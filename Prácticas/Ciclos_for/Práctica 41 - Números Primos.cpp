//Rafael Rodríguez Gómez
//Práctica 41 - Números Primos

#include <iostream>

using namespace std;

int main() {
  int resp, contador;
  
  setlocale(LC_ALL, "spanish");
  
  cout<<"Introduzca un número entero: ";
  cin>>resp;
  
  for(int num=resp; num>0; num--){
    if(resp%num==0){
      contador++;
    }
    if(contador>2){
      num=0;
    }
  }
  
  if(contador==2){
    cout<<endl<<resp<<" es un número primo";
  }
  else{
    cout<<endl<<resp<<" no es un número primo";
  }
}