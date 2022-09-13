#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int fat=n;
	for (int i=1; i<n; i++){
		fat*=(n-i);
	}
	if (n==0 || n==1) fat=1;
	printf("%d\n",fat);
	return 0;
}