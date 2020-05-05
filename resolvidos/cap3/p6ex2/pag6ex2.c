#include<stdio.h>
#include"cab.h"
int main(void){
	//CABEÇALHO
	cab();
	printf("## Exercicio 2 - Media entre dois valores           ##\n");
	linef();

	//DECLARAÇÃO
	float a,b,media;

	//ENTRADA DE DADOS
	printf("\nDigite o primeiro valor: ");
	scanf("%f",&a);
	printf("\nDigite o segundo valor: ");
	scanf("%f",&b);

	//PROCESSAMENTO
	media=(a+b/2);

	//EXIBIÇÃO RESULTADO
	linef();
	printf("\nA media dos valores informados e: %.2f\n",media);

return 0;
}
