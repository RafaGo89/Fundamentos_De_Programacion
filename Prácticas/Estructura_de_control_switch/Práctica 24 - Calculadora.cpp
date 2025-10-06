//Rafael Rodríguez Gómez
//Práctica 24 - Calculadora

#include <iostream>

using namespace std;

int main() {
  float n1, n2;
  int resp;

  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese un número: ";
  cin>>n1;

  cout<<"\nIngrese otro número: ";
  cin>>n2;

  cout<<"\n*Menú*\n"
  <<"1-Suma\n"
  <<"2-Resta\n"
  <<"3-Multiplicación\n"
  <<"4-División \n\n";

  cout<<"¿Qué operación aritmetica te gustaría hacer? (escribe el número)\n";
  cin>>resp;

  switch(resp){
    case 1:
      cout<<"\n\nLa suma de "<<n1<<" y "<<n2<<" es: "<<n1+n2;
    break;

    case 2:
      cout<<"\n\nLa resta de "<<n1<<" y "<<n2<<" es: "<<n1-n2;
    break;

    case 3:
      cout<<"\n\nLa multiplicación de "<<n1<<" y "<<n2<<" es: "<<n1*n2;
    break;

    case 4:
      cout<<"\n\nLa división entre "<<n1<<" y "<<n2<<" es: "<<n1/n2;
    break;

    default:
      cout<<"\n¡Valor no válido!";
  }
  
}