//Rafael Rodríguez Gómez
//Práctica(opcional pt extra) - Línea con cambio de color

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  int asteriscos, x=0;
  HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

  setlocale(LC_ALL, "spanish");

  cout<<"¿Cuántos asteriscos te gustaría generar? ";
  cin>>asteriscos;
  cout<<endl;

  for(int cont=1; cont<=asteriscos; cont++){
    SetConsoleTextAttribute(hConsole, x=rand()%15);
    Sleep(500);
    cout<<"*";
  }
  SetConsoleTextAttribute(hConsole, 7);
}
