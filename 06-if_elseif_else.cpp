#include <iostream>

using std::cout;

int main()
{
    int edad;

    cout << "Ingresa tu edad: ";
    std::cin >> edad;

    if(edad >= 100){
        cout << "Eres demasiado mayor para entrar a este sitio";
    }
    else if(edad < 0){
        cout << "Todavia no has nacido";
    }
    else if(edad >= 18){
        cout << "Bienvenido al sitio";
    }
    else {
        cout << "No tienes edad suficiente para entrar al sitio";
    }

    //Operadores lógicos
    // && = Comprueba si dos condiciones son verdaderas. AND
    // || = Compreba si al menos una de dos condiciones es verdadera. OR
    // ! = invierte el estado lógico de su operando. NOT


    

return 0;
}