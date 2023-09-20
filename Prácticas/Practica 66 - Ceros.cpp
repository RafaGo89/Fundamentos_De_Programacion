//Rafael Rodríguez Gómez
//Practica 66 - Ceros

#include <iostream>
#include <ctime>

using namespace std;

int main() {
  int aleatorio, arreglo [4] [5], encontrado;

  srand(time(NULL));

  for (int filas = 0; filas < 4; filas++){        //creamos el arreglo con valores aleatorios 
    for (int columnas = 0; columnas < 5; columnas++){
      aleatorio = rand () % 10;
      arreglo [filas] [columnas] = aleatorio; 
    }
  }

  for (int filas = 0; filas < 4; filas++){         //mostramos el arreglo
    for (int columnas = 0; columnas < 5; columnas++){
      cout << arreglo [filas] [columnas] << " ";
    }
    cout << endl;
  }

  
  for (int filas = 0; filas < 4; filas++){   //ciclo para mostrar los 0 en las filas
    encontrado = 0;
    for (int columnas = 0; columnas < 5; columnas++){
      if (arreglo [filas] [columnas] == 0){
        encontrado += 1;
      }
    }
    cout << endl << "En la fila " << filas << " hay " << encontrado << " cero(s)";
  }

  cout << endl;

  for (int columnas = 0; columnas < 5; columnas++){   //ciclo para mostrar los 0 en las columnas
    encontrado = 0;
    for (int filas = 0; filas < 4; filas++){
      if (arreglo [filas] [columnas] == 0){
        encontrado += 1;
      }
    }
    cout << endl << "En la columna " << columnas << " hay " << encontrado << " cero(s)";
  }
  
}