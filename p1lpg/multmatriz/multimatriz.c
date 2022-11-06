#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][4], b[4][5], c[3][5];
	
	int i, j, k;
	srand(time(0));
	
	for(i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			a[i][j] = rand() % 6;
		}
	}
	for(i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%3i ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	for(i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			b[i][j] = rand() % 6;
		}
	}
	for(i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			printf("%3i ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			int soma = 0;
			for(k = 0; k < 4; k++){
				soma = soma + a[i][k] * b [k][j];
				c [i][j] = soma;
			}
		}
	}
	for(i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			printf("%3i ", c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	
	return 0;
}
