#include <stdio.h>
int main(int argc, char const *argv[])
{
	float m;
	float a=0;
	for(int i=1; i<=10; i++){
		scanf("%f",&m);
		a=a+m;
	}
	printf("%.2f\n",a);
	return 0;
}