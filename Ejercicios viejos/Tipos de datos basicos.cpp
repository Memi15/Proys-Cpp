/*
//Programa 1  Mostrar datos en pantalla
  //Tipos de datos básicos de c++

#include<iostream> //Libreria estandar de c++

using namespace std; //Para usar "cout<<"(para salida de datos) y "cin>>"(para entrada de datos  

int main(){
	int entero=15; //Para variables = numeros ENTEROS
	float decimal=10.67; //Para variables = numeros DECIMALES
	double mayor=256.899073;//Para variables = numeros mas extensos, pueden ser decimales o enteros
	char letra= 'a';//Variable de tipo caracter (letra o numero, mientras sea un solo caracter)
	                //No olvidar las comillas sencillas alrededor de la letra ''
	
	
	//Mandar a imprimir esas variables      No olvidar el ";" al final de cada renglon para cerrar la instrucción
	cout<<entero <<endl; //<<endl = para que el recorre el renglon
	cout<<decimal <<endl;
	cout<<mayor <<endl;
	cout<<letra <<endl;
	return 0; //siempre retornar el 0
} 
*/ 

/*
//Programa 2   Como guardar datos
  //Lectura o entrada de datos
  
#include<iostream> 

using namespace std;

int main(){
	//si quieres numeros decimales o mas grandes usar "float", "double"
	int numero;//Definiendo variable (si sera entera, decimal, etc., y nombrandola)
	
	cout<<"Digite un numero: ";
	cin>>numero; //Guardando la variable
	
	cout<<"\nEl numero que digito es: "<<numero;//imprimiendo variable
	    //Nota: Si quieres que la multiplique por 2 o divida usa *2 ó /2
	return 0;
}
*/

//Programa 3
/*
1. Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división.
*/
#include<iostream>

using namespace std;

int main(){
	double n1,n2,suma=0,resta=0,multi=0,division=0;/*Todas son variables y la coma (,) las separa
	    suma=0 es para eliminar valores basura y así la suma siempre inicia siendo 0
		resta=0 es para eliminar valores basura y así la resta siempre inicia siendo 0
		multi=0 es para eliminar valores basura y así la multiplicación siempre inicia siendo 0
		division=0 es para eliminar valores basura y así la división siempre inicia siendo 0
		*/
		

    cout<<"\n\tDigite un numero: "; cin>>n1; // <<"\n" o <<endl para salto de renglon y \t para espacio
	cout<<"\n\tDigite otro numero: "; cin>>n2;
	
	suma=n1+n2;
	resta=n1-n2;
	multi=n1*n2;
	division=n1/n2;
	
	cout<<"\n\t\tLa suma de "<<double(n1) <<" + " <<double(n2) <<" es: " <<suma;
	cout<<"\n\t\tLa resta es: "<<double(n1) <<" - " <<double(n2) <<" es: "<<resta;
	cout<<"\n\t\tLa multiplicacion es: "<<double(n1) <<" x " <<double(n2) <<" es: "<<multi;
	cout<<"\n\t\tLa division es: "<<division <<"\n";
	
	return 0;
}


