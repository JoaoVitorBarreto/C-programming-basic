#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int a;
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		if(a%i==0) printf("%d\n",i);
		else continue;
	}
	return 0;
}