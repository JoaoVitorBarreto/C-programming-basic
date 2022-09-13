#include <stdio.h>
int main(int argc, char const *argv[])
{
	float m;
	float a=0;
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		scanf("%f",&m);
		a=a+m;
	}
	printf("%.2f\n",a);
	return 0;
}