#include<stdio.h>
#include"cab.h"

void main(){

	//CABECALHO
	cab();
	printf("# Pagina 13 - Exercicio 1                            #");
	linef();

	//DECLARACAO
	float nota1,nota2,nota3,media;

	//ENTRADA
	printf(" Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf(" Digite a segunda nota: ");
	scanf("%f",&nota2);
	printf(" Digite a terceira nota: ");
	scanf("%f",&nota3);

	//PROCESSAMENTO / SAIDA
	media=(nota1+nota2+nota3)/3;
	if (media < 6) printf("\n REPROVADO!\n");
	else printf("\n APROVADO!\n");

getchar();
}
