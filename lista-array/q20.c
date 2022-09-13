#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
	int mat[30];
	float nota[30];
	int a;
	for(int i = 0; i < 30; i++){
		scanf("%d",&mat[i]);
	}
	for(int i = 0; i < 30; i++){
		scanf("%f",&nota[i]);
	}
	for(int i = 1; i < 30; i++){
		for(int z=0; z<i; z++){
			if(mat[i]<mat[z]){
				a = mat[z];
				mat[z] = mat[i];
				mat[i] = a;
				a = nota[z];
				nota[z] = nota[i];
				nota[i] = a;
			}
		}
	}

	for(int i=0; i<30; i++){
		printf("%d ",mat[i]);
		printf("%2.f\n",nota[i] );
	}
}