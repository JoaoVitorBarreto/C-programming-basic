#include <stdio.h>
int main(int argc, char const *argv[])
{
	float a;
	float med=0;
	float x;
	float y;
	for(int i=1; i<=30; i++){
		scanf("%f",&a);
		if(i==1) y=a;
		else if(a<=y) y=a;
		if(a>=x) x=a;
		med+=a;
	}
	printf("Menor nota: %.2f \n",y);
	printf("Maior nota: %.2f \n",x);
	printf("Média: %.2f",med/30);
	return 0;
}