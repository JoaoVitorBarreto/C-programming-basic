 #include <stdio.h>
 int main(int argc, char const *argv[]) {
 	float v1[30];
 	float v2[30];
 	float med;
 	float soma = 0.0;
 	int acima = 0;
 	for (int i = 0; i<30; i++){
 		scanf("%f",&v1[i]);
 		soma += v1[i];
 	}
 	med = soma/30.0;
 	for (int i = 0; i<30; i++){
 		if(v1[i]>med) {
 			acima++;
 			v2[i]=v1[i];
 		}
 	}
 	printf("Média da turma: %.2f\n",med);
 	printf("número de notas acima da média: %d\n",acima);
 	for (int i = 0; i < 30; i++){
 		if(v2[i]<med) break;
 		else printf("%.2f ",v2[i]);
 	}
 	return 0;
 }