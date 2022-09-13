#include <stdio.h>
float sal(float a){
	float s;
	s=a*0.07;
	return (a*0.06+a)-s;
}
int main(){
	float a;
	scanf("%f",&a);
	printf("%.2f",sal(a));
	return 0;
}