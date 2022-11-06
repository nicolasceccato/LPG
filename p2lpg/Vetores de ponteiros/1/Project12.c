#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que aloque uma matriz quadrada dinamicamente, usando um ponteiro para ponteiro
(int**). O tamanho (ordem) da matriz deve ser informado pelo usu�rio. Ap�s a entrada de dados, o
programa deve armazenar os valores da diagonal secund�ria em um vetor V (tamb�m alocado
dinamicamente), que por fim deve ser mostrado na tela. A gera��o do vetor V deve ser feita atrav�s da
fun��o a seguir:
int *diagonal_secundaria( int **matriz, int ordem ); */
int *diagonal_secundaria( int **matriz, int ordem ){
	int i, j, *v2;
	
	v2 = (int*)malloc(sizeof(int)*ordem);
	int k;
	for (i = 0; i < ordem; i++){
		for (j = 0; j < ordem; j++){
			if ((i+j) == (ordem - 1)){
				v2[k] = matriz[i][j];
				k++;
			}
		}
	}
	return v2;
}
int main(int argc, char *argv[]) {
	int **m, n, i, j, *v;
	printf("qual a ordem da matriz?");
	scanf("%i", &n);
	
	m = (int **)malloc(sizeof(int*)*n);
	
	for (i = 0; i < n ;i++){
		m[i] = (int*)malloc(sizeof(int)*n);
	}
	
	for (i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("M[%i,%i]: ", i,j);
			scanf("%i", &m[i][j]);	
		}
		
	}
	printf("\nMatriz: \n");
	for (i = 0; i < n; i++){
		for (j =0; j<n; j++){
			printf("%3i ", m[i][j]);
		}
		printf("\n");
	}
	v = diagonal_secundaria(m,n);
	printf("\nDiagonal secundaria\n");
	for (i = 0; i < n; i++){
		printf("%3i ", v[i]);
	}
	return 0;
}
