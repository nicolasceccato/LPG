#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Faça um programa que determine o menor valor de uma matriz 3x4, bem como suas coordenadas (linha
e coluna). Tal processamento deve ser feito por uma função que recebe a matriz e “retorna” o menor
elemento e suas coordenadas (i e j).
void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ); */
void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
	int i, j;
	*pI = 0;
	*pJ = 0;
	*pMin = mat[0][0];
	float aux;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			if(mat[i][j] < *pMin){
				*pMin = mat[i][j];
				*pI = i;
				*pJ = j;
			}
}
}
}
int main(int argc, char *argv[]) {
	float m[3][4], menor;
	int i, j, linha, coluna;
	
	srand(time(0));
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			m[i][j] = rand() %100;
			
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%3.2f ", m[i][j]);
			
		}
		printf("\n");
		
	}
	min_matriz(m, &menor, &linha, &coluna);
	
	printf("o menor valor da matriz eh %f\nlinha %i\ncoluna %i\n", menor,linha,coluna);
	return 0;
}
