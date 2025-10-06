//Rafael Rodríguez Gómez
//Práctica 62 - manejo de Arreglos

#include <iostream>
#include <time.h>

using namespace std;

int main() {
  int arreglo[20], aleatorio, par = 0, impar = 0, sumpar = 0, sumimpar = 0, max, min,
  pos1, pos2;

  setlocale(LC_ALL, "spanish");

  srand(time(NULL));

  for(int i = 0; i < 20; i++){  //creación de valores del arreglo aleatoriamente
    aleatorio = rand () % 81;
    arreglo[i] = aleatorio;

    if(arreglo[i] % 2 == 0){
      par++;                        //determinar números pares
      sumpar += arreglo[i];         //sumar números pares
      
      if(par == 1){                 //Asignar el valor mayor al primer número par
        max = arreglo[i];
      }
      if(arreglo[i] >= max){         //Comparar los valores pares para sacar el mayor
        max = arreglo[i];
        pos1 = i;
      }
    }
    else{
      impar++;                      //determinar números impares
      sumimpar += arreglo[i];       //sumar números impares

      if(impar == 1){              //Asignar el valor menor al primer número impar
        min = arreglo[i];
      }
      if(arreglo[i] <= min){        //Comparar los valores impares para sacar el menor
        min = arreglo[i];
        pos2 = i;
      }
    }
  }

  cout << endl << "*El arreglo es: ";
  for(int i = 0; i < 20; i++){           //Imprimir el arreglo
    cout << arreglo[i] << " ";
  }

  cout << "\n\n*Hay " << par << " números pares en el arreglo" <<    //Imprimir cantidad de valores pares
  "\n*Hay " << impar << " números impares en el arreglo";         //Imprimir cantidad de valores impares

  cout << "\n\n*Los números pares del arreglo son: ";         //Imprimir valores pares
  for(int i = 0; i < 20; i++){
    if(arreglo[i] % 2 == 0){
      cout << arreglo[i] << " ";
    }
  }
  cout << "\n*Y la suma de esos números es: " << sumpar;  //imprimir la suma de los pares

  cout << "\n\n*Los números impares del arreglo son: ";         //Imprimir valores impares
  for(int i = 0; i < 20; i++){
    if(arreglo[i] % 2 != 0){
      cout << arreglo[i] << " ";
    }
  }
  cout << "\n*Y la suma de esos números es: " << sumimpar;  

  cout << "\n\n*El número par mayor es: " << max << " y su posición en el arreglo es " << pos1;
  cout << "\n*El número impar menor es: " << min << " y su posición en el arreglo es " << pos2;
}