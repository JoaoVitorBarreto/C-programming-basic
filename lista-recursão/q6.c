#include <stdio.h>

int maior (int y, int x, int a[]){
  if (x==1) return y;
	else{
    if(a[x-1]>y) y=a[x-1];
    x--;
    return maior(y, x, a);
  }
}


int main(int argc, char const *argv[]){
	int x, m;
	scanf("%d",&x);
  int array[x];
  for(int i=0; i<x; i++){
    scanf("%d",&array[i]);
    if(i==0) m=array[i];
  }
	m = maior(m, x, array);
	printf("%d", m);
	return 0;
}