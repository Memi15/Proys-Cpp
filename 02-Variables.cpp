#include <iostream>

int main() {

//Tipos de variables básicas

    //Inteagers (Enteros) guardan valores numericos enteros negativos y positivos de diferentes tamaños
    int a; //El rey de los enteros. Típicamente usa 4 bytes de memoria.
    short b; //Entero de tamaño corto (usualmente 2 bytes).
    long c; //Entero de tamaño largo (4 u 8 bytes).
    long long d; // Entero extremadamente grande (8 bytes).
    unsigned int e; //A todos estos enteros les puedes anteponer la palabra unsigned (ej. unsigned int) si estás seguro de que solo vas a almacenar números positivos. Esto duplica su capacidad máxima en el lado positivo.

    //Floats (Flotantes o decimales) guardan valores numericos decimales negativos y positivos de diferentes tamaños
    float f; //Precisión simple (4 bytes). Ideal si no necesitas tanta precisión matemática.
    double g; //Precisión doble (8 bytes). Es el que se usa por defecto en la mayoría de los casos.
    long double h; //Precisión extendida (generalmente 8, 12 o 16 bytes).

    //Char (Caracteres) guardan valores de solo un caracter de cualquier tipo pero solo uno.
    char calificación = 'A'; //Almacena un solo carácter utilizando el código ASCII (1 byte). Se escribe entre comillas simples (ej. 'a').

    //Bool (Boleanos) Guardan solo dos tipos de valores true o false.
    bool j = true; //Solo puede tomar dos valores: true (verdadero / 1) o false (falso / 0). Almacena estados lógicos.

    //void; //Representa la ausencia de tipo. No se usa para declarar variables comunes, sino para funciones que no devuelven nada o para punteros genéricos.

    //Strings (Cadenas de caracter) guardan texto entres ""
    std::string k; //Para cadenas de texto (palabras, frases). Es infinitamente mejor y más seguro que usar arreglos de char.


//Declaración y asignación de variables

    int x;// Declaración de variable
    x = 5;// Asignación de valores
    int y = 4; //Declaración y asignación de variable

    int a1,b1,c1;//Declaración de multiples variables del mismo tipo

    int suma = x + y;
    std::string text_suma = "x más y";

    std::cout<<suma<<"\n";


//Como cambiar el tipo de variables

    //Forma Implicita
    int var = 3.14; //Aqui es implicito ya que al hacer la variable int desde el principio estoy cambiando el valor real de mi variable
    std::cout<<var<<"\n";

    //Forma Explicita
    float var2 = (int)3.14; //Aqui se muestra claramente como camniar el tipo de valor
    //sin embargo despues seguira siendo float 
    var2 = var2 + 1.5;
    std::cout<<var2<<"\n";

    //Otro ejemplo 

    char var3 = 100; //Se hara una conversion implicita a un caracter que coincida con el valor en la tabla ASCII
    std::cout<<var3<<"\n";
    std::cout<<(char)103<<"\n";// en ASCII 103 es g

    //Otro ejemplo: Si queremos sacar el puntaje de un examen

    int p_correcta = 8;
    int p_totales = 10;
    float puntaje = p_correcta / p_totales *100;//Nos da 0% en lugar de 80 porque estamos truncando los decimales con los valores enteros
    //tenemos que tener valores flotantes
    float puntaje2 = p_correcta / (float)p_totales *100;//Teniendo al menos un float nos quedamos con los decimales

    std::cout<<puntaje<<"%\n";
    std::cout<<puntaje2<<"%\n";


//Hacer constante una variable con la palabra reservada const

    //Ejemplo de sacar

    //Hace que sea "only read" solo de lectura
    const double PI = 3.14159;//const permite que no se pueda modificar ese valor a lo largo del programa
    //Una convención tipica para contantes es que todas sus letras esten en mayusculas para identificarlas mas facil
    double radio = 10;
    double circunferencia = 2 * PI * radio;

    std::cout<<circunferencia<<" centimetros";

    double pi = 3.14159;
    pi = 4.92;
    //PI = 4.56; Da error ya que la hicimos constante por lo que no se permite modificar su valor a diferencia de el otro pi
    
//Métodos utilies para strings

    std::string nombre = "Emiliano";

    //nombre.length();//Cuenta cuantos caracteres tiene una cadena
    //nombre.empty();//Te dice si una cadena esta vacia o no
    //nombre.append(" Garcia");//Agrega lo que queramos a la cadena al final de la cadena
    //char pos = nombre.at(0);//Se usa para saber que caracter se encuentra en una posición especifica
    //nombre.insert(0, "Martin ");//Insertar un caracter o una cadena en una posición especifica
    //int lugar = nombre.find("Garcia");//Sirve para saber en que posición espeficia se encuentra una cadena o caracter
    //nombre.erase(4, 6);//Sirve para borrar porciones de la cadena 
    //nombre.clear();//Borra todo lo que haya en la cadena

    std::cout << nombre;

    return 0;
}