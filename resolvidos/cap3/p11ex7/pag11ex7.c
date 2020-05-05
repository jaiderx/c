#include<stdio.h>
#include"cab.h"

void main(){
	
	//CABECALHO
	cab();
	printf("# Pag 11 - Exercicio 7 - Calculos sobre Salario      #");
	printf("\n  Abono: 20%\n  Comissao: $1.000,00\n  Aumento: 35%\n");
	linef();

	//DECLARACAO
	float salario;

	//ENTRADA
	printf(" Digite o valor do salario: ");
	scanf("%f",&salario);

	//PROCESSAMENTO
	salario=salario*1.2;
	salario=salario+1000;
	salario=salario*1.35;

	//SAIDA / EXIBICAO
	linef();
	printf("Salario Final: %.2f\n",salario);
	linef();

getchar();
}
