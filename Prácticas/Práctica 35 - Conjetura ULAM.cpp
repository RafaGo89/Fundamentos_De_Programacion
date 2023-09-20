// Rafael Rodríguez Gómez
// Práctica 35 - Conjetura ULAM

#include <iostream>

using namespace std;

int main() {
  int num, band;

  cout<<"*Conjetura ULAM*\n";

  do{
    cout << "\nIngrese un número: ";
    cin >> num;

    if(num<=0){
      cout<<"\n¡Ingrese un número entero positivo!\n";
    }
    else{
      do{
        cout<<num<<", ";
        if(num%2==0){
          num/=2;
        }
        else{
          num*=3;
          num++;
        }
      }while(num!=1);
      cout<<num<<endl;
    }

    cout << "\n¿Te gustaría intentarlo de nuevo? (Escribe 1 para sí, 0 para no) ";
    cin >> band;
  }while(band==1);
}