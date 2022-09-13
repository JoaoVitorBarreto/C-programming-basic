#include <stdio.h>
#include <math.h>
 int main(int argc, char const *argv[]) {
 	int v1[10];
 	int v2[10];
 	for (int i = 0; i<10; i++){
 		scanf("%d",&v1[i]);
 		v2[i] = pow(v1[i],2);
 	}
 	for(int i = 0; i<10; i++){
 		printf("%d %d\n", v1[i], v2[i]);		
 	} 	
 	return 0;
 }