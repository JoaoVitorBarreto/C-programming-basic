#include <stdio.h>
float sal(float a){
	return (a*0.06)+a;
}
int main(){
	float a;
	scanf("%f",&a);
	printf("%.2f",sal(a));
	return 0;
}