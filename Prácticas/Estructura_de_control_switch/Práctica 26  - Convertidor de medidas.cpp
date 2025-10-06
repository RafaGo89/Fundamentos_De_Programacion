//Rafael Rodríguez Gómez
//Práctica 26  - Convertidor de medidas

#include <iostream>

using namespace std;

int main() {
int resp;
float cant;

  setlocale(LC_ALL, "spanish");
  
  cout<<"*Convertidor de medidas*";

  cout<<"<\n\n¿Qué te gustaría convertir? (Ingresa el número de la opción)";
  cout<<"\n1) Unidades de peso \n2) Unidades de longitud\n";
  cin>>resp;

  switch(resp){
    case 1:  //Unidades de peso
      cout<<"\n*Conversión de peso*\n";
      
      cout<<"\nIngrese la cantidad a convertir: ";
      cin>>cant;

      cout<<"\n¿Cuál es la unidad de medida de esa cantidad?\n";
      cout<<"1)Gramos \n2)Libras \n3)Onzas \n4)Piedras\n";
      cin>>resp;

      switch(resp){
        case 1:  //De gramos
          cout<<"\n*Gramos\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Libras \n2)Onzas \n3)Piedras\n";
          cin>>resp;
          switch(resp){ 
            case 1:
              cout<<"\nSu equivalencia en libras es: "<<cant*0.0022;
            break;

            case 2:
              cout<<"\nSu equivalencia en onzas es: "<<cant*0.0353;
            break;

            case 3:
              cout<<"\nSu equivalencia en piedras es: "<<cant*0.000157;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        case 2: //De libras
          cout<<"\n*Libras\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Gramos \n2)Onzas \n3)Piedras\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en gramos es: "<<cant*453.59;
            break;
              
            case 2:
              cout<<"\nSu equivalencia en onzas es: "<<cant*16;
            break;

            case 3:
              cout<<"\nSu equivalencia en piedras es: "<<cant*0.071429;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        case 3:  //De onzas
          cout<<"\n*Onzas\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Gramos \n2)Libras \n3)Piedras\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en gramos es: "<<cant*28.3485;
            break;

            case 2:
              cout<<"\nSu equivalencia en libras es: "<<cant*0.0625;
            break;

            case 3:
              cout<<"\nSu equivalencia en piedras es: "<<cant*0.00446428;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        case 4:  //De piedras
          cout<<"\n*Piedras\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Gramos \n2)Libras \n3)Onzas\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en gramos es: "<<cant*6350.3;
            break;

            case 2:
              cout<<"\nSu equivalencia en libras es: "<<cant*14;
            break;

            case 3:
              cout<<"\nSu equivalencia en onzas es: "<<cant*224;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        default:
          cout<<"\n¡Opción ingresada no válida!";
      }
    break;

    case 2:  //Unidades de longitud
      cout<<"\n*Conversión de longitud*\n";
      
      cout<<"\nIngrese la cantidad a convertir: ";
      cin>>cant;

      cout<<"\n¿Cuál es la unidad de medida de esa cantidad?\n";
      cout<<"1)Milla \n2)Yarda \n3)Pie \n4)Pulgada\n";
      cin>>resp;
      
      switch(resp){
        case 1: //De millas
          cout<<"\n*Millas\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Yardas \n2)Pies \n3)Pulgadas\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en yardas es: "<<cant*1760;
            break;

            case 2: 
              cout<<"\nSu equivalencia en pies es: "<<cant*5280;
            break;

            case 3:
              cout<<"\nSu equivalencia en pulgadas es: "<<cant*63360;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        case 2:  //De yardas
          cout<<"\n*Yardas\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Millas \n2)Pies \n3)Pulgadas\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en millas es: "<<cant*0.00056818;
            break;

            case 2:
              cout<<"\nSu equivalencia en pies es: "<<cant*3;
            break;

            case 3:
              cout<<"\nSu equivalencia en pulgadas es: "<<cant*36;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        case 3:  //De pie
          cout<<"\n*Pies\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Millas \n2)Yardas \n3)Pulgadas\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en millas es: "<<cant*0.00018939;
            break;

            case 2:
              cout<<"\nSu equivalencia en yardas es: "<<cant*0.333333;
            break;

            case 3:
              cout<<"\nSu equivalencia en pulgadas es: "<<cant*12;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        case 4:  //De pulgada
          cout<<"\n*Pulgadas\n¿A qué unidad de medida de te gustaría convertirla?";
          cout<<"\n1)Millas \n2)Yardas \n3)Pies\n";
          cin>>resp;
          switch(resp){
            case 1:
              cout<<"\nSu equivalencia en millas es: "<<cant*0.0000157828;
            break;

            case 2:
              cout<<"\nSu equivalencia en yardas es: "<<cant*0.027778;
            break;

            case 3:
              cout<<"\nSu equivalencia en pies es: "<<cant*0.083333;
            break;

            default:
              cout<<"\n¡Opción ingresada no válida!";
          }
        break;

        default:
          cout<<"\n¡Opción ingresada no válida!";
      }
    break;

    default:
      cout<<"\n¡Opción ingresada no válida!";
  }
}