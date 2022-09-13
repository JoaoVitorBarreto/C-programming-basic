#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=0;
	while(i<=80){
		if (i%2==0) printf("%d \n",i);
		i++;
	}
	return 0;
}