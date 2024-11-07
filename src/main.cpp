#include <iostream>
using namespace std;

class Calculadora {
public:
    double calcular(double a, double b, char operador) {
        switch (operador) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/':
                if (b != 0) return a / b;
                cout << "Erro: Divisão por zero não é permitida." << endl;
                return 0;
            default:
                cout << "Operador inválido." << endl;
                return 0;
        }
    }
};

int main() {
    Calculadora calc;
    double num1, num2;
    char operador;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> operador;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    double resultado = calc.calcular(num1, num2, operador);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
