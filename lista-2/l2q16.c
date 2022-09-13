#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a;
	int volt;
	scanf("%d",&a);
	volt=a/360;
	if(a>360) a = a-((a/360)*360);
	if(a>0 && a<90) printf("Primeiro quadrante\n%d volta(s)",volt);
	else if(a>90 && a<180) printf("Segundo quadrante\n%d volta(s)",volt);
	else if(a>180 && a<270) printf("Terceiro quadrante\n%d volta(s)",volt);
	else if(a>270 && a<360) printf("Quarto quadrante\n%d volta(s)",volt);
	else printf("Não está em nenhum quadrante\n%d volta(s)",volt);
	return 0;
}