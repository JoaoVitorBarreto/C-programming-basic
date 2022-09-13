#include <stdio.h>
float not(float x, float y){
	return x+y-x;
}
int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	printf("a = %.2f e b = %.2f",not(a,b),not(b,a));
	return 0;
}