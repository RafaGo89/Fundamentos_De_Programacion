//Rafael Rodríguez Gómez
//Práctica 7 - Segundos a HORAS, MINUTOS y SEGUNDOS

#include <iostream>

using namespace std;

main (){
    int segundos;

    setlocale(LC_ALL, "spanish");

    cout<<"*Convertir de segundos a horas, minutos y segundo*\n\n";
    cout<<"Introduzca una cantidad en segundos: ";
    cin>>segundos;

    cout<<"\nSu equivalencia sería: \n"
    <<segundos/3600<<" Hora(s)\n"
    <<(segundos%3600)/60<<" Minuto(s)\n"
    <<((segundos%3600)%60)<<" Segundo(s)\n";

}
