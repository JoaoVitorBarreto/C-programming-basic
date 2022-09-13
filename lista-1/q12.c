#include <stdio.h>
float pot(float l, float p){
	return (l*p*18)/60;
}
int main(){
	float l,p;
	scanf("%f",&l);
	scanf("%f",&p);
	printf("%.2f lâmpadas.",pot(l,p));
	return 0;
}