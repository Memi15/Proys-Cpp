//namespace nos permite tener 2 o mas variables declaradas con el mismo nombre sin error de redeclaración
//Por ejemplo

#include <iostream>

namespace primero {
    int x = 2;
    int y = 7;
}

namespace segundo{
    int x = 5;
    bool y = true;//probar si se puede poner 1 o 0 en lugar de true y false
}

    //Estos using podrian ir dentro del main pero los colocaremos aqui para dejar la funcion main mas limpia
    using namespace std; //Al usar esta funcion ya no es necesario usar std:: en las funciones de la libreria standard
    /*pero se recomienda en la medida de lo posible no usar lo anterior y usar las lineas posteriores ya que al tener demasiadas
    funciones en esta libreria podria haber errores al tener otra libreria con funciones con nombre iguales en proyectos
    muy grandes puede pasar */
    using std::cout; //Aqui solo hace que cout no necesite std:: pero por ejemplo cin si lo necesitaria
    using std::string;

int main () {

    using namespace primero; /*Con esta función puedo hacer que namespace primero sea el nuevo default 
    por lo que no necesitariamos escribir primero::x ahora solo seria x pero para eso necesitamos eliminar
    los valores que antes estaban por default */
    //Valores default
    //int x = 15;
    //float y = 34.87;
        
    std::cout<<"x = "<<x;//Forma de invocar el valor de x local (La que esta dentro de la función es la local)
    cout<<"y = "<<y; //Ejemplo de no usar std:: por el using
    // :: operador de resolución de ámbitos
    std::cout<<"x = "<<primero::x;
    std::cout<<"y = "<<primero::y;//Forma de invocar el valor de y de namespace primero
    std::cout<<"x = "<<segundo::x;//Forma de invocar el valor de y de namespace segundo
    std::cout<<"y = "<<segundo::y;

    return 0;
}