//Rafael Rodríguez Gómez
//Práctica 14 - Calificaciones y Mensajes

#include <iostream>

using namespace std;

main(){
	int cal;
	
	setlocale(LC_ALL, "spanish");
	
	cout<<"Introduzca una calificación: \n";
	cin>>cal;
	
	if(cal<60){
		if(cal>39){
			cout<<"\nMal";
		}
		else{
			cout<<"\nPésimo";
		}
	}
	else if(cal<100){
		if(cal<=79){
			cout<<"\nBien";
		}
		else{
			cout<<"\nMuy bien";
		}	
	}
	else{
		cout<<"\nExcelente";
	}
	
}
