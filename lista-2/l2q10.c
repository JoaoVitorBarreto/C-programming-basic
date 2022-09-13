#include <stdio.h>
#include <math.h>
int main(int argc, char const **argv){
	int a;
	scanf("%d",&a);
	if(a>0) printf("%.2f\n",sqrt(a));
	else printf("%.2f\n",pow(a,2));
	return 0;
}