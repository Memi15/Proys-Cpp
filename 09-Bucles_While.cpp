#include <iostream>

int main() {
//El bucle while se ejecutara infinitas veces mientras su condición de entrada se cumpla, por lo que tenemos qe tener medidas para salir del bucle y que no se ejecute infinitamente
    std::string nombre;

    while(nombre.empty()){
        std::cout << "Ingresa tu nombre: ";
        //std::getline(std::cin, nombre); //Quitar las // si se desea ejecutar
    }

    std::cout << "Hola " << nombre;

return 0;
}