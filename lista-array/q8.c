 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	int v1[10];
 	int a;
 	int maior = 0;
 	int ind = 0;
 	for (int i = 0; i<10; i++){
 		scanf("%d",&v1[i]);
 		if(i==0) {
 		maior = v1[i];
 		ind = i;
 		}
 	}
 	for(int i = 1; i<10; i++){
 		if(v1[i]>maior){
 		maior = v1[i];
 		ind = i;
 		} 
 	}
 	a = v1[9];
 	v1[9] = maior;
 	v1[ind] = a;
 	printf("Maior = %d\nÍndice = %d\nValor do último índice: %d\n",v1[9],ind,a);
 	return 0;
 }