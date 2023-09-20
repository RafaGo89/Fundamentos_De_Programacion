//Rafael Rodríguez Gómez
//Práctica 22 - Herencias

#include <iostream>

using namespace std;

int main() {
  int resp, hijos;
  float herencia;
  
  setlocale(LC_ALL, "spanish");

  cout<<"*Repartición de la herencia*";

  cout<<"\n\n¿De cuánto es la herencia? $";
  cin>>herencia;

  cout<<"\n¿El cónyuge tiene hijos? (escriba 1 para sí, 0 para no) ";
  cin>>resp;

  if(resp==1){
    cout<<"\n¿Cuántos hijos son? "; 
    cin>>hijos;
    
    cout<<"\n\n*Herencia total: $"<<herencia
    <<"\n*3% de comisión para el notario: $"<<herencia*0.03
    <<"\n*La mitad para el conyuge: $"<<(herencia*0.97)/2
    <<"\n*De la otra mitad, cada hijo recibirá: $"<<((herencia*0.97)/2)/hijos;
  }
  else{
    cout<<"\n\n*Herencia total: $"<<herencia
    <<"\n*5% de comisión para el notario: $"<<herencia*0.05
    <<"\n*Resto de la herencia para el cónyuge: $"<<herencia*0.95;
  }
    
}