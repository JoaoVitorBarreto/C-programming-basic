#include <stdio.h>
int main(int argc, char const **argv){
	float a,b,med;
	scanf("%f",&a);
	scanf("%f",&b);
	med=(2*a+3*b)/5;
	if(med>=6.0) printf("Passou\n");
	else printf("Não passou\n");	
	return 0;
}