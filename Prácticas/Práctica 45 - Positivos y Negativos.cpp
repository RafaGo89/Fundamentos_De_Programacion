//Rafael Rodríguez Gómez
//Práctica 45 - Positivos y Negativos

#include <iostream>

using namespace std;

int main(){
  int resp, suma=0, dato=0;
  float promedio=0, sum_acu=0;

  for(int num=1; num<=6; num++){
    cout<<"Ingrese el número "<<num<<": ";
    cin>>resp;

    if(resp>0){
      dato++;
      sum_acu+=resp;
      promedio=sum_acu/dato;
    }
    else{
      suma+=resp;
    }
  }
  cout<<"\nEl promedio de los número positivos fue: "<<promedio;
  cout<<"\n\nLa sumatoria de los números negativos fue: "<<suma;
}