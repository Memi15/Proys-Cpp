/*
Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
Edad: Dato de tipo entero.
Sexo: Dato de tipo carácter.
Altura en metros: Dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];//[10] se pone para que se puedan leer 10 carácteres en vez de 1
	float altura;
	
	cout<<"\n\tDigite su edad: "; cin>>edad;
	cout<<"\n\tDigite su sexo: "; cin>>sexo;
	cout<<"\n\tDigite su altura en metros: "; cin>>altura;
	
	cout<<"\n\t\tEdad: "<<edad;
	cout<<"\n\t\tSexo: "<<sexo;
	cout<<"\n\t\tAltura: "<<altura;
	
	return 0;
}
