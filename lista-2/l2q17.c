#include <stdio.h>
#include <stdlib.h>
int main(void){
	int d,m,a;
	scanf("%d",&d);
	scanf("%d",&m);
	scanf("%d",&a);
	if(d>31 || d<0 || m<1 || m>12) printf("Data inválida\n");
	else if((m<8 && m%2==0) && d>30) printf("Data inválida\n");
	else if((m>7 && m%2!=0) && d>30) printf("Data inválida\n");
	else if(m==2 && (a%400==0 || (a%4==0 && a%100!=0)) && d>29) printf("Data inválida\n");
	else if(m==2 && (a%400!=0 || (a%4==0 && a%100==0)) && d>28) printf("Data inválida\n");
	else printf("Data válida\n"); 
	return 0;
}