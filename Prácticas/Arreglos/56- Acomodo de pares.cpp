//Rafael Rodríguez Gómez 
//56- Acomodo de pares

#include <iostream>

using namespace std;

int main() {
  int tam, par=0, impar=0, sum=0;
  long int mult=1;

  setlocale(LC_ALL, "spanish");

  cout << "¿De qué tamaño quieres que sea el arreglo? ";
  cin >> tam;
  int arreglo[tam];

  for(int i = 0; i < tam; i++){
    cout << "\nValor número "<<i+1<<": ";  //Llenar arreglo original
    cin >> arreglo[i];
    
    if(arreglo[i] % 2 == 0){  //crear tamaño de los arreglos par e impar
      par++;
    }
    else{
      impar++;
    }
  }

  int a[par], b[impar], posicionA = 0, posicionB = 0;
  
  for(int i = 0; i < tam; i++){  
    if(arreglo[i] % 2 == 0){        //Llenar arreglo de pares
      a[posicionA] = arreglo[i];
      sum += a[posicionA];          //sumar valores del arreglo par
      posicionA++;                 
    }
    else{                           //Llenar arreglo de impares
      b[posicionB] = arreglo[i];
      mult *= b[posicionB];         //multiplicar valores del arreglo impar
      posicionB++;                 
    }
  }

  cout << endl << "Arreglo original: ";
  for(int i = 0; i < tam; i++){          //Imprimir arreglo original
      cout << arreglo[i] << " ";
    }

  if(par == 0){
    cout<<"\nNo hubo valores pares para el arreglo\nEl resultado de la suma fue 0";
  }
  else{
    cout << "\n\nArreglo de números pares: ";
    for(int i = 0; i < par; i++){                       //Imprimir arreglo par
      cout << a[i] << " ";
    }
    cout << "\nLa suma de ese arreglo es: " << sum;     //Imprimir suma de arreglo par
  }

  if(impar == 0){
    cout<<"\nNo hubo valores impares para el arreglo\nEl resultado de la multiplicación fue 0";
  }
  else{
    cout<< "\n\nArreglo de números impares: ";   
    for(int i = 0; i < impar; i++){                              //Imprimir arreglo impar
      cout << b[i] << " ";
    }
    cout << "\nLa multiplicación de ese arreglo es: " << mult;  //Imprimir multiplicación de arreglo par
  }
  
}