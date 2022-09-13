#include <stdio.h>
float medp(float a, float b){
	return (a*2+b*3)/5;
}
int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	printf("%.2f",medp(a,b));
	return 0;
}