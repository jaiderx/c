#include<stdio.h>
#include"cab.h"

void main(){

	//CABECALHO
	cab();
	printf("# Pagina 3 - Ex 2 - Calc Triplo Positivo, Dobro Neg  #");
	linef();

	//DECLARACOES
	int a,acum;

	//ENTRADA
	printf("  Informe o Numero a ser verificado: ");
	scanf("%d",&a);

	//PROCESSAMENTO / EXIBICAO
	if ((a % 2) == 0){
		acum = a*3;
		linef();
		printf("\n Numero %d positivo.\n Triplo: %d\n",a,acum);
	}else{
		acum = a*2;
		linef();
		printf("\n Numero %d negativo.\n Dobro: %d\n",a,acum);
	}

getchar();
}
	
