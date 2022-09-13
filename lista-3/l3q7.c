#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n=1;
	int m=1;
	int a;
	while(n<=99 && m<=50){
		a=a+(n/m);
		n+=2;
		m++;
	}
	printf("%d\n",a);
	return 0;
}