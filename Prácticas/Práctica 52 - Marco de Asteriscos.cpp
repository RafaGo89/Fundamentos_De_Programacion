//Rafael Rodríguez Gómez
//Práctica 52 - Marco de Asteriscos

#include <iostream>

using namespace std;

int main() {
  int filas, columnas;

  cout << "¿Cuántas líneas quieres que tenga tu marco de asteriscos? ";
  cin >> filas;

  cout << "\n¿Y cuántas columnas? ";
  cin >> columnas;

  int i2 = 1;

  cout << "\nAquí está tu marco de asteriscos: \n\n";

  for (int i = 1; i <= filas; i++){  //ciclo para hacer las líneas del marco
    if(i == 1 || i == filas){        //condición para hacer la primera y última línea del marco
      for (int j = 1; j <= columnas; j++){  //se ponen asteriscos en cada columna
        cout << "*";
      }
      cout << endl;
    }
    else{        //si no es la primera ni última línea, entonces son las de enmedio
      cout << "*";  //imprime el primer asterisco
      for (int espacio = 1; espacio <= columnas-2; espacio++){  //ciclo para poner los espacios
        cout << " ";    //ponemos los espacios
      }
      cout << "*";  //ponemos el otro asterisco
      cout << endl;
    }
  }
}