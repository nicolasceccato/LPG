#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que crie um vetor de ponteiros do tipo float com 5 elementos que irão
armazenar as notas de 5 estudantes. Em seguida, pergunte ao usuário qual o número de notas.
Após isto, aloque dinamicamente os 5 ponteiros do vetor criado de modo que possam
armazenar a quantidade de notas indicada (que será igual para todos os estudantes). Por fim,
peça para o usuário digitar todas as notas de todos os estudantes e mostre-as na tela. */

int main(int argc, char *argv[]) {
	float *vp[5];
	int i, n;
	
	printf("quantas notas tera cada estudante? ");
	scanf("%i", &n);
	
	for (i = 0; i < 5; i++){
		vp[i] = (int*)malloc(sizeof(int)*n);
	}
	int j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < n; j++){
			printf("Digite a %ia nota do %io aluno: ", j+1, i+1);
			scanf("%f", &vp[i][j]);
		}
	}
	for (i = 0; i < 5; i++){
		printf("Aluno %i: ", i+1);
		for (j =0; j < n; j++){
			printf("%3.2f ", vp[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
