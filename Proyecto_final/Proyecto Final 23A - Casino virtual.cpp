//Rafael Rodríguez Gómez
//Proyecto Final 23A - Casino virtual

#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

int asignacion1, asignacion2, ganador, fila_ganador;

void datos (int [] [8], string [], int, int); //1er argumento recibe el arreglo, 2do  argumento recibe el arreglo para nombres de jugadores, 3er argumento recibe el número de jugadores (filas), 4to argumento recibe el total de columnas

void dados (int [] [8], string [], int, int); //1er argumento recibe el arreglo, 2do argumento recibe el arreglo para nombres de jugadores, 3er argumento recibe número de filas, 4to argumento recibe número de columnas 

void nivel_tirada (int [] [8], int, int); //1er argumento recibe el arreglo, 2do argumento recibe número de filas, 3er argumento recibe número de columnas

void estatus (int [] [8], int, int);  //1er argumento recibe el arreglo, 2do argumento recibe número de filas, 3er argumento recibe número de columnas

void desempate (int [] [8], int, int, int, int);  //1er argumento recibe el arreglo, 2do argumento recibe número de filas, 3er argumento recibe número de columnas, 4to argumento recibe fila 1 a comparar, 5to argumento recibe fila 2 a comparar

int main(){
  int num_jug, pool, marcador;
  
  cout << "------------------------------------------\n"
  <<      "|                                        |\n"  
  <<       "|  ¡Bienvenido al Casino Virtual!        |\n" 
  <<       "|  ¡Esperamos que se la pasen muy bien!  |\n" 
  <<      "|                                        |\n"
  <<      "------------------------------------------";

  do{          ////ciclo para que que se ingrese una cantidad de jugadores válida
    cout << "\n\nPara comenzar, ¿cuántos jugadores jugarán? (mínimo 2, máximo 4) ";
    cin >> num_jug;

    if (num_jug < 2 || num_jug > 4){
      cout << "¡Ingresa de 2 a 4 jugadores!";
    }
    
  } while (num_jug < 2 || num_jug > 4);

  int jugadores [num_jug] [8];  //arreglo para el dinero de los jugadores
  string nombres [num_jug];  //arreglo para el nombre de los jugadores

  for (int i = 0; i < num_jug; i++){
    jugadores [i] [7] = 1;     //llenamos la última columna del arreglo con un 1, que representa que
  }                            //que tiene dinero para jugar, un 0 implica que ya no le queda dinero

  datos (jugadores, nombres, num_jug, 8);

  int resp, continuar;

  do{
    pool = 0;
    continuar = 0;
    marcador = 0;
    do{
      dados (jugadores, nombres, num_jug, 8);  
  
      nivel_tirada (jugadores, num_jug, 8);
  
      estatus (jugadores, num_jug, 8);
  
      system("clear");
      cout << "\n\n*Resultados de la ronda*\n";
      for (int i = 0; i < num_jug; i++){           //ciclo para mostrar los resultados de la ronda
        if (jugadores [i] [7] == 1){
          cout << "\n" << nombres [i] << ": ";
          for (int j = 1; j < 7; j++){
            if (j < 4){
              cout << jugadores [i] [j] << "  ";
            }
          }
          if (jugadores [i] [6] == 100){
            cout << "Ganó  ";
            marcador = 1;    //para identifcar si hubo solo un ganador
          }
          if (jugadores [i] [6] == 101){
            cout << "Perdió  ";
          }
          if (jugadores [i] [6] == 102){
            cout << "Empató  ";
          }
          cout << "$" << jugadores [i] [4];
          cout << endl;
        }
      }
  
      if (marcador == 0){   //si hubo empate guardamos las apuestas en el pool
        for (int i = 0; i < num_jug; i++){
          if (jugadores [i] [7] == 1){
            pool += jugadores [i] [4];
            jugadores [i] [0] -= jugadores [i] [4];  //quitamos lo apostado del dinero de cada jugador
            if (jugadores [i] [0] <= 0){  //si el jugador se queda sin dinero, asignamos un 0 en la última 
              jugadores [i] [7] = 0;     //columna, lo cual no le pertirá jugar más
            }
          }
        }
        cout << "\n\n*Hubo un empate, por lo cual tendremos que volver a jugar*\nEspera un momento...";
        sleep(3);
      }
      else{        //si no hay empates
        for (int i = 0; i < num_jug; i++){
          if (jugadores [i] [7] == 1){
            jugadores [i] [0] -= jugadores [i] [4]; //restamos el dinero de las apuestas a todos los jugadores
            pool += jugadores [i] [4];
          }
        }
        for (int i = 0; i < num_jug; i++){
          if (jugadores [i] [7] == 1){
            if (jugadores [i] [6] == 100){
              cout << "\n\n¡Felicidades " << nombres [i] << " te llevas $" << pool << "!";
              jugadores [i] [0] += pool; //le damos el dinero de la pool al ganador 
              break;
            }
          }
        }
      }
      
    }while(marcador == 0);  //ciclo que se repite hasta que se encuentre un solo ganador

    cout << endl;

    for (int i = 0; i < num_jug; i++){ 
      if (jugadores [i] [7] == 1){
        if (jugadores [i] [0] <= 0){
          cout << "\n*Lo siento " << nombres [i] << " ya no tienes dinero para continuar jugando :(\n";
          jugadores [i] [7] = 0;
        }
        else{
          cout << "\n*" << nombres [i] << " tienes $" << jugadores [i] [0] << " ¿Deseas continuar jugando? (Escribe 1 para sí, 0 para no) ";
          cin >> resp;
          if (resp == 0){
            jugadores [i] [7] = 0;   
          }
          else{
            continuar += 1;
          }
        } 
      }
    }  
    if (continuar > 1){
      cout << "\n\n*Vamos a continuar jugando*";
    }
    sleep(2);
    
    
  }while(continuar > 1);  //ciclo que se repite mientras los jugadores quieran o puedan seguir jugando

  system ("clear");
  cout << "\n\n-------------------------------------------------\n"
  <<      "|                                               |\n"  
  <<       "|         ¡El juego ha acabado!                 |\n" 
  <<       "|    ¡Esperamos que se la hayan pasado bien!    |\n" 
  <<      "|                                               |\n"
  <<      "-------------------------------------------------";
}

