int quad(float a){
	a=a*a;
return a;
}

int cub(float a){
	a=a*a*a;
return a;
}

int pot(float a, float b){
	int ac=a;
	if(b==0) return 1;
	if(b==1) return a;
	for (int i=1; i<b; i++) ac=ac*a;
return ac;
}

/* Raiz - reduzir por fatorial primo
 * EM CONSTRUÇÃO CARALHO

*/
int raiz(float a, float b){
	// 4 fatorial: 4*3*2*1
	// fatorar 4 p/ raiz quadrada:
	// 		4|2-|_2
	// 		2|2-|	
	// 		1|
	//
	// fatorar 27 p/ raiz cúbica:
	// 		27|3-|
	// 		 9|3 |-3
	// 		 3|3-|
	// 		 1		
float externa;
	for (int i=0; i<a; i++)
	{
		externa=externa+i;
	}
return externa;
}
