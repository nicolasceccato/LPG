#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia uma certa quantidade de inteiros que s�o armazenados num vetor v. A
quantidade deve ser definida pelo usu�rio, e o programa aloca espa�o para v. O programa deve
armazenar os valores positivos em um vetor vp e o valores negativos no vetor vn. Como as quantidades
de valores positivos e negativos s�o desconhecidas, o espa�o para vp e vn deve ser alocado
dinamicamente. Os vetores vp e vn n�o devem conter zeros. Ao final, imprima os tr�s vetores. Pode ser
feito com malloc() ou com realloc().  */
void imprime (int *v, int n){
	printf("\n\n");
	int i;
	
	for (i = 0; i < n; i++){
		printf("%3i ", v[i]);
	}
	printf("\n\n");
}
int main(int argc, char *argv[]) {
	int *v, q, *vp = NULL, p = 0, *vn = NULL, n = 0, i, j;
	
	printf("Quantos termos tera o vetor? ");
	scanf("%i", &q);
	
	v = (int *)malloc(sizeof(int)*q);
	
	for (i = 0; i < q; i++){
		printf("digite o %io termo do vetor: ", i+1);
		scanf("%i", &v[i]);
		
		if (v[i] > 0){
			p++;
			vp = (int *)realloc(vp, sizeof(int)*p);
			vp[p-1] = v[i];
		}else{
			if (v[i] < 0){
				n++;
				vn = realloc(vn, sizeof(int)*n);
				vn[n-1]=v[i];
			}
		}
	}
	imprime (v,q);
	imprime (vp,p);
	imprime (vn,n);
	
	return 0;
}
