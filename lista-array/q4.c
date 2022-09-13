 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	int v1[20];
 	int p = 0;
 	int im = 0;
 	for (int i = 0; i<20; i++){
 		scanf("%d",&v1[i]);
 		if(v1[i]%2==0) p++;
 		else im++;
 	}
 	printf("Par = %d\nÍmpar = %d",p,im);
 	return 0;
 }