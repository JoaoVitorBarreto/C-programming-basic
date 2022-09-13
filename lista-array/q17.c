#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
	int v[30];
	int cont = 0;
	int contf = 0;
	for(int i = 0; i < 30; i++){
		scanf("%d",&v[i]);
	}

	for(int i=1; i<=30; i++){
		if(v[i]>=v[i-1]){
			cont++;
			continue;
		}
		else{
			if(cont>contf){
				contf = cont;
				cont = 0;
			}
			else cont = 0;
		}
	}
	printf("%d\n",contf+1);
}