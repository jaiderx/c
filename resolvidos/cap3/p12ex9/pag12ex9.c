#include<stdio.h>
#include"cab.h"

void main(){
	
	//CABECALHO
	cab();
	printf("# Pagina 12 - Exercicio 9 - Calculo Multa             #");
	linef();

	//DECLARACAO
	float capital,perc,multa,total;

	//ENTRADA
	printf(" Informe o Valor capital: ");
	scanf("%f",&capital);
	printf("\n Informe o perc. de juros: ");
	scanf("%f",&perc);

	//PROCESSAMENTO
	multa=capital*perc/100;
	total=capital+multa;

	//SAIDA
	linef();
	printf(" Multa: %.2f\n Total: %.2f\n",multa,total);
	linef();

getchar();
}
