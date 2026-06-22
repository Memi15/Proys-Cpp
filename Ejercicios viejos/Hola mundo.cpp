//Primer programa en C++

#include<iostream>

using namespace std;
int main (){
	
	cout<<"Hola mundo :)\n"<<endl;
	
	char a;
	cout<<"Introduce cualquier caracter:";
	cin>> a;
	cout<<"\n-El codigo de ese caracter es:"<<int(a) <<endl;
	cout<<"-Bytes requeridos:"<<sizeof(a) <<endl;
	return 0;
}
