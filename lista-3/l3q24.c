#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	int primos=0;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		int a;
		int divs=0;
		scanf("%d",&a);
		if(a==1) continue;
		else for (int z=1; z<=a; z++){
			if(a%z==0) divs++;	
		}
		if(divs==2) primos++;
		}
	printf("Quantidade de números primos: %d\n",primos);
	return 0;
}