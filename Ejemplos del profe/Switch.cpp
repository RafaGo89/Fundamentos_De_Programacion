#include<iostream>
using namespace std;
 main(){
    char opc;

    cout<<"Dame el día de la semana: ";
    cin>>opc;

    switch(opc){
        case 'l': case 'L':
            cout<<"Lunes";
            break;
        case 'm': case 'M':
            cout<<"Martes";
            break;
        case 'i':
            cout<<"Miercoles";
            break;
        case 'j':
            cout<<"Jueves";
            break;
        case 'v':
            cout<<"Viernes";
            break;
        case 's':
            cout<<"Sabado";
            break;
        case 'd':
            cout<<"Domingo";
            break;
        default:
            cout<<"Error";
    }



 }


