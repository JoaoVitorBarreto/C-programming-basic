#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main(int argc, char const *argv[]) {
 	int v1[50];
 	int cont = 0;
 	int x = 0;
 	for (int i = 0; i<50; i++){
 		scanf("%d",&v1[i]);
 	}
 	for (int i = 0; i<50; i++){
 		for (int z = 0; z<50; z++){
 			if(i==z) continue;
 			else if(v1[i]==v1[z]){ 
 				cont++;
 			}
 		}
 		if (cont==0) x++; 	
 	}
	
 	printf("Elementos diferentes: %d\n ",x );	
 	return 0;
 }