#include<stdio.h>
#include "cab.h"
int main(void){

	/*CABEÇALHO DO PROGRAMA*/
	cab();
	line();
	printf("|| Pag 5 - Exemplo algoritmo triangulo                ||\n");	
	line();
	printf("|| Calcule a area de um triangulo com base e altura   ||\n");
	line();
	linef();
	
	/*BLOCO DE PROCESSAMENTO*/
	float area,base,altura;
	printf("Informe a Altura: ");
	scanf("%f",&altura);
	printf("\nInforme a Base: ");
	scanf("%f",&base);
	area=(base*altura)/2;
	
	/*SAIDA / APRESENTAÇÃO*/
	printf("\nArea do triangulo: %.2f\n\n",area);

	return 0;
}
