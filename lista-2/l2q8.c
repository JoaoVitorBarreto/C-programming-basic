#include <stdio.h>
int maior (int x, int y){
	return x+y-x;
}
int main(int argc, char const **argv){
	int a,b;
	scanf("%d",&a);	
	scanf("%d",&b);
	if(a>b) printf("a=%d b=%d\n",maior(a,b),a);
	else printf("a=%d b=%d\n",a,b);
	return 0;
}