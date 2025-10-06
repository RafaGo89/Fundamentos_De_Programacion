//Rafael Rodríguez Gómez
//40 - cuantos pares?

#include <iostream>

using namespace std;

int main() {
  int num, valor, par=0;
  
  setlocale(LC_ALL, "spanish");

  cout<<"¿Cuántos números enteros te gustaría ingresar? ";
  cin>>num;

  for( ; num>0; num--){
    cout<<"\nIngrese un número: ";
    cin>>valor;
    if(valor%2==0){
      par++;
    }
  }
  cout<<"\nDe esos números ingresados, "<<par<<" fueron pares";
}