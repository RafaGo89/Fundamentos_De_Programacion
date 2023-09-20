//Rafael Rodríguez Gómez 
//61 - Palíndromo

#include <iostream>

using namespace std;

int main() {
  int resp, tam, aciertos = 0;

  setlocale(LC_ALL, "spanish");

  cout << "¿De qué tamaño quieres que sea el arreglo? ";
  cin >> tam;
  int arreglo1[tam], invertido1[tam];
  char arreglo2[tam], invertido2[tam];

  cout << "\n¿Quieres que el arreglo sea de números o de caracteres? (Escribe 1 para números / 2 para caracteres) ";
  cin >> resp;

  switch (resp){
    case 1:                                            //Arreglo de números
      for(int i = 0, i2 = tam-1; i < tam; i++, i2--){  //Llenar el arreglo y su inverso
        cout << "\nIngrese el valor " << i+1 << ": ";
        cin >> arreglo1[i];
        invertido1[i2] = arreglo1[i];
      }

      for(int i = 0, i2 = 0; i < tam; i++, i2++){  //Comparar valores de ambos arreglos para saber
        if(arreglo1[i] == invertido1[i2]){         //si es un palíndromo
          aciertos++;
        }
        else{
          i = tam;         //salir del ciclo en cuanto no sea un palíndromo
        }
      }

      cout << endl << "El arreglo: ";
      for(int i = 0; i < tam; i++){  //Imprimir el arreglo
        cout << arreglo1[i] << " ";
      }

      if(aciertos == tam){
        cout << " es un palíndromo";
      }
      else{
        cout << " no es un palíndromo";
      }
    break;

    case 2:                                             //Arreglo de carácteres
      for(int i = 0, i2 = tam-1; i < tam; i++, i2--){   //Llenar el arreglo y su inverso
        cout << "\nIngrese el carácter " << i+1 << ": ";
        cin >> arreglo2[i];
        invertido2[i2] = arreglo2[i];
      }

      for(int i = 0, i2 = 0; i < tam; i++, i2++){  //Comparar valores de ambos arreglos para saber
        if(arreglo2[i] == invertido2[i2]){         //si es un palíndromo
          aciertos++;
        }
        else{
          i = tam;             //salir del ciclo en cuanto no sea un palíndromo
        }
      }
      
      cout << endl << "El arreglo: \"";
      for(int i = 0; i < tam; i++){  //Imprimir el arreglo
        cout << arreglo2[i];
      }

      if(aciertos == tam){
        cout << "\" es un palíndromo";
      }
      else{
        cout << "\" no es un palíndromo";
      }
    break;

    default: 
      cout << "\n¡Error! Valor ingresado no válido";
  }
} 