#include <stdio.h>
int main(int argc, char const *argv[])
{
	float n;
	float m=1;
	float a=0;
	scanf("%f",&n);
	while(m<=n){
		a=a+(1/m);
		m++;
	}
	printf("%.2f\n",a);
	return 0;
}