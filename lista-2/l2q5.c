#include <stdio.h>
int main(int argc, char const **argv){
	int a;
	int b=0;
	for (int i=1; i<=3; i++){
		scanf("%d",&a);
		if(i==1) b=a;
		else if(a>b) b=a;
	}
	printf("%d\n",b);	
	return 0;
}