//Nota: estos son los operadores aritmeticos básicos
//Para exponente pow(base, exponencial) y raiz sqrt(numero), se necesita una libreria adicional llamada cmath
// aqui ^ es XOR no exponecial
#include <iostream>
#include <cmath>

int main() {

    int estudiantes = 19;
    float estudiantes1 = 19;

//SUMA (+)
    //estudiantes = estudiantes + 2;
    //estudiantes += 2;
    //estudiantes++; // = +=1  pero solo funciona en incrementos de 1 en 1

//RESTA (-)
    //estudiantes = estudiantes - 2;
    //estudiantes -= 2;
    //estudiantes--; //solo resta 1 en 1

//Multiplicación (*)
    //estudiantes = estudiantes * 2;
    //estudiantes *= 2;

//División (/)
    //estudiantes = estudiantes / 2; //Nos dara 9 y no 9.5 porque la variable es int y no puede contener decimales Nota: No redondea solo elimina el decimal aunque fuera 9.9 saldria 9 y no 10
    //estudiantes /= 2;
    //estudiantes1 = estudiantes1 / 2; //Aqui si dara 9.5

//Módulo (%) lo que te queda de una division por ejemplo 9/7 daria 1 pero el resto es 2 que es lo que sobra de la division
    int resto = estudiantes % 2;
    //int resto1 = estudiantes1 % 2; Aqui no se puede ya que resto1 es int y estudiantes1 es float, ambos tienen que ser del mismo tipo


//Jerarquía aritmética
    //1. Dentro del paréntesis, 2. Multiplicación y división, 3. suma y resta

    float operacion = 6 - 5 + 4 * 3 / 2;
    float operacion2 = 6 - (5 + 4) * 3 / 2;

    std::cout<<estudiantes<<std::endl;
    std::cout<<resto<<std::endl;
    std::cout<<operacion<<"\t"<<operacion2<<"\n";


//Funciones utilies

    float x = 5.4;
    float y = 3.56;
    float z;

    //Mayor y menor
    //z = std::max(x, y); //Hallar el mayor de dos numeros
    //z = std::min(x, y); //hallar el menor de dos numeros

    //potencia
    //z = std::pow(2, 3);

    //raiz
    //z = sqrt(9);

    //Absoluto
    //z = std::abs(-30);

    //Redondeo
    //z = std::round(y);

    //Redondeo hacia arriba
    //z = std::ceil(x);

    //Redondeo hacia abajo
    z = std::floor(y);

    std::cout<<z;

return 0;
}