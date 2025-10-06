//Rafael Rodríguez Gómez
//Práctica 36 - Decimal a Binario

#include <iostream>

using namespace std;

int main() {
  int num, num2, bandera, resd, coci;
  string bina;
  
  setlocale(LC_ALL, "spanish");

  cout<<"*Conversión decimal positivo a binario*\n";

  do{
    cout<<"\nIntroduzca un número entero positivo: ";
    cin>>num;
    num2=num;
    resd=0;
    coci=0;
    bina="";

    if(num<0){
      cout<<"\n¡Introduzca un valor positivo!";
    }
    else{
      do{
      if(num%2==0){
        bina="0 "+bina;
      }
      else{
        bina="1 "+bina;
      }
      num/=2;  
    }while(num>0);
    cout<<"\nLa equivalencia de "<<num2<<" en binario es: "<<bina;
    }

    cout<<"\n\n¿Quieres intentarlo de nuevo? (Escribe 1 para sí y 0 para no) ";
    cin>>bandera;
  }while(bandera==1);
}