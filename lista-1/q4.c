#include <stdio.h>
float media(float a, float b, float c){
	return (a+b+c)/3;
}
int main(){
float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
printf("A média é %.2f",media(a,b,c));
return 0;
}