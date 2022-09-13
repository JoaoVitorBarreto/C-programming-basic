#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char frase[1000];
	int x;
	int y = 0;
	fgets(frase, 1000, stdin);
	x = strlen(frase);
	for(int i = x-2, z = 0; i >= 0; i--, z++){
		if(frase[z] == frase[i]) continue;
		else {
			y++;
			break;
		}
	}
	if(y==0) printf("É um palíndromo\n");
	else printf("Não é um palíndromo\n");
	return 0;
}