 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	int v[20];
 	int a;
 	for (int i = 0; i<20; i++){
 		scanf("%d",&v[i]);
 	}
 	for(int i = 0; i<10; i++){
 		a = v[i];
 		v[i] = v[19-i];
 		v[19-i] = a;
 	}
 	for(int i = 0; i<20; i++){
 		printf("%d ",v[i]);		
 	} 	
 	return 0;
 }