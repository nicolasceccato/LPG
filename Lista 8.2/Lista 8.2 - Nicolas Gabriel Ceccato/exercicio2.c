#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que realize a multiplicação entre duas matrizes A e B alocadas dinamicamente. A
matriz resultante também deve ser gerada dinamicamente, de acordo com o algoritmo de multiplicação. */
void imprime (int **m, int linhas, int colunas){
	int i,j;
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			printf("%3i ", m[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	int **a, **b, **c, i, j, la, ca, lb, cb;
	
	printf("Digite quantas linhas tera a matriz a: ");	
	scanf("%i", &la);
		
	printf("Digite quantas colunas tera a matriz a: ");	
	scanf("%i", &ca);
	
	lb = ca;
	
	printf("Digite quantas colunas tera a matriz b: ");	
	scanf("%i", &cb);
	
	a = (int *)malloc(sizeof(int*)*la);
	
	for (i = 0; i < ca; i++){
		a[i] = (int *)malloc(sizeof(int)*ca);
	}
	
	b = (int *)malloc(sizeof(int*)*lb);
	
	for (i = 0; i < cb; i++){
		b[i] = (int *)malloc(sizeof(int) * cb);
	}
	
	for ( i = 0; i < la; i++){
		for (j = 0; j < ca; j++){
			printf("A[%i,%i]", i,j);
			scanf("%i", &a[i][j]);
		}
	}
	for (i = 0; i < lb; i++){
		for (j= 0; j < cb; j++){
			printf("B[%i,%i]", i,j);
			scanf("%i", &b[i][j]);
		}
	}
	c = (int *)malloc(sizeof(int*)*la);
	
	for ( i = 0; i < ca; i++){
		c[i]=(int *)malloc(sizeof(int)*cb);
	}
	
	int soma, k;
	
	for(i = 0; i < la; i++){
		for (j = 0; j < cb; j++){
			soma = 0;
			for ( k = 0; k < ca; k++){
				soma = soma + (a[i][k] * b[k][j]);
			}
			c[i][j] = soma;
		}
	}
	printf("\nmatriz A\n");
	imprime (a, la, ca);
	printf("\nMatriz B\n");
	imprime (b, lb, cb);
	printf("\nMatriz C\n");
	imprime (c, la, cb);
	printf("\n");
	for (i = 0; i < ca; i++){
		free(a[i]);
	}
	free(a);
	for (i = 0; i < cb; i++){
		free(b[i]);
	}
	free(b);
	for (i = 0; i < ca; i++){
		free(c[i]);
	}
	free(c);
	
	return 0;
}
