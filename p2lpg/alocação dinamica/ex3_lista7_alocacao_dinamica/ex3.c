#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloca dinamicamente um vetor do tipo float e realiza a entrada de dados. Em
seguida, o programa deve calcular a média dos valores do vetor e alocar dinamicamente um novo vetor
contendo somente os valores maiores ou iguais à media. O processo pode ser feito usando malloc(), ou
seja, fazendo a contagem, alocação e cópia dos valores. Outra alternativa consiste em usar realloc() para
ir aumentando o espaço alocado à medida que os valores vão sendo encontrados. */
void printar (float *v, int tam){
	int i;
	
	for (i = 0; i < tam; i++){
		printf("%.2f ", v[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	float *v1, *v2 = NULL, soma = 0;
	
	int n;
	printf("quantos termos tera o vetor: ");
	scanf("%i", &n);
	
	v1 = (float *)malloc(sizeof(float)*n);
	int i;
	for (i = 0; i < n; i++){
		printf("digite o %io valor do vetor ", i+1);
		scanf("%f", &v1[i]);
		soma += v1[i];
	}
	float media = soma/n;
	printf("\nmedia igual = %f\n", media);
	int t = 0;
	for (i = 0; i < n; i++){
		if (v1[i] >= media){
			v2 = realloc (v2, sizeof(float)*(t+1));
			v2[t] = v1[i];
			t++;
		}
	}
	printar(v1, n);
	printar(v2, t);
	
	
	return 0;
}
