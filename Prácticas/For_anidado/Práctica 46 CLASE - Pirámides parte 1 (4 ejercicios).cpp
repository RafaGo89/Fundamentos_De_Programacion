//Rafael Rodríguez Gómez
//Práctica 46 CLASE - Pirámides parte 1 (4 ejercicios)

#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Ingrese un valor entero positivo: ";
  cin >> n;

  cout << endl;

  for (int i = 1; i <= n; i++){  //ciclo para manejar filas  
    for (int j = 1; j <= i; j++){  //ciclo para imprimir asteriscos, siempre se inicia en 1
      cout << "*";              //y llega hasta el valor de i2 que se tenga
    }
    cout << endl;
  }

  cout << endl;

  for (int i = n; i > 0; i--){  //ciclo para manejar filas  
    for (int j = 1; j <= i; j++){  //ciclo para imprimir asteriscos, siempre se inicia en 1
      cout << "*";              //y llega hasta el valor de i2 que se tenga
    }
    cout << endl;
  }
  
}