#include <stdio.h>
int main(){
	int a,a1,a2,a3;
	scanf("%d",&a);
	a1 = a%10000;
	a2 = (a/10000)%100;
	a3 = (a/1000000)%100;
	printf("%d de %.2d de %d.",a3,a2,a1);
	return 0;
}