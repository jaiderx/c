#include<stdio.h>
#include"cab.h"

int a,b,c;

void exibe(int a, int b, int c){
printf("\n A=%d\n B=%d\n C=%d\n",a,b,c);
}

int main(void){
	
	//CABEÇALHO
	cab();
	printf("\n Pagina 11 Exercicio 3 - Trocar 3 valores");
	linef();

	//ATRIBUICAO / EXIBICAO
	a=10;
	b=20;
	c=30;
	exibe(a,b,c);
	linef();
	exibe(b,a,c);
	linef();
getchar();
return 0;
}
