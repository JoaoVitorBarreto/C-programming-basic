#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float mi;
	int x=0;
	int h;
	int m;
	int s;
	scanf("%f",&mi);
	float mf=mi;
	for (float i=mi; i>=0.5; i/=2){
		mf/=2;
		x+=50;
	}
	s=x%60;
	m=x/60;
	h=x/3600;
	printf("Massa inicial: %.2f\nMassa final: %.2f\nTempo: %02d:%02d:%02d \n",mi,mf,h,m,s);
	return 0;
}