#include <stdio.h>
#include <math.h>
 int main(int argc, char const *argv[]) {
 	int v1[10];
 	int v2[10];
 	int v3[10];
 	for (int i = 0; i<10; i++){
 		scanf("%d",&v1[i]);
 	}
 	for (int i = 0; i<10; i++){
 		scanf("%d",&v2[i]);
 	}
 	for(int i = 0; i<10; i++){
 		v3[i] = v1[i] * v2[i];	
 		printf("%d ",v3[i] );	
 	}
 	return 0;
 }