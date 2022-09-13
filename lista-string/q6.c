#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char frase[1000], frase2[1000];
	int x;
	fgets(frase, 1000, stdin);
	x = strlen(frase);
	for(int z = 0, w = 0; z <= x-2; z++){
		if( (frase[z]=='a') || (frase[z]=='e') || (frase[z]=='i') ||
			(frase[z]=='o') || (frase[z]=='u')) continue;
		else{
			frase2[w] = frase[z];
			w++;
		}
	}
	printf("%s\n",frase2);
	return 0;
}