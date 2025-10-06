//Rafael Rodríguez Gómez
//Práctica 6 - Billetes y Monedas

#include <iostream>

using namespace std;

main(){
    int pesos, camb1, resid1, camb2, resid2, camb3, resid3,
    camb4, resid4, camb5, resid5, camb6, resid6, camb7, resid7,
    camb8, resid8, camb9, resid9, camb10, resid10;
    setlocale(LC_ALL, "spanish");

    cout<<"*Cambio en monedas y billetes*\n\n";

    cout<<"Introduzca una cantidad pesos: ";
    cin>>pesos;

    camb1=pesos/1000;
    resid1=pesos%1000;

    camb2=resid1/500;
    resid2=resid1%500;

    camb3=resid2/200;
    resid3=resid2%200;

    camb4=resid3/100;
    resid4=resid3%100;

    camb5=resid4/50;
    resid5=resid4%50;

    camb6=resid5/20;
    resid6=resid5%20;

    camb7=resid6/10;
    resid7=resid6%10;

    camb8=resid7/5;
    resid8=resid7%5;

    camb9=resid8/2;
    resid9=resid8%2;

    camb10=resid9/1;
    resid10=resid9%1;

    cout<<"\nCantidad: $"<<pesos<<endl;
    cout<<camb1<<" Billete(s) de $1000\n";
    cout<<camb2<<" Billete(s) de $500\n";
    cout<<camb3<<" Billete(s) de $200\n";
    cout<<camb4<<" Billete(s) de $100\n";
    cout<<camb5<<" Billete(s) de $50\n";
    cout<<camb6<<" Billete(s) de $20\n";
    cout<<camb7<<" Moneda(s) de $10\n";
    cout<<camb8<<" Moneda(s) de $5\n";
    cout<<camb9<<" Moneda(s) de $2\n";
    cout<<camb10<<" Moneda(s) de $1\n";

}
