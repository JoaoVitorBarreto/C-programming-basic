#include <stdio.h>
int main(int argc, char const **argv){
	int a;
	scanf("%d",&a);
	if(a%5==0) printf("É múltiplo de 5.\n");
	else printf("Não é múltiplo de 5.\n");	
	return 0;
}