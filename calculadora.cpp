#include <bits/stdc++.h>
using namespace std;

int main(void) {

ios_base::sync_with_stdio(0);
int sum, num1, num2;
char op;

    cout <<" Suma (+) \n Resta (-) \n Multiplicacion (*) \n Division (/)\n\n";
    cout <<" Seleccione una opcion: ";
    cin >> op;

    cout<< "   Inserte los digitos: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+': 
            sum = num1 + num2;
            cout << "\n Suma: " << num1 << " + " << num2 << " = " << sum;
        break;

        case '-': 
            sum = num1 - num2;
            cout << "\n Resta: " << num1 << " - " << num2 << " = " << sum;
        break;

        case '*': 
            sum = num1 * num2;
            cout << "\n Multiplicacion: " << num1 << " * " << num2 << " = " << sum;
        break;

        case '/': 
            sum = num1 / num2;
            cout << "\n Division: " << num1 << " / " << num2 << " = " << sum;
        break;
    }

return 0;
}