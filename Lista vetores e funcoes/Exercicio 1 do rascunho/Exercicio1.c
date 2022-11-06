#include <stdio.h>
#include <stdlib.h>

/* 1.Dada uma matriz 4x5, calcule a média dos valores pares da matriz; */

int main(int argc, char *argv[]) {
	
	int m [4][5], i, j, cont = 0, termos = 0;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			
			printf("M[%i, %i]\n", i+1,j+1);
			scanf("%i", &m[i][j]);
			
			 
			if (m[i][j] % 2 == 0){
				cont += m[i][j];
				termos++;
				
			}
		}
	}
	printf("A media dos %i termos pares da matriz M[i][j] eh igual a : %i ", termos, (cont/termos));
	
	return 0;
}
