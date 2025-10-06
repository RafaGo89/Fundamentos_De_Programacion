//Rafael Rodríguez Gómez
//Práctica 59 - Obtener Posición de un Valor en un arreglo

#include <iostream>

using namespace std;

int main() {
  int tam, buscar, posicion, fallos, bandera;

  setlocale(LC_ALL, "spanish");

  cout << "Ingrese el tamaño del arreglo: ";
  cin >> tam;
  cout << endl;

  int arreglo[tam];

  for(int i = 0; i < tam; i++){
    cout << "Ingrese el valor " << i+1 << ": ";
    cin >> arreglo[i];
  }

  do{
    cout << endl << "*El arreglo es: ";
  for(int i=0; i<tam; i++){
    cout << arreglo[i] << " ";
  }
    
    cout << "\n\n¿Quá valor quieres buscar en el arreglo? ";
    cin >> buscar;

    fallos = 0;
    for(int i=0; i < tam; i++){  //algoritmo para buscar posición en un arreglo
      if(buscar == arreglo[i]){
        posicion = i;
        i = tam;
      }
      else{
      fallos++;
      }
    }

    if(fallos == tam){
      cout << "\n¡Error! Valor no encontrado en el arreglo";
      cout << "\n\n¿Quieres buscar un valor de nuevo? (Escriba 1 para sí, 0 para no) ";
      cin >> bandera;
    }
    else{
      cout << "\nEl valor " << buscar << " está en la posición " << posicion;
      bandera = 0;
    }
    
  }while(bandera == 1);
}