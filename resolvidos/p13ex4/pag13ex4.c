#include<stdio.h>
#include"cab.h"

void main(){
	
	//CABECALHO
	cab();
	printf("# PAG 13 - EXERCICIO 4 - CLASSE ELEITORAL PELA IDADE #");
	linef();

	//DECLARACOES
	int idade;

	//ENTRADA
	printf(" Informe a idade: ");
	scanf("%d",&idade);
	linef();

	//PROCESSAMENTO - EXIBICAO
	if (idade <16)
		printf(" %d ANOS - NAO ELEITOR.\n",idade);
	else if ((idade >= 18) && (idade <= 65))
		printf(" %d ANOS - ELEITOR OBRIGATORIO.\n",idade);
	else if (((idade >= 16) && (idade < 18)) || (idade > 65))
		printf(" %d ANOS - ELEITOR FACULTATIVO.\n",idade);
	linef();

getchar();	
}
