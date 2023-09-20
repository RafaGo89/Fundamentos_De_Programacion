//Rafael Rodríguez Gómez
//Práctica #3 - Práctica 3 - Área y Volumen -
//Manejo de Expresiones y Entradas y Salidas

#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;

main(){
    float radio, area, radio2, altura, volumen;
    setlocale(LC_ALL, "spanish");
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

    cout<<"*Área y volumen de un cono*\n\n";

    cout<<"Introduzca el radio del cono en centímetros: \n";
    cin>>radio;

    cout<<"\nIntroduzca la altura del cono en centímetros: \n";
    cin>>altura;

    area=M_PI*(pow(radio,2));

    volumen=(M_PI*altura*(pow(radio,2)))/3;


    SetConsoleTextAttribute(hConsole, 6);
    cout<<"\n\nEl área del cono es: "<<area<<" cm^2";
    cout<<"\n\nEl volumen de cono es: "<<volumen<<" cm^3\n";
    SetConsoleTextAttribute(hConsole, 7);0.5x

}
