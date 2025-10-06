//Rafael Rodríguez Gómez
//Práctica 17 - Cifras

#include <iostream>

using namespace std;

main() {
  int num;

  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese un número: ";
  cin>>num;

  if(num>32700){
    cout<<"\nNúmero no válido";
  }
  else if(num<=9){
    cout<<"\nEl número "<<num<<" tiene 1 dígito";
  }
  else if(num<=99){
    cout<<"\nEl número "<<num<<" tiene 2 digitos";
  }
  else if(num<=999){
    cout<<"\nEl número "<<num<<" tiene 3 digitos";
  }
  else if(num<=9999){
    cout<<"\nEl número "<<num<<" tiene 4 digitos";
  }
  else{
    cout<<"\nEl número "<<num<<" tiene 5 digitos";
    }

}
