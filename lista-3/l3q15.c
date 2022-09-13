#include <stdio.h>
int main(int argc, char const *argv[])
{
	int par=0;
	int impar=0;
	int x;
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		scanf("%d",&x);
		if(x%2==0) par+=1;
		else impar+=1;
	}
	printf("Par: %.d \n",par);
	printf("Ímpar: %.d \n",impar);
	return 0;
}