#include<stdio.h>
#include"cab.h"

void main(){

	//CABECALHO
	cab();
	printf("# PAGINA 13 - EXERCICIO 3 - CALC IR SALARIO          #");
	linef();

	//DECLARACAO
	float salario,ir,aliq;

	//ENTRADA
	printf(" Informe o Salario: ");
	scanf("%f",&salario);

	//PROCESSAMENTO
	if(salario < 1000){
		aliq=0;
	}else{
		aliq=10;
	}
	ir=(salario*aliq)/100;

	//SAIDA - EXIBICAO
	linef();
	printf(" Aliquota IR para o salario %.2f: %.1f%%\n Valor IR: %.2f\n",salario,aliq,ir);
	linef();
	
getchar();
}
