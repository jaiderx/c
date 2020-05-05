#include<stdio.h>
#include<math.h>
#include"cab.h"

const float PI=3.141592926535;
int main(void){
	
	//CABEÇALHO
	cab();
	line();
	printf("\n# Pagina 11 Exercicio 2 "); 
	printf("\n Calcule o diametro, a area e a circunferencia de um\n");
	printf(" circulo conhecendo apenas o raio\n");

	//DECLARAÇÃO
	float raio,diam,area,circ;

	//ENTRADA DE DADOS
	linef();
	printf("\nDigite o tamanho do raio: ");
	scanf("%f",&raio);

	//PROCESSAMENTO
	diam=2*raio;
	area=PI*(raio*raio);
	circ=2*PI*raio;

	//SAIDA-EXIBIÇÃO
	linef();
	printf("\nDiametro: %.2f",diam);
	printf("\nArea: %.2f",area);
	printf("\nCircunferencia: %.2f\n\n",circ);
	linef();	
	
return 0;
}
