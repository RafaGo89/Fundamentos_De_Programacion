//Rafael Rodríguez Gómez 
//Práctica 20 - Mayor y Menor

#include <iostream>

using namespace std;

int main(){
  int n1, n2, n3, n4, n5, mayor, menor, sobr1, sobr2, sobr3, lugar2, lugar3, lugar4;

  setlocale(LC_ALL, "spanish");

  cout<<"Ingrese el primer número: ";
  cin>>n1;

  cout<<"\nIngrese el segundo número: ";
  cin>>n2;
  if(n1>n2){   //Esto compara los 2 primeros valores
    mayor=n1;  //Asigna valor el valor mayor a n1 y el menor a n2
    menor=n2;
  }
  else{
    mayor=n2;  //Asigna valor el valor mayor a n2 y el menor a n1, si no se cumple la condición
    menor=n1;
  }

  cout<<"\nIngrese el tercer número: ";
  cin>>n3;          //Algoritmo para asignar si un valor es mayor o menor
  if(mayor>n3){     //Comparo el valor mayor con el nuevo
    if(menor>n3){   //si lo anterior se cumple, comparo el valor menor con el nuevo
      sobr1=menor;  //si se cumple, guarda el valor menor en otra variable
      menor=n3;     //y asigna el nuevo valor menor
    }
    else{
      sobr1=n3;  //si no se cumple la 2da condición, guardo el nuevo valor en otra variable
    }
  }
  else{
    sobr1=mayor; //si no se cumple la 1ra condición, guarda el valor mayor en otra variable
    mayor=n3;    //y asigna el nuevo valor nuevo como el mayor
  }              //se repite la estructura...

  cout<<"\nIngrese el cuarto número: ";
  cin>>n4;
  if(mayor>n4){
    if(menor>n4){
      sobr2=menor;
      menor=n4;
    }
    else{
      sobr2=n4;
    }
  }
  else{
    sobr2=mayor;
    mayor=n4;
  }

  cout<<"\nIngrese el quinto número: ";
  cin>>n5;
  if(mayor>n5){
    if(menor>n5){
      sobr3=menor;
      menor=n5;
    }
    else{
      sobr3=n5;
    }
  }
  else{
    sobr3=mayor;
    mayor=n5;
  }

  //Algoritmo para acomodar en orden ascendente las 3 variables que sobran
  if(sobr1>=sobr2 && sobr1>=sobr3){  //comparo si la varible 1 es la mayor 
    lugar4=sobr1;                  //si se cumple la condición, se le asigna la posición 4 
    if(sobr2>sobr3){           //además, comparo la variable 2
      lugar3=sobr2;            //si es mayor, la variable 2 tendrá la posición 3
      lugar2=sobr3;            //y la varible 3 tendrá la posición 2
    }
    else{                     //si la 2da condición no se cumple
      lugar3=sobr3;           //la varible 2 tendrá la posición 3
      lugar2=sobr2;           //la varible 3 tendrá la posición 2
    }
  }                          //el algoritmo se repite cambiando el nombre de las varibles
  else if(sobr2>=sobr1 && sobr2>=sobr3){
    lugar4=sobr2;
    if(sobr1>sobr3){
      lugar3=sobr1;
      lugar2=sobr3;
    }
    else{
      lugar3=sobr3;
      lugar2=sobr1;
    }
  }
  else if(sobr3>=sobr1 && sobr3>=sobr2){
    lugar4=sobr3;
    if(sobr1>sobr2){
      lugar3=sobr1;
      lugar2=sobr2;
  }
  else{
    lugar3=sobr2;
    lugar2=sobr1; 
    }
  }
  
  cout<<endl<<menor<<","<<lugar2<<","<<lugar3<<","<<lugar4<<","<<mayor<<"; el número mayor es "<<mayor<<", el número menor es "<<menor;
  
}