//Rafael Rodríguez Gómez
//Práctica 44 - Alfabeto Doble

#include <iostream>

using namespace std;

int main() {
  
  cout<<"*Alfabeto doble*\n\n";
  
  for(char letra='A', letra2='a'; letra<='Z'; letra++,letra2++){
    cout<<letra<<letra2<<", ";
  }
}