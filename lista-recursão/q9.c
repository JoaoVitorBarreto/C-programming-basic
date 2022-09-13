#include <stdio.h>

int mdc (int x, int y){
  int z;
  if(x%y==0) return y;
  else return mdc(y,(x%y));
}

int main(int argc, char const *argv[]){
	int x, y, r;
	scanf("%d",&x);
  scanf("%d",&y);
	r = mdc(x, y);
	printf("%d", r);
	return 0;
}