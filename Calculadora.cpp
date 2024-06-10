#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    char operador;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
                return 0;
            }
            break;
        default:
            cout << "Error: Operador no válido." << endl;
            return 0;
    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}