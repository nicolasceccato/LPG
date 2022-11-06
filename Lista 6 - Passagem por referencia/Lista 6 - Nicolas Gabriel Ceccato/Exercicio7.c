#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
	*pMin = mat[0][0];
	*pI = 0;
	*pJ = 0;
	
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if (mat[i][j] < *pMin){
				*pMin = mat[i][j];
				*pI = i;
				*pJ = j;
			}		
		}
	}
}
int main(int argc, char *argv[]) {
	float m[3][4], min;
	int i, j, lin, col;
	
	srand(time(0));
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			m[i][j] = rand() % 6;
		}
	}
	printf("\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("%3f ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	min_matriz(m, &min, &lin, &col);
	
	printf("\no menor valor dessa matriz eh %f e esta localizado na linha %i e coluna %i\n", min, lin, col);
	return 0;
}
