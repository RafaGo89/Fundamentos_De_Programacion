//Rafael Rodríguez Gómez
//Práctica 19 - Triángulos

#include <iostream>

using namespace std;

int main() {
  float lad1, lad2, lad3;

  setlocale(LC_ALL, "spanish");

  cout<<"Medida del primer lado del triangulo: ";
  cin>>lad1;

  cout<<"\nMedida del segundo lado del triangulo: ";
  cin>>lad2;

  cout<<"\nMedida del tercer lado del triangulo: ";
  cin>>lad3;

  if(lad1!=lad2 && lad2!=lad3 && lad3!=lad1){
      cout<<"\nEs un triángulo escaleno";
    }
  else if(lad1==lad2 && lad2==lad3){
    cout<<"\nEs un triángulo equilatero";
  }
  else if(lad1==lad2 || lad2==lad3 || lad3==lad1 ){
    cout<<"\nEs un triángulo isósceles";
  }
  
}