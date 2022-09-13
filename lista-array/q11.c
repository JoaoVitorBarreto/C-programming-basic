#include <stdio.h>
#include <math.h>
 int main(int argc, char const *argv[]) {
 	int v1[8];
 	int v2[8];
 	int a;
 	for (int i = 0; i<8; i++){
 		scanf("%d",&v1[i]);
 	}
 	for (int i = 0; i<8; i++){
 		scanf("%d",&v2[i]);
 	}
 	for(int i = 0; i<8; i++){
 		a = v1[i];
 		v1[i] = v2[i];
 		v2[i] = a;		
 	}
 	return 0;
 }