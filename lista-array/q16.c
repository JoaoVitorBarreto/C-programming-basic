#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main(int argc, char const *argv[]) {
 	int v1[30];
 	int v2[30];
 	int v3[60];
 	int x = 0;
 	int cont = 0;
 	int a = 0;
 	for (int i = 0; i < 30; i++){
 		scanf("%d",&v1[i]);
 		v3[i] = v1[i];
 	}
 	for (int i = 0; i < 30; i++){
 		scanf("%d",&v2[i]);
 	}

 	for (int i = 0; i < 30; i++){
 		x = 0;
 		for (int z = 0; z < 30; z++){
 			if(v2[i] == v3[z]){
 				x++;
 				break;
 			}
 		}
 		if (x > 0) continue;
 		else{
 			v3[a+30] = v2[i];
 			cont++;
 			a++;
 		}
 	}
	for (int i=0; i < 30+cont; i++){
		printf("%d ",v3[i]);
	}	
 	return 0;
 }