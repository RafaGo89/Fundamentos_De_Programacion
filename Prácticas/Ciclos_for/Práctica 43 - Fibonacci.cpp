//Rafael Rodríguez Gómez
//Práctica 43 - Fibonacci

#include <iostream>

using namespace std;

int main() {
  int serie;
  double resul;

  setlocale(LC_ALL, "spanish");

  cout<<"¿Cuántos números de la serie de Fibonacci te gustaría ver? ";
  cin>>serie;

  if(serie==1){
    cout<<"\n0";
  }
  else if(serie==2){
    cout<<"\n0, 1";
  }
  else if(serie>2){
    cout<<"\n0, 1";
    for(int auxa=0, auxb=1, vueltas=0; vueltas<serie-2; auxa=auxb, auxb=resul){
      resul=auxa+auxb;
      cout<<", "<<resul;
      vueltas++;
    }
  }
  else{
    cout<<"\n¡El número ingresado no es válido!";
  }
}