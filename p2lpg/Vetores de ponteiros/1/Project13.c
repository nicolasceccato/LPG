#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Escreva um programa que realize a multiplicação entre duas matrizes A e B alocadas dinamicamente. A
matriz resultante também deve ser gerada dinamicamente, de acordo com o algoritmo de multiplicação. */
void imprime (int **m,int l,int c){
	printf("\n\n");
	int i, j;
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("%3i ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
int main(int argc, char *argv[]) {
	int **a, **b, **c, i, j, la, ca, cb;
	srand(time(0));
	printf("digite quantas linhas a, colunas a, colunas b: ");
	scanf("%i%i%i", &la, &ca, &cb);
	
	int lb = ca;
	
	a = (int **)malloc(sizeof(int*)*la);
	
	for (i = 0 ; i < la; i++){
		a[i]=(int *)malloc(sizeof(int)*ca);
	}
	
	b = (int**)malloc(sizeof(int)*lb);
	
	for (i = 0; i < lb; i++){
		b[i]=(int*)malloc(sizeof(int)*cb);
	}
	
	for (i = 0; i < la; i++){
		for (j = 0; j < ca; j++){
			a[i][j] = rand() % 10;
		}
	}
	for (i = 0; i < lb; i++){
		for (j = 0; j < cb; j++){
			b[i][j] = rand() % 10;
		}
	}
	
	c = (int**)malloc(sizeof(int*)*la);
	
	for (i = 0; i < la; i++){
		c[i] = (int*)malloc(sizeof(int)*cb);
	}
	
	
	int soma, k;
	for (i = 0; i < la; i++){
		for (j = 0; j < cb; j++){
			soma = 0;
			for (k = 0; k < ca; k++){
				soma = soma + (a[i][k]*b[k][j]);
			}
			c[i][j] = soma;
		}
	}
	printf("\nmatriz A\n");
	imprime (a, la, ca);
	printf("\nmatriz B\n");
	imprime (b, lb, cb);
	printf("\nmatriz C\n");
	imprime (c, la, cb);
	return 0;
}