void datos (int a [] [8], string b [], int jugadores, int columnas){  //función para ingresar nombre y dinero de los
  for (int i = 0; i < jugadores; i++){              //jugadores
    cout << "\nIngrese el nombre del jugador " << i + 1 << ": ";
    cin >> b [i];
  }

  for (int i = 0; i < jugadores; i++){
    do{   //ciclo para que que se ingrese una cantidad de dinero válida
      
      cout << "\n\n¿Con cuánto dinero jugarás " << b [i] << "? ";
      cin >> a [i] [0];

      if (a [i] [0] < 1){
        cout << "\n¡Cantidad de dinero no válida!";
      }
      
    } while (a [i] [0] < 1);
  }
}

void dados (int a [] [8], string b[], int filas, int columnas){  //función para tirar 3 veces el dado
  srand(time(NULL));
  
  int aleatorio;

  for (int i = 0; i < filas; i++){
    if (a [i] [7] == 1){   //condición para que solo se aplique si el jugador todavía tiene dinero
      system("clear");    //para jugar
      cout << "\nAhora te toca tirar los dados " << b [i] << endl << "Espera un poco...";
      for (int j = 1; j < 4; j++){
        aleatorio = 1 + rand() % (7-1);     //genera un número del 1 al 6
  
        a [i] [j] = aleatorio;
  
        cout << "\nTirada número " << j;
  
        switch (a [i] [j]){
          case 1:
            sleep(3);
            cout << "\n\n"
                 <<"*************\n"
                 <<"*    °°°     *\n"
                 <<"*      °     *\n"
                 <<"*      °     *\n"
                 <<"*      °     *\n"
                 <<"*    °°°°°   *\n"
                 <<"*************";
          break;
  
          case 2:
            sleep(3);
            cout << "\n\n"
                 <<"**************\n"
                 <<"*    °°°°°   *\n"
                 <<"*        °   *\n"
                 <<"*       °    *\n"
                 <<"*      °     *\n"
                 <<"*    °°°°°   *\n"
                 <<"**************";
          break;
  
          case 3:
            sleep(3);
            cout << "\n\n"
                 <<"***************\n"
                 <<"*    °°°°°    *\n"
                 <<"*        °    *\n"
                 <<"*      °°°    *\n"
                 <<"*        °    *\n"
                 <<"*    °°°°°    *\n"
                 <<"***************";
          break;
  
          case 4:
            sleep(3);
            cout << "\n\n"
                 <<"***************\n"
                 <<"*    °   °    *\n"
                 <<"*    °   °    *\n"
                 <<"*    °°°°°    *\n"
                 <<"*        °    *\n"
                 <<"*        °    *\n"
                 <<"***************";
          break;
  
          case 5:
            sleep(3);
            cout << "\n\n"
                 <<"***************\n"
                 <<"*    °°°°°    *\n"
                 <<"*    °        *\n"
                 <<"*    °°°°°    *\n"
                 <<"*        °    *\n"
                 <<"*    °°°°°    *\n"
                 <<"***************";
          break;
  
          case 6:
            sleep(3);
            cout << "\n\n"
                 <<"***************\n"
                 <<"*    °°°°°    *\n"
                 <<"*    °        *\n"
                 <<"*    °°°°°    *\n"
                 <<"*    °   °    *\n"
                 <<"*    °°°°°    *\n"
                 <<"***************";
          break;
        }  
      }
  
      do{
        
        cout << "\n\n¿Cuánto dinero te gustaría apostar? (Tienes $" << a [i] [0] << " " << b [i] << ")\n";
        cin >> a [i] [4];
  
        if (a [i] [4] < 1){
          cout << "\n¡Apuesta algo de dinero, no seas codo!";
        }
        if (a [i] [4] > a [i] [0]){
          cout << "\nSolo Tienes " << a [i] [0] << " pesos " << "¡No puedes apostar más dinero que eso!";
        }
        
      }while (a [i] [4] < 1 || a [i] [4] > a [i] [0]);  //ciclo para que se apueste más de 0 pesos
                                            //pero que no se apueste más dinero del que se tiene
    }
  }
}

