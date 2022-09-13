#include <stdio.h>
float mdp(float a, float b, float c, float d){
	return (a*c+b*d)/(c+d);
}
int main(){
	float a,b,c,d;
	printf("Digite as notas:");
	scanf("%f",&a);
	scanf("%f",&b);
	printf("Digite os pesos:");
	scanf("%f",&c);
	scanf("%f",&d);
	printf("%.2f",mdp(a,b,c,d));
	return 0;
}