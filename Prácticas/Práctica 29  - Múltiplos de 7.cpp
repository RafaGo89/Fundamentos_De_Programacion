//Rafael Rodríguez Gómez
//Práctica 29  - Múltiplos de 7

#include <iostream>

using namespace std;

int main() {
  int n=0; 

  while(n<=100){
    if(n%7==0){
      cout<<n<<endl;
    }
    n++;
  }
}