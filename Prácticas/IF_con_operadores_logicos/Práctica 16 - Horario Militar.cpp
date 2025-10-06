//Rafael Rodríguez Gómez
//Práctica 16 - Horario Militar

#include <iostream>

using namespace std;

int main(){
  int hora;
  
  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese una hora en formato militar (0 a 23): ";
  cin>>hora;

  if(hora==12){
    cout<<"\nLas "<<hora<<" hrs son las 12 pm";
  }
  else if(hora<12){
    if(hora==0){
      cout<<"\nLas "<<hora<<" hrs son las 12 am";
    }
    else{
      cout<<"\n Las "<<hora<<" hrs son las "<<hora<<" am";
    }
  }
  else if(hora<=23){
    cout<<"\nLas "<<hora<<" hrs son las "<<hora-12<<" pm";
  }
  else{
    cout<<"\nValor no válido";
  }
  
}

    