void nivel_tirada (int a [] [8], int filas, int columnas){  //función para saber si la tirada es todos número distintos, 2 números iguales o los 3 números iguales
  int iguales;

  for (int i = 0; i < filas; i++){
    if (a [i] [7] == 1){
      iguales = 0;
      for (int j = 2; j < 4; j++){
        if (a [i] [1] == a [i] [j]){
          iguales += 1;
        }
        if (j == 3){                     //condición especial para tiradas que sean así: 4-1-1
          if (a [i] [2] == a [i] [3]){
            iguales += 1;
          }
        }
      }
      if (iguales == 0){  //los 3 números son distintos
        a [i] [5] = 1;
      }
      else if (iguales == 1){  //2 números son iguales
        a [i] [5] = 2;
      }
      else{              //los 3 números son iguales
        a [i] [5] = 3;
      }
    }
  }
}

void estatus (int a [] [8], int filas, int columnas){  //función para encontrar al ganador del juego
  if (a [0] [7] == 1){  //solo se hará si el juagdor 1 todavía juega
    ganador = a [0] [5]; 
    a [0] [6] = 100;    //si se le asigna un 100 ganó, un 101 perdió y 102 empató
    fila_ganador = 0;
  }
  else{     //si el jugadore 2 ya no juega, se buscará al siguiente más próximo para que sea el ganador
    for (int i = 1; i < filas; i++){   //por defecto
      if (a [i] [7] == 1){
        ganador = a [i] [5];
        a [i] [6] = 100;
        fila_ganador = i;
        break;
      }
    }
  }

  for (int i = fila_ganador+1; i < filas; i++){
    if (a [i] [7] == 1){
      if (a [i] [5] > ganador){  //condición para encontrar el ganador en base a su nivel (1,2,3)
        if (a [fila_ganador] [6] != 102){  //condición para que no pierda estatus de empate si ya lo tiene
          a [fila_ganador] [6] = 101;  //la tirada ganadora pierde su estatus de ganadora
        }
        
        ganador = a [i] [5];
        a [i] [6] = 100;
        fila_ganador = i;
      }
      else if (a [i] [5] == ganador){  //condición para encontrar el ganador cuando 2 tiradas tienen el 
        desempate (a, filas, columnas, i, fila_ganador);    //mismo nivel     
          
        a [i] [6] = asignacion1;           
        a [fila_ganador] [6] = asignacion2;  
  
        if (asignacion1 == 100){
          fila_ganador = i;
        }
      }
      else{    //condición para los que perdieron 
        a [i] [6] = 101;
      }
    }
  }
}

