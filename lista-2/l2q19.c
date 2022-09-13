#include <stdio.h>
#include <stdlib.h>
int main(void){
	int d1,m1,a1;
	int d2,m2,a2;
	printf("Primeira data\n");
	scanf("%d",&d1);
	scanf("%d",&m1);
	scanf("%d",&a1);
	printf("Segunda data\n");
	scanf("%d",&d2);
	scanf("%d",&m2);
	scanf("%d",&a2);
	if(a1>a2) printf("%02d:%02d:%02d\n",d1,m1,a1);
	else if(a2>a1) printf("%02d:%02d:%02d\n",d2,m2,a2);
	else if(m1>m2) printf("%02d:%02d:%02d\n",d1,m1,a1);
	else if(m2>m1) printf("%02d:%02d:%02d\n",d2,m2,a2);
	else if(d1>d2) printf("%02d:%02d:%02d\n",d1,m1,a1);
	else if(d2>d1) printf("%02d:%02d:%02d\n",d2,m2,a2);
	else printf("Datas iguais\n");
	return 0;
}