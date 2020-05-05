#include"cab.h"
void main(){
	cab();
	printf("# Pagina 11 - Exercicio 6 - Calcular Valor W         #");
	printf("\n# W = 2T +4X -3Y, onde X = 2T - 4 e Y = T/2 +4       #");
	linef();

	//ATRIBUICAO
	int w,t,x,y;

	//ENTRADA DE DADOS
	printf(" Digite o valor de T: ");
	scanf("%d",&t);

	//PROCESSAMENTO
	x=(2*t)-4;
	y=(t/2)+4;
	w=(2*t) + (4*x) - (3*y);

	//EXIBICAO
	linef();
	printf("Valores calculados: \n W: %d\n X: %d\n Y: %d\n",w,x,y);
	linef();

getchar();
}


