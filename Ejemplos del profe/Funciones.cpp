#include<iostream>
using namespace std;

int X,Y;  // X y Y son variables GLOBALES

//prototipo de función
//Estructura de una función --  tipo_dato identificador( 0 o más argumentos );
void saludo();
void saludo2();
void sumaLocal();
void restaGlobal();
void capturar();

main(){
    restaGlobal();
}

//Escribir la funciones
void saludo(){
    int A,B; // A y B variables LOCALES a saludo!!
    cout<<"\nHola a todos"<<endl;
    saludo2();
}
void saludo2(){
    cout<<"Buenos días";
}
void sumaLocal(){

    int A,B; // A y B son variables LOCALES a SUMA()!!!!!!
    cout<<"Dame a suma: "; cin>>A;
    cout<<"Dame b suma: "; cin>>B;
    cout<<"La suma en SUMA() es: "<<A+B;
}
void restaGlobal(){
    capturar();
    cout<<"La resta en RESTA() es: "<<X-Y<<endl;
}
void capturar(){
    cout<<"Dame X: "; cin>>X;
    cout<<"Dame Y: "; cin>>Y;
}

