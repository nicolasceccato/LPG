#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int l, c, i, j;
	
	printf("digite quantas linhas e colunas terao as matrizes: ");
	scanf("%i%i", &l, &c);
	
	int m[l][c], n[l][c], k[l][c];
	
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			
			printf("m[%i, %i]: ", i+1,j+1);
			scanf("%i", &m[i][j]);
			
		}
		
	}
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			
			printf("n[%i, %i]: ", i+1,j+1);
			scanf("%i", &n[i][j]);
			
		}
		
	}
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			
			k[i][j] = m[i][j] + n[i][j];
			
		}
		
	}
	
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("%3i ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("%3i ", n[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("%3i ", k[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
