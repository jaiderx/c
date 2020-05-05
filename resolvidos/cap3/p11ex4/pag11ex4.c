#include<stdio.h>
#include"cab.h"

void main(){

	//CABECALHO
	cab();
	printf("# Pagina 11 - Exercicio 4 - Media Arit. de 4 valores #");
	linef();

	//DECLARACAO
	int a,b,c,d;
	float media;

	//ENTRADA DE DADOS
	printf("\n Digite o primeiro valor: ");
	scanf("%d",&a);
	printf("\n Digite o segundo valor: ");
	scanf("%d",&b);
	printf("\n Digite o terceiro valor: ");
	scanf("%d",&c);
	printf("\n Digite o quarto valor: ");
	scanf("%d",&d);

	//PROCESSAMENTO
	media=(a+b+c+d)/4;

	//EXIBICAO
	linef();
	printf(" Media dos valores informados: %.2f\n",media);
	linef();

getchar();
}
