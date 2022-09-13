#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char nome[100];
	scanf("%s",nome);
	printf("%c%c%c\n",nome[0],nome[1],nome[2]);
	return 0;
}