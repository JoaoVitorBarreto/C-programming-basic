#include <stdio.h>
#include <stdlib.h>
int main(void){
	int d,m,a;
	scanf("%d",&d);
	scanf("%d",&m);
	scanf("%d",&a);
	if(d>31 || d<0 || m<1 || m>12) printf("Data inválida\n");
	else if(m==12 && d==31) printf("%02d:%02d:%d\n",d-30,m-11,a+1);
	else if(m==2 && d==28) printf("%02d:%02d:%d\n",d-27,m+1,a);
	else if((m<8 && m%2==0) && d==30) printf("%02d:%02d:%d\n",d-29,m+1,a);
	else if((m<8 && m%2!=0) && d==31) printf("%02d:%02d:%d\n",d-30,m+1,a);
    else if((m>7 && m%2==0) && d==31) printf("%02d:%02d:%d\n",d-30,m+1,a);
	else if((m>7 && m%2!=0) && d==30) printf("%02d:%02d:%d\n",d-29,m+1,a);
	else printf("%02d:%02d:%d\n",d+1,m,a);
	return 0;
}