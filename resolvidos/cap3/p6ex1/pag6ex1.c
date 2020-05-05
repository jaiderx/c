#include<stdio.h>
#include "cab.h"
int main(void){

	/*CABEÇALHO*/
	cab();
	printf("######  Exercicio 1 - Pag 6 ######\n");
	line();
	printf("Informar o maior valor entre dois numeros\n");
	linef();

	//DECLARAÇÃO
	float a,b;

	/*ENTRADA DE DADOS*/
	printf("\n\nDigite o primeiro numero: ");
	scanf("%f",&a);	
	printf("\nDigite o segundo numero: ");
	scanf("%f",&b);
	
	/*PROCESSAMENTO*/
	if (a>b){
		linef();
		printf("\nO maior numero e: %.0f\n",a);
	}else {
		linef();
		printf("\nO maior numero e: %.0f\n",b);
	}
	
	return 0;
}
