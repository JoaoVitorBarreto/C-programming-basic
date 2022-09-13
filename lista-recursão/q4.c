#include <stdio.h>

int fibonacci (int a){
	if (a==1 || a==2) return 1;
	else return fibonacci(a-1)+fibonacci(a-2);
}


int main(int argc, char const *argv[]){
	int x, fib;
	scanf("%d",&x);
	fib = fibonacci(x);
	printf("%d", fib);
	return 0;
}