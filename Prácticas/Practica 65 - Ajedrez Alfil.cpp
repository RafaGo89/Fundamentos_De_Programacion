//Rafael Rodríguez Gómez
//Practica 65 - Ajedrez Alfil

#include <iostream>

using namespace std;

int main() {
  int fila;
  char columna, letra;
  bool cond;

  cout << "*Posiciones del tablero de ajedrez*\n\n"; 

  for (int filas = 0; filas < 8; filas++){   //ciclo para mostrar posiciones en el tablero de ajedrez
    letra = 'a';
    for (int columnas = 0; columnas < 8; columnas++, letra++){
      cout << filas + 1;
      cout << letra << " ";
    }
    cout << endl;
  }

  do{          //ciclo para que solo se acepten número del 1 al 8
    cout << "\n¿En qué fila se encuentra el alfil? (Ingresa un número del 1 al 8) ";
    cin >> fila;
    
    cond = true;

    if (fila < 1 || fila > 8){
      cond = false;
      cout << "\n¡Ingresa un número entre 1 y 8!";
    }
    
  } while (cond == false);

  do{                     //ciclo para que solo se acepten letras de la a la h
    cout << "\n¿En qué columna se encuentra el alfil? (Ingresa una letra de la \"a\" a la \"h\") ";
    cin >> columna;
    
    cond = true;

    if (columna < 'a' || columna > 'h'){
      cond = false;
      cout << "\n¡Ingresa una letra entre a y h!";
    }
    
  } while (cond == false);

  cout << "\n*Desde la posición " << fila << columna << endl;

  for (int i = fila + 1, columna_2 = columna + 1; i < 9; i++, columna_2++){   //ciclo para diagonal hacia
    for (char j = 'a'; j <= 'h'; j++){                                       //abajo a la derecha
      if (j == columna_2){
        cout << endl;
        cout << "El alfin se puede mover a la dirección " << i << char(columna_2);
        break;
      }
    }
  }


  for (int i = fila - 1, columna_2 = columna - 1; i > 0; i--, columna_2--){ //ciclo para diagonal hacia 
    for (char j = 'h'; j >= 'a'; j--){                                     //arriba a la izquierda
      if (j == columna_2){
        cout << endl;
        cout << "El alfin se puede mover a la dirección " << i << char(columna_2);
        break;
      }
    }
  }

  for (int i = fila + 1, columna_2 = columna - 1; i < 9; i++, columna_2--){   //ciclo para diagonal hacia
    for (char j = 'h'; j >= 'a'; j--){                                      //abajo a la izquierda
      if (j == columna_2){
        cout << endl;
        cout << "El alfin se puede mover a la dirección " << i << char(columna_2);
        break;
      }
    }
  }

  for (int i = fila - 1, columna_2 = columna + 1; i > 0; i--, columna_2++){  //ciclo para diagonal hacia
    for (char j = 'a'; j <= 'h'; j++){                                      //arriba a la derecha
      if (j == columna_2){
        cout << endl;
        cout << "El alfin se puede mover a la dirección " << i << char(columna_2);
        break;
      }
    }
  }
  
}