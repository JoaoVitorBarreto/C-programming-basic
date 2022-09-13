#include <stdio.h>

int potencia (int a, int b){
	if (b==1) return a;
	else{
    b--;
    a *=a;
  	return potencia(a,b);
  }
}


int main(int argc, char const *argv[]){
	int x, y, pot;
	scanf("%d",&x);
  scanf("%d",&y);
	pot = potencia(x,y);
	printf("%d", pot);
	return 0;
}