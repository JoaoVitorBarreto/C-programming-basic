#include <stdio.h>
int main(int argc, char const *argv[])
{
	float a;
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(i%2==0) a-=1/i;
		else a+=1/i;
		printf("%.2f \n",a);
	}
	printf("%.2f \n",a);
	return 0;
}