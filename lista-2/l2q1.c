#include <stdio.h>
int main(int argc, char const **argv){
	int a;
	scanf("%d",&a);
	if(a==0) printf("Nulo\n");
	else if(a<0) printf("Negativo\n");
	else printf("Positivo\n");
	return 0;
}