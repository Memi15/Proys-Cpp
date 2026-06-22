#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    /*
    //Hipotenusa de un triangulo
    float a;
    float b;
    float c;
    cout<<"Ingrese el lado A: ";
    cin>> a;
    cout<<"Ingrese el lado B: ";
    cin>> b;
    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);
    c = sqrt(pow(a,2) + pow(b,2)); //Forma compacta
    cout<<"La hipotenusa es "<<c;
    */

    char op;
    float num1;
    float num2;
    float resultado;

    cout << "################ CALCULADORA ##################\n";

    cout << "Ingrese el operador (+,-,*,/): ";
    cin >> op;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(op){
        case '+':
            resultado = num1 + num2;
            cout << "El resultado es: "<<resultado;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "El resultado es: "<<resultado;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "El resultado es: "<<resultado;
            break;
        case '/':
            if(num2 == 0){
                cout << "No se puede dividir entre 0";
                break;
            }
            else {
                resultado = num1 / num2;
                cout << "El resultado es: "<<resultado;
                break;
            }
        default:
            cout << "Operador invalido";
    }

    cout << "\n###############################################";
return 0;
}