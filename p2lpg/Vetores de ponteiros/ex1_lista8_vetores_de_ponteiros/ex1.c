#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que crie um vetor de ponteiros do tipo float com 5 elementos que ir�o
armazenar as notas de 5 estudantes. Em seguida, pergunte ao usu�rio qual o n�mero de notas.
Ap�s isto, aloque dinamicamente os 5 ponteiros do vetor criado de modo que possam
armazenar a quantidade de notas indicada (que ser� igual para todos os estudantes). Por fim,
pe�a para o usu�rio digitar todas as notas de todos os estudantes e mostre-as na tela. */

int main(int argc, char *argv[]) {
	float *vp[5];
	int n,i,j;
	scanf("%i", &n);
	for (i = 0; i < 5; i++){
		vp[i] = (float*)malloc(sizeof(float)*n);	
	}
	
	for (i = 0 ; i<5; i++){
		printf("\nAluno %i\n",i+1);
		for (j = 0; j <n; j++){
			printf("nota %i ", j+1);
			scanf("%f", &vp[i][j]);
		}
	}
	for ( i = 0; i < 5; i++){
		printf("\nAluno %i: ",i+1);
		for (j = 0; j < n; j++){
			printf("%5.2f ", vp[i][j]);
		}
	}
	for (i = 0; i < 5; i++){
		free(vp [i]);
	}
	return 0;
}
