#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char frase[100], frase2[100];
	int i, j;
	fgets(frase, 1000, stdin);
	scanf("%d",&i);
	scanf("%d",&j);
	for(int z = 0; i <= j; i++, z++){
		frase2[z] = frase[i];
	}
	printf("%s\n",frase2);
	return 0;
}