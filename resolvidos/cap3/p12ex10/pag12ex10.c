#include<stdio.h>
#include"cab.h"

void main(){

	//CABECALHO
	cab();
	printf("# Pag 12 - Exercicio 10 - Calculo Lucro percentual   #");
	linef();

	//DECLARACAO
	float lucrop, pcom, pven;

	//ENTRADA
	printf("Informe o Preco de Compra: ");
	scanf("%f",&pcom);
	printf("Informe o Preco de Venda: ");
	scanf("%f",&pven);
	
	//PROCESSAMENTO
	lucrop=100/(pcom/(pven-pcom));

	//SAIDA
	linef();
	printf(" Lucro percentual: %.1f%%",lucrop);
	linef();

getchar();
}
