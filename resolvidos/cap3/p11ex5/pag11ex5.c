#include<math.h>
#include<stdio.h>
#include"matj.h"
#include"cab.h"

void main(){
	
	//CABECALHO
	cab();
	printf("# Pagina 11 - Exercicio 5             		     #");
	printf("\n# Calcular Hipotenusa, Perimetro e Area do Triangulo #");
	linef();

	//DECLARACAO
	float cat1, cat2, hip, per, area;

	//ENTRADA DE DADOS
	printf("\n Digite o valor do Cateto 1: ");
	scanf("%f",&cat1);
	printf("\n Digite o valor do Cateto 2: ");
	scanf("%f",&cat2);

	//PROCESSAMENTO
	// hip²=cat1²+cat2²

	hip=sqrt(quad(cat1)+quad(cat2));
	per=cat1+cat2+hip;
	area=sqrt(per);

	//EXIBICAO
	linef();
	printf(" Hipotenusa: %.2f\n Perimetro: %.2f\n Area: %.2f²\n",hip,per,area);
	linef();
getchar();
}
