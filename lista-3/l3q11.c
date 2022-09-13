#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	int n;
	scanf("%d",&n);
	for(int i=0; i<=10; i++){
		a=i*n;
		printf("%d\n",a);
	}
	return 0;
}