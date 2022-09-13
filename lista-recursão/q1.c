#include <stdio.h>
#include <math.h>

int somaNumeros (int valor){
	if (valor==1) return 1;
	else
		return valor + soma(valor -1);
}


int main(int argc, char const *argv[]){
	int x, y;
	scanf("%d",&x);
	soma = somaNumeros(x);
	printf("A soma dos n primeiros números é %d",soma);
	return 0;
}