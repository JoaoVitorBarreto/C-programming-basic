#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(((a>abs(b-c) && a<b+c) &&
	  (b>abs(a-c) && b<a+c) &&
	  (c>abs(a-b) && c<a+b)) &&
	  (a==b && a==c)) printf("Triângulo equilátero\n");
	else if(((a>abs(b-c) && a<b+c) &&
	  (b>abs(a-c) && b<a+c) &&
	  (c>abs(a-b) && c<a+b)) &&
	  ((a==b && a!=c) || (a==c && a!=c) || (b==c && b!=a))) printf("Triângulo isósceles\n");
	else if((a>abs(b-c) && a<b+c) &&
	  (b>abs(a-c) && b<a+c) &&
	  (c>abs(a-b) && c<a+b)) printf("Triângulo escaleno\n");
	else printf("Não é um triângulo\n");
	return 0;
}