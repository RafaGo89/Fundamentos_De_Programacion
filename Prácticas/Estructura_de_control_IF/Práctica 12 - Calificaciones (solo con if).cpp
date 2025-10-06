//Rafael Rodríguez Gómez
//Práctica 12 - Calificaciones (solo con if)

#include <iostream>

using namespace std;

int main(){
  float cal1, cal2, cal3, prom;
  
  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese la primera calificación: ";
  cin>>cal1;

  cout<<"\nIngrese la segunda calificación: ";
  cin>>cal2;

  cout<<"\nIngrese la tercera calificación: ";
  cin>>cal3;

  prom=(cal1+cal2+cal3)/3;

  if(prom>=95){
    prom=100;
  }
  cout<<"\nSu calificación final es: "<<prom;
    
}