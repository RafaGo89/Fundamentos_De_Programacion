//Rafael Rodríguez Gómez
//Práctica 28 - Signo zodiacal Chino

#include <iostream>

using namespace std;

int main() {
  int anno, resd;
  
  setlocale(LC_ALL, "spanish");

  cout<<"*Signo zodiacal chino*\n";

  cout<<"\n¿En que año naciste?\n";
  cin>>anno;

  resd=anno%12;

  switch (resd){
    case 4: case -8:
      cout<<"\nEres Rata";
    break;

    case 5: case -7:
      cout<<"\nEres Búfalo";
    break;

    case 6: case -6:
      cout<<"\nEres Tigre";
    break;

    case 7: case -5:
      cout<<"\nEres Conejo";
    break;

    case 8: case -4:
      cout<<"\nEres Dragon";
    break;

    case 9: case -3:
      cout<<"\nEres serpiente";
    break;

    case 10: case -2:
      cout<<"\nEres Caballo";
    break;

    case 11: case -1:
      cout<<"\nEres Cabra";
    break;

    case 0:
      cout<<"\nEres Mono";
    break;

    case 1: case -11:
      cout<<"\nEres Gallo";
    break;

    case 2: case -10:
      cout<<"\nEres Perro";
    break;

    case 3: case -9:
      cout<<"\nEres Cerdo";
    break;

    default:
      cout<<"\n¡Error";
  }

}