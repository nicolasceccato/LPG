#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloca dinamicamente um vetor do tipo float e realiza a entrada de dados. Em
seguida, o programa deve calcular a média dos valores do vetor e alocar dinamicamente um novo vetor
contendo somente os valores maiores ou iguais à media. O processo pode ser feito usando malloc(), ou
seja, fazendo a contagem, alocação e cópia dos valores. Outra alternativa consiste em usar realloc() para
ir aumentando o espaço alocado à medida que os valores vão sendo encontrados.
 */

int main(int argc, char *argv[]) {
	float *v, soma = 0;
	int n, i;
	printf("quantos termos tera esse vetor? ");
	scanf("%i", &n);
	
	v = (float*)malloc(sizeof(float)*n);
	
	for (i = 0; i < n; i++){
		printf("Digite o %io termo do vetor: ",i+1);
		scanf("%f", &v[i]);
		soma += v[i];
	}
	float media = soma/n;
	
	float *v2 = NULL;
	int j =0;
	for (i = 0; i < n; i++){
		if (v[i] >= media){
			v2 = (float*)realloc(v2,sizeof(float)*(j+1));
			v2[j] = v[i];
			j++;
		}
	}
	printf("\nvetor original\n");
	for ( i = 0; i < n; i++ ){
		printf("%.2f ", v[i]);
	}
	printf("\nmedia = %.2f\n", media);
	printf("\nvetor modificado\n");
	for ( i = 0; i < j; i++ ){
		printf("%.2f ", v2[i]);
	}	
	return 0;
}
