#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	while(n<=m){
		printf("%d ",n);
		n++;
	}
	return 0;
}