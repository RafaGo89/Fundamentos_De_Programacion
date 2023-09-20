//Rafael Rodríguez Gómez 
//Práctica 11 - Cuotas

#include <iostream>

using namespace std;

int main(){
	int resp, insc=100, taller=200;
	
	setlocale(LC_ALL, "spanish");
	
	cout<<"*Cuota a pagar para un congreso*\n\n";
	
	cout<<"¿Eres estudiante? (escribe 1 si lo eres, escribe 0 si no lo eres) \n";
	cin>>resp;
	
	if(resp==1){
		insc=insc*0.5;
    taller=taller*0.5;
	}
	
	cout<<"\nDebes de pagar $"<<insc<<" de inscripción "<<
	"y $"<<taller<<" del taller";
	
}
