#include <iostream>
using namespace std;
main (){
    float c;
    cout<<"Calif: "; cin>>c;

    char opc;
    cout<<"Estas seguro S o N: ";  cin>>opc;

    if( opc=='s' || opc=='S' ){
        cout<<"SI ESTOY SEGURO!";
    }






    if(c==100){
        cout<<"E";
    }
    else if(c>=80 && c<100){
        cout<<"MB";
    }
    else if(c>=60 && c<80){
        cout<<"B";
    }
    else if(c>=40 && c<60){
        cout<<"M";
    }
    else if(c>=0 && c<40){
        cout<<"P";
    }
    else{
        cout<<"Calif erronea";
    }



    /*
    if(c==100){
        cout<<"E";
    }
    else if(c>=80){
        cout<<"MB";
    }
    else if(c>=60){
        cout<<"B";
    }
    else if(c>=40){
        cout<<"M";
    }
    else{
        cout<<"P";
    }
    */



}
