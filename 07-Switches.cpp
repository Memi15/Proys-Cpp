#include <iostream>

using std::cout;

int main() {

    int mes;

    cout << "Escribe un numero de un mes del año (1-12)";
    std::cin >> mes;

//Switch se una como una mejor alternativa al if cuando hay multipples casos en los que la variable cambia de valor (Es mas eficiente y facil de leer)
//Estructura de switch
    switch(mes){
        case 1:
            cout << "Estás en Enero";
            break; //Break sirve para que una vez que se cumpla el caso, el programa salga del switch, de lo contrario se ejecutaran todos los casos posteriores
        case 2:
            cout << "Estás en Febrero";
            break;
        case 3:
            cout << "Estás en Marzo";
            break;
        case 4:
            cout << "Estás en Abril";
            break;
        case 5:
            cout << "Estás en Mayo";
            break;
        case 6:
            cout << "Estás en Junio";
            break;
        case 7:
            cout << "Estás en Julio";
            break;
        case 8:
            cout << "Estás en Agosto";
            break;
        case 9:
            cout << "Estás en Septiembre";
            break;
        case 10:
            cout << "Estás en Octubre";
            break;
        case 11:
            cout << "Estás en Noviembre";
            break;
        case 12:
            cout << "Estás en Diciembre";
            break;
        default://Default es como un else, si el valor de la variable no entra en ninguno de los casos anteriores entonces entrara en default
            cout << "Invalido";
    }

return 0;
}