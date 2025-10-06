//Rafael Rodríguez Gómez
//Práctica 15 - Edades

#include <iostream>

using namespace std;

int main(){
  int edad;
  
  setlocale(LC_ALL, "spanish");

  cout<<"¿Cúal es su edad? ";
  cin>>edad;

  if(edad<=13){
    cout<<"\nUsted es un niño";
  }
  else if(edad<=17){
    cout<<"\nUsted es un adolescente";
  }
  else if(edad<=35){
    cout<<"\nUsted es un adulto joven";
  }
  else if(edad<=59){
    cout<<"\nUsted es un adulto";
  }
  else{
    cout<<"\nUsted es un viejito";
  }
  
}