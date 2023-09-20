//Rafael Rodríguez Gómez
//Práctica 34 - Pares e Impares

#include <iostream>

using namespace std;

int main() {
  int sum=0, mult=1, num;
  
  setlocale(LC_ALL, "spanish");

  cout<<"*Sumar números pares hasta que la suma sea mayor a 50 y multiplicar números impares "
  <<"hasta que el resultado sea mayor a 150*\n\n";

  while(sum<=50 || mult<=150){
    cout<<"\nLa suma va en: "<<sum;
    cout<<"\nLa multiplicación va en: "<<mult;
    cout<<"\n\nIngrese un número: ";
    cin>>num;

    if(num%2==0){
      sum+=num;
    }
    else{
      mult*=num;
    }
   }
  cout<<"\nLa suma finalizó en: "<<sum;
  cout<<"\nLa multiplicación finalizó en: "<<mult;

  /*int sum=0,n;

  while(sum<100){
    cout<<"La suma va en: "<<sum<<endl;
    cout<<"\nDame un número: "; cin>>n;
    sum+=n;
  }
  cout<<"\nLa suma terminó en: "<<sum;*/

  
}