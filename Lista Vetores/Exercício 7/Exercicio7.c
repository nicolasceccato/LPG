#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][4], b[4][5], c[3][5], i, j, k;

	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("A[%i, %i]: ", i+1, j+1);
			scanf("%i", &a[i][j]);
		}
	}
	for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			printf("B[%i, %i]: ", i+1, j+1);
			scanf("%i", &b[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			int somador = 0;
			for (k = 0; k < 4 ; k++){
				somador = somador + a[i][k]*b[k][j];
				c[i] [j] = somador;
			}
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%3i ", a[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			printf("%3i ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			printf("%3i ", c[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
