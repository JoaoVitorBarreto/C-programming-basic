#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char frase[100];
	int x;
	fgets(frase, 1000, stdin);
	x = strlen(frase);
	for(int i = 0; i <= x-2; i++){
		if(frase[i] >= 'A' && frase[i] <= 'Z') frase[i] += 32;
	}
	printf("%s\n",frase);
	return 0;
}