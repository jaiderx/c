#include<stdio.h>
#include"cab.h"

void main(){

	//CABECALHO
	cab();
	printf("# Pagina 12 - Exercicio 8 - Fahrenheit p/ Celsius    #");	
	linef();

	//DECLARACAO
	float temp;

	//ENTRADA
	printf(" Informe a temperatura em Fahrenheit: ");
	scanf("%f",&temp);

	//PROCESSAMENTO
	temp=((temp-32)*5)/9;

	//SAIDA
	linef();
	printf(" Temperatura convertida: %.1f° Celsius",temp);
	linef();

getchar();
}
