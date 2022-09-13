 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	int v1[10];
 	for (int i = 0; i <10; i++){
 		scanf("%d",&v1[i]);
 	}
 	for (int i = 0; i <10; i++){
 		if (v1[i]%2==0) printf("%d par; ",v1[i]);
 		else printf("%d ímpar; ",v1[i] );
 	}
 	return 0;
 }