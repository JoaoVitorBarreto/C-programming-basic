 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	int v1[10];
 	int maior = 0;
 	int menor = 0;
 	int ind1 = 0;
 	int ind2 = 0;
 	for (int i = 0; i<10; i++){
 		scanf("%d",&v1[i]);
 		if(i==0) {
 		maior = v1[i];
 		ind1 = i;
 		menor = v1[i];
 		ind2 = i;
 		}
 	}
 	for(int i = 1; i<10; i++){
 		if(v1[i]>v1[i-1]){
 		maior = v1[i];
 		ind1 = i;
 		}
 		else if(v1[i]>v1[i-1]){
 		menor = v1[i];
 		ind2 = i;
 		}  
 	}
 	printf("Maior: %d Índice: %d\nMenor: %d Índice: %d\n",maior,ind1,menor,ind2);
 	return 0;
 }