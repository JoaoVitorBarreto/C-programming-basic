#include <stdio.h>
#include <math.h>
int delt(int a, int b, int c){
	return pow(b,2)-4*a*c;
}
int main(){
int a,b,c;
float x1,x2;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(delt(a,b,c)<0)
{
	printf("Não existem raízes\n");
}
else if(delt(a,b,c)==0)
{
	x1 = (-b+sqrt(delt(a,b,c)))/2*a;
	printf("Raíz: %f\n", x1);
}
else
{	x1 = (-b+sqrt(delt(a,b,c)))/2*a;
	x2 = (-b-sqrt(delt(a,b,c)))/2*a;
	printf("As raízes são: %f e %f\n",x1,x2);
}
	return 0;
}