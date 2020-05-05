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
