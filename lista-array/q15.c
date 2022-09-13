#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main(int argc, char const *argv[]) {
 	int v1[5];
 	int v2[5];
 	int v3[5];
 	int cont = 0;
 	int x = 0;
 	for (int i = 0; i < 5; i++){
 		scanf("%d",&v1[i]);
 	}
 	for (int i = 0; i < 5; i++){
 		scanf("%d",&v2[i]);
 	}


	int m =0;
 	for (int i = 0; i < 5; i++){
 		cont = 0;
 		x = 0;
 		for (int z = 0; z < 5; z++){
 			if(v1[i] == v2[z]){
 				x++;
 				break;
 			}
 		}
 		if (x > 0){
 			for (int w = 0; w < 5; w++){
 				if (v1[i] == v3[w]) cont++;
 			} 
 		}
 		if (cont == 0 && x > 0) v3[m++] = v1[i]; 
		
 	}

	for (int i=0; i < m; i++){
		printf("%d ",v3[i] );
	}	
 	return 0;
 }
