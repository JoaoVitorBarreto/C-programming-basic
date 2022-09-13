#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char nome[100];
	int x;
	scanf("%s",nome);
	x = strlen(nome);
	printf("O nome tem %d letras\n",x);
	return 0;
}