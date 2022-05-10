#include <bits/stdc++.h>

using namespace std;

int main() {

ios_base::sync_with_stdio(0);
int suma, resta, multiplicacion, division, num1, num2, pos, resultado;


cout <<"Escoja la perra operacion\n";
cout <<"1.- Suma \n2.-Resta \n 3.-Division \n 4.-multiplicacion\n";

cin>> pos;

    switch(pos){
        case 1:
            cout<< "suma.\n";
            cout<<"ingrese el primer digito: ";
            cin>> num1;
            cout<<"ingrese el segundo digito: ";
            cin>> num2;

            resultado= num1 + num2;
            cout<<"resultado: " <<resultado;

            break;

                case 2:
                cout<< "resta. \n";
                cout<<"ingrese el primer digito: ";
                cin>> num1;
                cout<<"ingrese el segundo digito: ";
                cin>> num2;

                resultado= num1 - num2;
                cout<<"resultado: " <<resultado;
                
                break;

                    case 3:
                    cout<< "division. \n"

    }



}