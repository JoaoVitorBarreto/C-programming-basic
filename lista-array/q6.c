 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	int v1[10];
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
 		if(v1[i]>v1[i-1]){
 		maior = v1[i];
 		ind = i;
 		} 
 	}
 	printf("Maior = %d\nÍndice = %d\n",maior,ind);
 	return 0;
 }