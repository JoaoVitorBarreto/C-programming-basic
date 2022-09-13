#include <stdio.h>

int fatorial (int a){
	if (a==0) return 1;
	else return a*fatorial(a-1);
}


int main(int argc, char const *argv[]){
	int x, fat;
	scanf("%d",&x);
	fat = fatorial(x);
	printf("%d", fat);
	return 0;
}