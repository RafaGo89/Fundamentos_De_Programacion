//Rafael Rodr�guez G�mez
//Pr�ctica 5 - Calificaciones del Semestre

#include <iostream>

using namespace std;

main(){
	int tarea1, tarea2, tarea3, tarea4, tarea5, pract1, 
	pract2, pract3, exam1, exam2, proj, 
	totalT, totalP, totalE, projT;
	
	setlocale(LC_ALL, "spanish");
	
	cout<<"*Calificaciones del semestre* \n\n";
	
	cout<<"Ingrese la calificaci�n de la tarea 1: ";
	cin>>tarea1;
	
	cout<<"\nIngrese la calificaci�n de la tarea 2: ";
	cin>>tarea2;
	
	cout<<"\nIngrese la calificaci�n de la tarea 3: ";
	cin>>tarea3;
	
	cout<<"\nIngrese la calificaci�n de la tarea 4: ";
	cin>>tarea4;
	
	cout<<"\nIngrese la calificaci�n de la tarea 5: ";
	cin>>tarea5;
	
	cout<<"\n\nIngrese la calificaci�n de la pr�ctica 1: ";
	cin>>pract1;
	
	cout<<"\nIngrese la calificaci�n de la pr�ctica 2: ";
	cin>>pract2;
	
	cout<<"\nIngrese la calificaci�n de la pr�ctica 3: ";
	cin>>pract3;
	
	cout<<"\n\nIngrese la calificaci�n del primer examen: ";
	cin>>exam1;
	
	cout<<"\nIngrese la calificaci�n del segundo examen: ";
	cin>>exam2;
	
	cout<<"\n\nIngrese la calificaci�n del proyecto: ";
	cin>>proj;
	
	totalT=((tarea1+tarea2+tarea3+tarea4+tarea5)*25)/500;
	
	totalP=((pract1+pract2+pract3)*35)/300;
	
	totalE=((exam1+exam2)*20)/200;
	
	projT=(proj*20)/100;
	
	cout<<"\n\n\n*La calificaci�n total de las tareas es: "<<totalT<<"*"<<endl;
	cout<<"\n\n*La calificaci�n total de las pr�cticas es: "<<totalP<<"*"<<endl;
	cout<<"\n\n*La calificaci�n total de los examenes es: "<<totalE<<"*"<<endl;
	cout<<"\n\n*La calificaci�n total del proyecto es: "<<projT<<"*"<<endl;
	
	cout<<"\n\n*La calificaci�n total es: "<<totalT+totalP+totalE+projT<<"*"
	<<endl;
	
	}
