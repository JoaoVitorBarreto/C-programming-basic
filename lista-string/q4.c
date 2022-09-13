#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char frase[1000];
	int cont = 0;
	int x;
	fgets(frase, 1000, stdin);
	x = strlen(frase);
	for(int z = 0; z < x; z++){
		if( (frase[z]=='a') || (frase[z]=='e') || (frase[z]=='i') ||
			(frase[z]=='o') || (frase[z]=='u')) cont++;
	}
	printf("%d vogais\n",cont);
	return 0;
}