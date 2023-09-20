//Rafael Rodríguez Gómez
//Práctica 40 - Alfabeto

#include <iostream>

using namespace std;

int main() {
  
  setlocale(LC_ALL, "spanish");

  cout<<"El abecedario\n\n";

  for(char letra='a'; letra<='z' ; letra++ ){
    cout<<letra<<", ";
  }
  
}