#include <iostream>

    //cout << (operador de inserción)
    //cin >> (operador de extracción)

using namespace std; //Esta linea nos permite no tener que escribir std::cout/cin/string
/* Mas adelante hablaremos mas sobre los using y namespace*/
int main() {

    string respuesta; //En el sig bloque veremos variables
    std::string respuesta2; // sin el using namespace std
    int edad = 21;

    cout<<"Hola Mundo"<<std::endl; //Tanto std::endl como "\n" son formas de hacer un salto de linea
    std::cout<<"\tMe llamo Emiliano y tengo "<<edad<<'\n'; //Concatenación lo que nos ayuda imprimir mensajes y valores de variables en la misma función
    //\t nos ayuda a dar un espacio
    std::cout<<"Quiero aprender\n"; //La funcion std::cout nos permite imprimir mensajes 


    std::cout<<"Como te llamas? "; 
    std::cin>> respuesta; //std::cin nos permite tener una entrada del usario, para que nos responda
    cout<<"Hola "<<respuesta;

    std::cout<<"\ncual es tu nombre completo? "; 
    //std::getline(std::cin>>std::ws, respuesta2); //getline sirve para recibir respuestas con espacios por ejemplo "Emiliano Garcia"
    //ya que con cin no admitira el texto que este despues del espacio y std::ws sirve para cuando tenemos dos entradas ya que getline usara el valor que ya teniamos en nuestro buffer lo que resultara en que no pedira el segundo dato
    cout<<"Hola "<<respuesta2;
    //Recordar que c++ solo procesa caracteres en ingles por lo que no funciona ¿,ñ,acento

    return 0;
}

/*

#include <iostream>

int main() {

return 0;
}

*/
