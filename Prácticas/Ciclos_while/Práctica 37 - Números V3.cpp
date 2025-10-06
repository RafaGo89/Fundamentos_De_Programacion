//Rafael Rodríguez Gómez
//Práctica 37 - Números V3

#include <iostream>

using namespace std;

int main() {
  int num, par, impar, aux, bandera;

  setlocale(LC_ALL, "spanish");

  do{
    cout<<"\nIngrese un número de 5 digitos: ";
    cin>>num;
    par=0;
    impar=0;
    aux=10000;

    if(num>99999 || num<10000){
    cout<<"\n!Ingrese un número de 5 digítos!";
    }
    else{
      do{
        if((num/aux)%2==0){
          par++;
        }  
        else{
          impar++;
        }
      aux/=10;
    }while(aux>0);
      cout<<"\nEl número "<<num<<" tiene "<<par<<" digíto(s) par(es) y "<<impar<<" digíto(s) impar(es)";
    }
    
    cout<<"\n\n¿Quieres intentarlo de nuevo? (Escriba 1 para sí y 0 para no) ";
    cin>>bandera;
  }while(bandera==1);
  
}