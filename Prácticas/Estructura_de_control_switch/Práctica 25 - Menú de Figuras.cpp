//Rafael Rodríguez Gómez
//Práctica 25 - Menú de Figuras

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  char resp;
  float base, altura, radio;

  setlocale(LC_ALL, "spanish");

  cout<<"*Menú:\n"
  <<"A) Área de un triangulo\n"
  <<"B) Área de un círculo\n"
  <<"C) Volumen de una esfera\n"
  <<"D) Volumen de un cilindro\n\n";

  cout<<"¿Qué te gustaría calcular? (escribe la letra de la opción que quieras realizar) ";
  cin>>resp;

  switch(resp){
    case 'A': case 'a':
      cout<<"\n\n*Área de un triángulo*\n";
      
      cout<<"\n¿Cual es la base del triángulo?\n";
      cin>>base; 

      cout<<"\n¿Cuál es la altura del triángulo?\n";
      cin>>altura;

      cout<<"\nEl área de ese triángulo es: "<<(base*altura)/2;
    break;

    case 'B': case 'b':
      cout<<"\n\n*Área de un círculo*\n";

      cout<<"\n¿Cual es el radio del círculo?\n";
      cin>>radio;

      cout<<"\nEl área de ese círculo es: "<<M_PI*(pow(radio,2));
    break;

    case 'C': case 'c':
      cout<<"\n\n*Volumen de una esfera*\n";
      
      cout<<"\n¿Cual es el radio de esa esfera?\n";
      cin>>radio;

      cout<<"\nEl volumen de esa esfera es: "<<(4*M_PI*(pow(radio,3)))/3;
    break;

    case 'D': case 'd':
      cout<<"\n\n*Volumen de un cilindro*\n";

      cout<<"\n¿Cuál es el radio de ese cilindro?\n";
      cin>>radio;

      cout<<"\n¿Cuál es la altura de ese cilindro?\n";
      cin>>altura;

      cout<<"\nEl volumen de ese cilindro es: "<<M_PI*(pow(radio,2))*altura;
    break;

    default:
      cout<<"\n¡Valor no válido!";
  }
}