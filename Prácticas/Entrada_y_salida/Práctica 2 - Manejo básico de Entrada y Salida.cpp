//Rafael Rodr�guez G�mez
//Pr�ctica #2 - Manejo b�sico de Entrada y Salida

#include<iostream>
#include<windows.h>

using namespace std;

main(){
    int anno,actual,edad;
    char nombre[10];
    setlocale(LC_ALL, "spanish");
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

    SetConsoleTextAttribute(hConsole, 6);
    cout<<"�En que a�o naciste?\n";
    cin>>anno;

    cout<<"\n�Cu�l es tu primer nombre?\n";
    cin>>nombre;

    cout<<"\n�Cu�l es el a�o en curso?\n";
    cin>>actual;

    SetConsoleTextAttribute(hConsole, 11);
    cout<<"\nAqu� tienes un pastel de cumplea�os "<<nombre<<", disfr�talo :)\n\n";

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