void desempate (int a [] [8], int filas, int columnas, int fila1, int fila2){   //función para quitar empates 
  int mayor1 = a [fila1] [1], mayor2 = a [fila2] [1], iguales = 0, suma1 = 0, suma2 = 0, par1, par2;
  
  for (int i = 1; i < 4; i++){  //ciclo for para saber si los 3 números de ambas tiradas son iguales
    for (int j = 1; j < 4; j++){
      if (a [fila1] [i] == a [fila2] [j]){
        iguales += 1;
        break;
      }
    } 
  }

  if (iguales == 3){   //si los 3 números de ambas tiradas fueron iguales, se declara empate (102)
    asignacion1 = 102;
    asignacion2 = 102;
  }
  else if (ganador == 2){                 //desempate para tiradas con 2 números iguales
    for (int j = 2, i= 1; j < 4; j++){//ciclo para encontrar los 2 números en la tirada que son 
      if (a [fila1] [i] == a [fila1] [j]){  //iguales
        par1 = a [fila1] [i];
      }
      if (j == 3){                    //condición especial para tiradas que sean así: 4-1-1
        if (a [fila1] [2] == a [fila1] [3]){
          par1 = a [fila1] [2];
        }
      }
      if (a [fila2] [i] == a [fila2] [j]){
        par2 = a [fila2] [i];
      }
      if (j == 3){
        if (a [fila2] [2] == a [fila2] [3]){
          par2 = a [fila2] [2];
        }
      }
    }
    if (par1 > par2){     //comparamos que par de números es mayor
      if (a [fila2] [6] == 102){  //condición para evitar perder el estatus de empate si lo tiene
        asignacion1 = 100;
      }
      else{
        asignacion1 = 100;  
        asignacion2 = 101;
      }
    }
    else if (par1 == par2){ //si los pares de números son iguales, sumamos todos lo números de la tirada
      for (int i = 1; i < 4; i++){     //para ver cual es mayor
        suma1 += a [fila1] [i];
        suma2 += a [fila2] [i];
      }
      if (suma1 > suma2){
        if (a [fila2] [6] == 102){
          asignacion1 = 100;
        }
        else{
          asignacion1 = 100;  
          asignacion2 = 101;
        }  
      }
      else{
        if (a [fila2] [6] == 102){
          asignacion1 = 101;
        }
        else{
          asignacion1 = 101; 
          asignacion2 = 100;
        }    
      }
    }
    else{
      if (a [fila2] [6] == 102){
        asignacion1 = 101;
      }
      else{
        asignacion1 = 101; 
        asignacion2 = 100;
      }
    }
  }
  else{              //desempate para tiradas de todos números distintos y los 3 números iguales
    for (int i = 1; i < 4; i++){  //Ciclo para encontrar valor mayor en cada tirada
      if (a [fila1] [i] > mayor1){
        mayor1 = a [fila1] [i];
      }
      if (a [fila2] [i] > mayor2){
        mayor2 = a [fila2] [i];
      }
    }
    if (mayor1 == mayor2){  //si ambos números mayores fueron iguales, sumamos las tiradas para saber cual es mayor y por ende el ganador
      for (int i = 1; i < 4; i++){ 
        suma1 += a [fila1] [i];
        suma2 += a [fila2] [i];
      }
      if (suma1 > suma2){
        if (a [fila2] [6] == 102){
          asignacion1 = 100;
        }
        else{
          asignacion1 = 100;  //gana
          asignacion2 = 101;  //pierde
        }
      }
      else{
        if (a [fila2] [6] == 102){
          asignacion1 = 101;
        }
        else{
          asignacion1 = 101;  //pierde
          asignacion2 = 100;  //gana
        }
      }
    }
    else if (mayor1 > mayor2){  //si no se cumple lo anterior, vemos cual de los 2 mayores es mayor y definimos el ganador
      if (a [fila2] [6] == 102){
        asignacion1 = 100;
      }
      else{
        asignacion1 = 100;   
        asignacion2 = 101;
      }
    }
    else{
      if (a [fila2] [6] == 102){
        asignacion1 = 101;
      }
      else{
        asignacion1 = 101;
        asignacion2 = 100;
      }
    }
  }
}