//Rafael Rodríguez Gómez
//Práctica #2 - Manejo básico de Entrada y Salida

#include<iostream>
#include<windows.h>

using namespace std;

main(){
    int anno,actual,edad;
    char nombre[10];
    setlocale(LC_ALL, "spanish");
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

    SetConsoleTextAttribute(hConsole, 6);
    cout<<"¿En que año naciste?\n";
    cin>>anno;

    cout<<"\n¿Cuál es tu primer nombre?\n";
    cin>>nombre;

    cout<<"\n¿Cuál es el año en curso?\n";
    cin>>actual;

    SetConsoleTextAttribute(hConsole, 11);
    cout<<"\nAquí tienes un pastel de cumpleaños "<<nombre<<", disfrútalo :)\n\n";

    edad=actual-anno;

    SetConsoleTextAttribute(hConsole, 6);
          cout<<"     '''''\n";
    SetConsoleTextAttribute(hConsole, 8);
          cout<<"     |||||\n";
    SetConsoleTextAttribute(hConsole, 13);
          cout<<"   @@@@@@@@@\n";
          cout<<"   {~@~@~@~}\n";
          cout<<" @@@@@@@@@@@@@\n";
          cout<<" {~@  "<<nombre<<" @~}\n";
          cout<<" { Felices "<<edad<<"}\n";
          cout<<" @@@@@@@@@@@@@\n";
    SetConsoleTextAttribute(hConsole, 8);
          cout<<"    __) (__   \n";
          cout<<"   /_______\\ \n";

    SetConsoleTextAttribute(hConsole, 7);
}
