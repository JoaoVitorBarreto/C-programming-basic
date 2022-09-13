#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	int i=0;
	int a=0;
	scanf("%d",&x);
	while(i<x){
		a=a+i;
		i++;
	}
	printf("%d",a);
	return 0;
}