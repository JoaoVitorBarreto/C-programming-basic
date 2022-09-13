#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int mdc;
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=1; i!=0;i++){
		if (a>b){
			if(a%b==0){
				mdc=b;
				i=0;
			}
			else{
			a=b;
			b=a%b;
			i++;
			}
		}
		else if(b>a){
			if(b%a==0){
				mdc=a;
				i=0;
			}
			else{
				b=a;
				a=b%a;
				i++;
			}
		}
	}
	printf("%d\n",mdc);
	return 0;
}