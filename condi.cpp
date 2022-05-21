#include <bits/stdc++.h>
using namespace std;

int main(){
    int edad, ingreso, impuesto, porcentaje; 

    cout<<"Ingrese su edad: \n";
    cin>>edad;

    if(edad >= 18){
           cout<<"Eres mayor de edad, Ingreso mensual: \n";
            cin>>ingreso;

        if(ingreso >= 4000){
            
            impuesto = (ingreso *.10); 
            porcentaje = ingreso - impuesto ;
            cout<<"impuesto a declarar: "<<impuesto;
            cout<<"\nSueldo restante: "<<porcentaje;
        }
        else{
               cout<<"Ganas muy poco.";
        }
    
    }
    else
        cout<<"Eres menor de edad, saquese alv.";        
}
