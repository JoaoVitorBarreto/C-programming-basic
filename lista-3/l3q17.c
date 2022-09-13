#include <stdio.h>
int main(int argc, char const *argv[])
{
	int quant=0;
	int soma=0;
	for(int i=1; i!=0;){
		scanf("%d",&i);
		if(i==0) break;
		else{
			quant+=1;
			soma+=i;
		}
	}
	printf("%d números digitados\nSoma = %d\n",quant,soma);
	return 0;
}