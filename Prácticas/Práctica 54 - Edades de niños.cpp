//Rafael Rodríguez Gómez
//

#include <iostream>

using namespace std;

int main() {
  int tam, resp;

  setlocale(LC_ALL, "spanish");
  
  cout<<"¿Cuántos niños quieres ingresar? ";
  cin>>tam;

  int arreglo[tam];

  for(int cont=0; cont<tam; cont++){
    cout<<"\nIngrese la edad del niño número "<<cont+1<<": ";
    cin>>arreglo[cont];
  }

  cout<<"\n¿De qué niño te gustaría ver la edad? ";
  cin>>resp;
  cout<<"\n*El niño número "<<resp<<" tiene "<<arreglo[resp-1]<<" años";
}