//Rafael Rodríguez Gómez
//Práctica 60 - Menú de operaciones

#include <iostream>

using namespace std;

float x, y;
int resp;

void capturar();
void operacion();

int main() {

  cout << "\n*Menú de operaciones*\n";
  cout <<"1) Suma\n2) Resta\n3) Multiplicación\n4) División\n";
  
  cout <<"\n¿Qué operación te gustaría realizar? (ingresa el número de la operación que te gustaría realizar) ";
  cin >> resp;

  capturar();

  operacion();

}

void capturar(){
  cout << "\nIngrese el primer valor: ";
  cin >> x;

  cout << "\nIngrese el segundo valor: ";
  cin>> y;
}

void operacion(){
  switch (resp){
    case 1:
      cout << "\nLa suma de " << x << " y " << y << "es : " << x + y;
    break;

    case 2:
      cout << "\nLa resta de " << x << " y " << y << "es : " << x - y;
    break;

    case 3:
      cout << "\nLa multiplicación de " << x << " y " << y << "es : " << x * y;
    break;

    case 4:
      cout << "\nLa divisón de " << x << " y " << y << "es : " << x / y;
    break;

    default:
      cout << "\nNúmero de opción seleccionado no válido";
  }
}