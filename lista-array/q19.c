#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
	int v[10];
	int a;
	for(int i = 0; i < 10; i++){
		scanf("%d",&v[i]);
	}
	for(int i = 1; i < 10; i++){
		for(int z=0; z<i; z++){
			if(v[i]<v[z]){
				a = v[z];
				v[z] = v[i];
				v[i] = a;
			}
		}
	}

	for(int i=0; i<10; i++){
		printf("%d ",v[i]);
	}
}