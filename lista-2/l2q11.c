#include <stdio.h>
int main(void){
	float a;
	float maior;
	float menor;
	for(int i=1; i<=5; i++){
		scanf("%f",&a);
		if(i==1){maior=a; menor=a;}
		else if(a>maior) maior=a;
		else if(a<menor) menor=a;
	}
	printf("Maior: %.2f\nMenor: %.2f\n",maior,menor);
	return 0;
}