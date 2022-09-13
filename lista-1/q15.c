#include <stdio.h>
float sal(float a, float b){
	return (a-a*0.06)+b*0.05;
}
int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	printf("%.2f",sal(a,b));
	return 0;
}