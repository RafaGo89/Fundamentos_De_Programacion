#include <iostream>
using namespace std;


int main(){
    int a[4][3]; // 4 Filas(jugadores) 3 Columnas(dados)


    for(int i=0; i<4 ; i++){//filas  (O jugadores)
        for (int j=0; j<3 ; j++){//columnas (O Dados)
            cout<<"Dame el valor de la fila "<<i<<" columna "<<j<<": ";
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<4 ; i++){//filas
        for (int j=0; j<3 ; j++){//columnas
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}

