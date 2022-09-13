#include <stdio.h>
int temp(int h, int m){
	return h*60+m;
}
int main(){
	int h,m;
	scanf("%d",&h);
	scanf("%d",&m);
	printf("Passaram-se %d minutos.",temp(h,m));
	return 0;
}