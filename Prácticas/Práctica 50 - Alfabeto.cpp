//Rafael Rodríguez Gómez
//Práctica 50 - Alfabeto

#include <iostream>

using namespace std;

int main() {

  for (char letra = 'z'; letra >= 'a'; letra--){  //ciclo for para ir quitando el último valor del abecedario
    for (char letra2 = letra; letra2 >= 'a'; letra2--){  //ciclo for para imprimir el abecedario desde 
      cout << letra2 << ", ";                            //la letra que la variable "letra" nos indique 
    }                                                    //hasta "a"
    cout << endl << endl;
  }
}