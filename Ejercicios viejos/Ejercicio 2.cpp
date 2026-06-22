/*
Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto
y muestre en la salida estándar el precio del producto al aplicarle el IVA y el IVA por separado.
*/

#include<iostream>

using namespace std;

int main(){
	
	double producto,IVA=0,ProdIVA=0;
	
	cout<<"\nEste programa te dira el IVA de tu producto y el precio total";
	cout<<"\n\n\tDigite el precio del producto: "; cin>>producto;
	
	IVA=producto*0.16;
	ProdIVA=producto*1.16;
	
	cout<<"\n\n\tEl IVA del producto es: "<<IVA;
	cout<<"\n\n\tEl precio total del producto es: "<<ProdIVA <<endl;
	
	
	
	return 0;
}
