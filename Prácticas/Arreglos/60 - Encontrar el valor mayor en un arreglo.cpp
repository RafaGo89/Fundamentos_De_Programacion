//Rafael Rodríguez Gómez
//60 - Encontrar el valor mayor en un arreglo

#include <iostream>
#include <time.h>

using namespace std;

int main() {
  int tam, max, aleatorio;

  cout << "¿De qué tamaño te gustaría que fuera el arreglo? ";
  cin >> tam;
  int arreglo[tam];
  
  srand(time(NULL));

  for(int i = 0; i < tam; i++){
    aleatorio = rand () % 51;
    arreglo[i] = aleatorio;

    if(i == 0){
      max = arreglo[i];
    }

    if(arreglo[i] > max){
      max = arreglo[i];
    }
  }

  cout << endl << "El arreglo es: ";
  for(int i = 0; i < tam; i++){
    cout << arreglo[i] << " ";
  }

  cout << "\n\nEl valor mayor de ese arreglo es: " << max;
  
}