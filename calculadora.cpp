#include <bits/stdc++.h>

using namespace std;

int main() {

ios_base::sync_with_stdio(0);
int pos;
float suma, resta, multiplicacion, division, num1, num2;
float resultadof;
string si, yes, no;
do
{


cout <<"Escoja la perra operacion\n";
cout <<"1.-Suma \n2.-Resta \n3.-Division \n4.-multiplicacion\n5.-Salir\n";

cin>> pos;

    switch(pos){
        case 1:
            cout<< "suma.\n";
            cout<<"ingrese el primer digito: ";
            cin>> num1;
            cout<<"ingrese el segundo digito: ";
            cin>> num2;

            resultadof= num1 + num2;
            cout<<"resultado: " <<resultadof;

            break;

                case 2:
                cout<< "resta. \n";
                cout<<"ingrese el primer digito: ";
                cin>> num1;
                cout<<"ingrese el segundo digito: ";
                cin>> num2;

                resultadof= num1 - num2;
                cout<<"resultado: " <<resultadof;
                
                break;

                    case 3:
                    cout<< "division. \n";
                    cout<< "ingrese el primer digito: ";
                    cin>> num1;
                    cout<< "ingrese el segundo digito: ";
                    cin>> num2;

                    resultadof= num1 / num2;
                    cout<<"resultado: " <<resultadof;

                    break; 

                        case 4:
                        cout<< "multiplicacion. \n";
                        cout<< "ingrese el primer digito: ";
                        cin>> num1;
                        cout<< "ingrese el segundo digito: ";
                        cin>> num2;

                        resultadof= num1 * num2;
                        cout<< "resultado: " <<resultadof;

                        break;
                            case 5:
                            cout<< "seguro que desea salir?(si/no): ";
                            cin>> yes;
                            if(yes=="si")
                            exit(0);
                            else
                            cout<<"ok\n";
    }
                        cout<< " \n desea realizar otra operacion?: ";
                        cin>> si;
                        if(no=="no")
                        exit(0);
} while (si=="si");

                            

}