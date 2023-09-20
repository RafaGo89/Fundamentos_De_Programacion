//Rafael Rodríguez Gómez
//Práctica 21 - Ordenar Números

#include <iostream>

using namespace std;

int main() {
  int A, B, C, mayor, menor, medio;

  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese el primer valor: ";
  cin>>A;
  mayor=A;

  cout<<"\nIngrese el segundo valor: ";
  cin>>B;
  if(mayor>B){
    menor=B;
  }
  else{
    mayor=B;
    menor=A;
  }

  cout<<"\nIngrese el tercer valor: ";
  cin>>C;
  if(mayor>C){
    if(menor<=C){
      medio=C;
    }
    else{
      medio=menor;
      menor=C;
    }
  }
  else{
    medio=mayor;
    mayor=C;
  }

  cout<<endl<<"A= "<<A<<endl<<"B= "<<B<<endl<<"C= "<<C;

  cout<<"\n\n*Reordenamiento de valores*\n";

  A=menor;
  B=medio;
  C=mayor;

  cout<<endl<<"A= "<<A<<endl<<"B= "<<B<<endl<<"C= "<<C;

}