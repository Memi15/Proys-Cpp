
#include <iostream>

using std::cout;
int main() {

    //Operador ternario ?: = es un reemplazo para usar una declaración if-else
    //Condición ? expesión1 : expresión2;

    int calificacion = 73;

    calificacion >= 70 ? cout << "Pasaste!\n" : cout << "Reprobaste\n";


    int numero = 8;
    //numero % 2 dara 0 o 1 lo que es igual a false y true
    numero % 2 ? cout << "impar\n" : cout << "par\n";

    
    bool hambre = true;

    hambre ? cout << "Tienes hambre\n" : cout << "Estas lleno\n";

return 0;
}
