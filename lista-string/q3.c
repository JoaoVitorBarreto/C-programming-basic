#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char nome[100];
	int x;
	scanf("%s",nome);
	x = strlen(nome);
	char nome2[100];
	for(int i = x-1, z = 0; i >= 0; i--, z++){
		nome2[i] = nome[z];
	}
	printf("%s\n",nome2);
	return 0;
}