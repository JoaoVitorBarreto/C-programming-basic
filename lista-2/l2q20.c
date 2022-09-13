#include <stdio.h>
int troca (int x, int y, int z){
	return x+y+z-y-z;
}
int main(int argc, char const **argv){
	int a,b,c;
	scanf("%d",&a);	
	scanf("%d",&b);
	scanf("%d",&c);
	int x=a;
	int y=b;
	int z=c;
	if(a>b && b>c) printf("maior=%d mediano=%d menor=%d\n",a,b,c);
	else if(a>c && c>b) printf("maior=%d mediano=%d menor=%d\n",a,b=troca(z,x,y),c=troca(y,x,z));
	else if(b>a && a>c) printf("maior=%d mediano=%d menor=%d\n",a=troca(y,x,z),b=troca(x,z,y),c);
	else if(b>c && c>a) printf("maior=%d mediano=%d menor=%d\n",a=troca(y,x,z),b=troca(z,x,y),c=troca(x,y,z));
	else if(c>a && a>b) printf("maior=%d mediano=%d menor=%d\n",a=troca(z,x,y),b=troca(x,z,y),c=troca(y,x,z));
	else if(c>b && b>a) printf("maior=%d mediano=%d menor=%d\n",a=troca(z,x,y),b=troca(y,z,x),c=troca(x,y,z));
	else if(a==b && b==c) printf("maior=%d mediano=%d menor=%d\n",a,b,c);
	return 0;
}