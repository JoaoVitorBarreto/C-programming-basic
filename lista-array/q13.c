#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main(int argc, char const *argv[]) {
 	int v1[20];
 	int m = 0;
 	int a;
 	int b;
 	for (int i = 0; i<20; i++){
 		scanf("%d",&v1[i]);
 	}
 	for (int i = 0; i<10; i++){
 		if(abs(v1[i+1]-v1[i]) > m){
 			m = abs(v1[i+1] - v1[i]);
 			a = i;
 			b = i+1;
 		}
 	}
	
 	printf("%d\níndices: %d %d\n ",m,a,b );	
 	return 0;
 }