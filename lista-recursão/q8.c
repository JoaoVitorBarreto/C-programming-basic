#include <stdio.h>

double meio (double x, double y){
  double z;
  z=(y-x)/2;
  return x+z;
  }

int main(int argc, char const *argv[]){
	double x, y, r;
	scanf("%lf",&x);
  scanf("%lf",&y);
	r = meio(x, y);
	printf("%.1lf", r);
	return 0;
}