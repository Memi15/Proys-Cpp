#include<stdio.h>

int main(){

//	printf("Hola mundo. \n \n");
	
	int numero1;
	int numero2;
	int resultado;

	printf("Escribe los numeros\n\n");
	
	printf("Primer numero:\n");
	scanf("%d", &numero1),
	
	printf("segundo numero:\n");
	scanf("%d", &numero2);
	
	printf("\nResultado:");
	resultado=numero1*numero2;
	
	printf("%d\n", resultado);
	
	if(resultado  < 50){ printf("Eres Gay");
	}
	else{ printf("No eres Gay");
	}
}
