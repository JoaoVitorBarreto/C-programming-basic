#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	int divs=0;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		if(n%i==0) divs++;
	}
	if(n==1) printf("Não é primo.\n");
	else if(divs<=2) printf("É primo.\n");
	else printf("Não é primo.\n");
	return 0;
}