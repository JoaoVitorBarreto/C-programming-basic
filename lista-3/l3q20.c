#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int pass=0;
	int npass=0;
	float n1,n2;
	for (int i=1; i>0; i++){
		scanf("%f",&n1);
		scanf("%f",&n2);
		if(n1==-1 || n2==-1) break;
		else if((n1+n2)/2>=7) pass+=1;
		else if((n1+n2)/2<=7) npass+=1;
	}
	printf("Passaram: %d\nNão passaram: %d\n",pass,npass);
	return 0;
}