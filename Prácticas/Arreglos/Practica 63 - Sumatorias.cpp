//Rafael Rodríguez Gómez
//Practica 63 - Sumatorias

#include <iostream>
#include <ctime>

using namespace std;

int main(){
  int aleatorio, arreglo [5] [6], suma, total = 0;

  srand(time(NULL));

  for (int filas = 0; filas < 4; filas++){            //creación del arreglo con valores aleatorios
    for (int columnas = 0; columnas < 5; columnas++){
      aleatorio = 10 + rand () % (24 - 10);
      arreglo [filas] [columnas] = aleatorio;
    }
  }

  
  for (int filas = 0; filas < 4; filas++){  //arreglo para suma de filas
    suma = 0;                               //iniciamos la suma de las filas siempre en 0
    for (int columnas = 0; columnas < 5; columnas++){
      suma += arreglo [filas] [columnas];     //sumamos los valores de una fila fija y nos movemos por las columnas
    } 
    total += suma;                  //sumamos los totales de las filas 
    arreglo [filas] [5] = suma;    
  }
  arreglo [4] [5] = total;    //asignación del valor total 

  
  for (int columnas = 0; columnas < 5; columnas++){   //arreglo para suma de columnas
    suma = 0;                                         //iniciamos la suma de las columnas siempre en 0
    for (int filas = 0; filas < 4; filas++){
      suma += arreglo [filas] [columnas];  //sumamos los valores de una columnas fija y nos movemos por las filas
    }
    arreglo [4] [columnas] = suma;
  }

  
  for (int filas = 0; filas < 5; filas++){             //mostrar el arreglo
    for (int columnas = 0; columnas < 6; columnas++){
      cout << arreglo [filas] [columnas] << "  ";
    }
    cout << endl;
  }
  
}