#include <stdio.h>
int main(int argc, char const **argv){
	float a;
	scanf("%f",&a);
	if(a>=0 && a<=10.0) printf("Nota válida\n");
	else printf("Nota inválida\n");	
	return 0;
}