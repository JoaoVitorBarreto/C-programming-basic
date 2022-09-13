#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a>abs(b-c) && a<b+c) &&
	  (b>abs(a-c) && b<a+c) &&
	  (c>abs(a-b) && c<a+b)) printf("Formam um triângulo\n");
	else printf("Não formam um triângulo\n");
	return 0;
}