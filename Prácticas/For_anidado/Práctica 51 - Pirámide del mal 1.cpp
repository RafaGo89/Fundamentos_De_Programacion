//Rafael Rodríguez Gómez
//Práctica 51 - Pirámide del mal 1

#include <iostream>

using namespace std;

int main() {
  int bandera, n, aux, j, vuelta;

  do{

    cout << "\nIngrese un valor entero: ";
    cin >> n;

    aux = 2;
    vuelta = 1;

    if (n == 1){              
      cout << endl << n << endl;       //Imprimir cuando n vale 1
    }
    else if (n > 1){
      cout << endl << 1 << endl;  //Imprimir primero el 1

      for (int i = 1; i <= n; i++){  //ciclo para controlar saltos de línea
        j = aux + vuelta;          //aumentar la condición para imprimir los números
        for ( ; aux <= n && aux <= j; aux++){  //ciclo para imprimir los números
          cout << aux << " ";
          if (aux == n){
            i = n;
          }
        }
        cout << endl;
        vuelta += 1;            //variable para controlar las vueltas y números a imprimir
      }
    }
    else{
      cout << "\n¡Valor ingresado no válido!";
    }
    
    cout << "\n¿Quieres repetir el programa? (Escribe 1 para sí, 0 para no) ";
    cin >> bandera;
    
    if(bandera == 1){
      system ("clear");
    }
    
  }while (bandera == 1);
  
}