//Rafael Rodríguez Gómez
//Práctica 58 - Suma de Arreglos

#include <iostream>
#include <ctime>

using namespace std;

int main() {
  int tam, aleatorio;

  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese el tamaño de los 2 arreglos: ";
  cin>>tam;
  
  int arreglo1[tam], arreglo2[tam], sum[tam];
  
  srand(time(NULL));
  
  for (int i=0; i<tam; i++){
    aleatorio=rand() & 30001; 
    arreglo1[i]=aleatorio;
    
    aleatorio=rand() & 30001; 
    arreglo2[i]=aleatorio;
  }

  cout<<"\n\n*Primer arreglo: ";
  for(int i=0; i<tam; i++){
    cout<<arreglo1[i]<<" ";
  }  

  cout<<"\n\n*Segundo arreglo: ";
  for(int i=0; i<tam; i++){
    cout<<arreglo2[i]<<" ";
  }  

  for(int i=0; i<tam; i++){
    sum[i]=arreglo1[i]+arreglo2[i];
  }

  cout<<"\n\n*Suma de ambos arreglos: ";
  for(int i=0; i<tam; i++){
    cout<<sum[i]<<" ";
  }
}