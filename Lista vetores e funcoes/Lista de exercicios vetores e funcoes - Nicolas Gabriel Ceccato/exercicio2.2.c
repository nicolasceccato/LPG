#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gera_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
	int i, j;
	for ( i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			
			printf("m[%i, %i]: ", i+1,j+1);
			scanf("%i", &matriz[i][j]);
		}		
	}
	return 0;
}
void mostra_matriz (int linhas, int colunas, int matriz[linhas][colunas]){
	int i, j;
	for ( i= 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			
			printf("%3d ", matriz[i][j]);
		}
	printf("\n");
	
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int l, c, i, j;
	
	printf("digite quantas linhas e colunas terao as matrizes: ");
	scanf("%i%i", &l, &c);
	
	int m [l][c], n[l][c], k[l][c];
	
	gera_matriz (l, c, m);
	gera_matriz (l, c, n);
	
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			k[i][j] = m[i][j] + n[i][j];
		}
	}
	
	mostra_matriz (l, c, m);
	
	mostra_matriz (l, c, n);
	
	mostra_matriz (l, c, k);
	
	return 0;
}
	
