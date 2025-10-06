//Rafael Rodríguez Gómez
//Práctica 27 - Signo Zodiacal

#include <iostream>

using namespace std;

int main() {
  int dia, mes;

  cout<<"*Tu signo zodiacal*\n\n";
  cout<<"¿En qué mes naciste? (escribe el número de mes)\n";
  cin>>mes;

  cout<<"\n¿En que día naciste?\n";
  cin>>dia;

  switch(mes){
    case 1:
      if(dia>0 && dia<=31){
        if(dia>20){
          cout<<"\nEres acuario";
        }
        else{
        cout<<"\nEres capricornio";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 2:
      if(dia>0 && dia<=29){
        if(dia>19){
          cout<<"\nEres piscis";
        }
        else{
          cout<<"\nEres acuario";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 3:
      if(dia>0 && dia<=31){
        if(dia>20){
          cout<<"\nEres aries";
        }
        else{
          cout<<"\nEres piscis";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 4:
      if(dia>0 && dia<=30){
        if(dia>20){
          cout<<"\nEres tauro";
        }
        else{
        cout<<"\nEres aires";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 5:
      if(dia>0 && dia<=31){
        if(dia>20){
          cout<<"\nEres géminis";
        }
        else{
        cout<<"\nEres tauro";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 6:
      if(dia>0 && dia<=30){
        if(dia>21){
          cout<<"\nEres cáncer";
        }
        else{
          cout<<"\nEres géminis";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 7:
      if(dia>0 && dia<=31){
        if(dia>22){
          cout<<"\nEres leo";
        }
        else{
          cout<<"\nEres cáncer";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 8:
      if(dia>0 && dia<=31){
        if(dia>23){
          cout<<"\nEres virgo";
        }
        else{
          cout<<"\nEres leo";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 9:
      if(dia>0 && dia<=30){
        if(dia>22){
          cout<<"\nEres libra";
        }
        else{
          cout<<"\nEres virgo";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 10:
      if(dia>0 && dia<=31){
        if(dia>22){
          cout<<"\nEres escorpio";
        }
        else{
          cout<<"\nEres libra";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 11:
      if(dia>0 && dia<=30){
        if(dia>22){
          cout<<"\nEres sagitaro";
        }
        else{
          cout<<"\nEres escorpio";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    case 12:
      if(dia>0 && dia<=31){
          if(dia>21){
          cout<<"\nEres capricornio";
        }
        else{
          cout<<"\nEres sagitario";
        }
      }
      else{
        cout<<"\n¡Día ingresado no válido";
      }
    break;

    default:
      cout<<"\n¡Mes ingresado no válido!";
  }
}