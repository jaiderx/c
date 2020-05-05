#include<stdio.h>
#include<math.h>
#include"cab.h"

int main(void){

	//CABEÇALHO
	cab();
	printf("## 3.5 - EXERCICIO 1 - RAIZES EQUACAO 2 GRAU        ##\n");
	
	//DECLARAÇÃO
	int cfa,cfc;
	float delta;
	double cfb;

	//ENTRADA DE DADOS
	linef();
	printf("Digite o valor do Coeficiente A: ");
	scanf("%d",&cfa);
	cfa=10;
	printf("\nDigite o valor do Coeficiente B: ");
	scanf("%f",&cfb);
	cfb=2;
	printf("\nDigite o valor do Coeficiente C: ");
	scanf("%d",&cfc);
	cfc=-2;

	//PROCESSAMENTO
	delta=(pow(cfb,2))-(4*cfa*cfc);
	if (delta==0){
		printf("\nRaizes iguais\n");
	}else
	if (delta<0){
		printf("\nNao ha raizes reais\n");
	}else
	if (delta>0){
		printf("\nRaizes Diferentes\n");
	}



return 0;
}
