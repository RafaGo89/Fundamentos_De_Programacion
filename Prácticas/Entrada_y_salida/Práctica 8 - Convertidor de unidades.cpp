//Rafael Rodríguez Gómez
//Prática 8 - Convertidor de unidades

#include <iostream>

using namespace std;

main(){
	float metros;
	setlocale(LC_ALL, "spanish");
	
	cout<<"Introduzca una distancia en metros: ";
	cin>>metros;
	
	cout<<"\nSu equivalencia en yardas es: "<<metros/0.914<<endl<<endl;
	
	cout<<"Su equivalencia en millas es: "<<metros/1609.344<<endl<<endl;
	
	cout<<"Su equivalencia en pies es: "<<metros/0.3048<<endl<<endl;
	
}

