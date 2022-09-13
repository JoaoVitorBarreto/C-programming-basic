#include <stdio.h>
int unid(int a){
	return a%10;
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",unid(a));
	return 0;
}