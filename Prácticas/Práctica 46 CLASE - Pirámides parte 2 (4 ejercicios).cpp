//Rafael Rodríguez Gómez
//Práctica 46 CLASE - Pirámides parte 2 (4 ejercicios)

#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Ingrese un valor entero positivo: ";
  cin >> n;

  cout << endl;

  for (int i = n; i > 0; i--){       //Ciclo para manejar las filas de la pirámide
    for (int j = 1; j <= i; j++){ //ciclo para imprimir asteriscos, siempre se inicia en 1
      for(int espacio = n; espacio > i && j == 1; espacio--){   //ciclo para imprimir los espacios, 
          cout << " ";                                            //siempre se inicia en n
      }
      cout << "*";
    }
    cout << endl; 
  }

  cout << endl;
  

  for (int i = 1; i <= n; i++){   //Ciclo para manejar las filas de la pirámide
    for (int j = 1; j <= i; j++){   //ciclo para imprimir asteriscos, siempre se inicia en 1
      for (int espacio = n; espacio > i && j == 1; espacio--){   //ciclo para imprimir los espacios,
        cout << " ";                                              //siempre se inicia en n
      }
      cout << "*";
    }
    cout << endl;
  }

}