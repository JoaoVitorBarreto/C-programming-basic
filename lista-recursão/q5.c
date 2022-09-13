#include <stdio.h>

int soma (int x, int a[]){
	if (x==1) return a[0];
	else{
    x--;
    return a[x]+soma(x, a);
  }
}


int main(int argc, char const *argv[]){
	int x, r;
	scanf("%d",&x);
  int array[x];
  for(int i=0; i<x; i++){
    scanf("%d",&array[i]);
  }
	r = soma(x, array);
	printf("%d", r);
	return 0;
}