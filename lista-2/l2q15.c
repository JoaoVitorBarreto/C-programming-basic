#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a;
	scanf("%d",&a);
	if(a>360) a = a-((a/360)*360);
	if(a>0 && a<90) printf("Primeiro quadrante\n");
	else if(a>90 && a<180) printf("Segundo quadrante\n");
	else if(a>180 && a<270) printf("Terceiro quadrante\n");
	else if(a>270 && a<360) printf("Quarto quadrante\n");
	else printf("Não está em nenhum quadrante\n");
	return 0;
}