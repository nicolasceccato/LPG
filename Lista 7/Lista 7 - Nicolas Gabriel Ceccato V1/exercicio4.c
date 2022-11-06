#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma certa quantidade de inteiros que são armazenados num vetor v. A
quantidade deve ser definida pelo usuário, e o programa aloca espaço para v. O programa deve
armazenar os valores positivos em um vetor vp e o valores negativos no vetor vn. Como as quantidades
de valores positivos e negativos são desconhecidas, o espaço para vp e vn deve ser alocado
dinamicamente. Os vetores vp e vn não devem conter zeros. Ao final, imprima os três vetores. Pode ser
feito com malloc() ou com realloc(). */
void imprime (int *v, int n){
	int i;
	for (i = 0; i < n; i++){
		printf ("%i ", v[i]);
	}
}
int main(int argc, char *argv[]) {
	int *v, n, *vp = NULL, *vn = NULL, qp = 0, qn = 0, jp = 0, jn = 0, i;
	
	printf("quantos termos deseja alocar no vetor: ");
	scanf("%i", &n);
	
	v = (int *)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++){
		printf("Digite o %i termo do vetor: ", i+1);
		scanf("%i", &v[i]);
		
		if (v[i] > 0){
			qp += 1;
			vp = realloc (vp, sizeof(int)*qp);
			vp[qp-1] = v[i];
			
		}else{
			if (v[i] < 0){
				qn += 1;
				vn = realloc (vn, sizeof(int)*qn);
				vn[qn-1] = v[i];
			}
		}
	}
	
	printf("\nVetor original\n");
	imprime (v, n);
	printf("\nVetor positivo\n");
	imprime (vp, qp);
	printf("\nVetor negativo\n");
	imprime (vn, qn);
	
	free(v);
	free(vn);
	free(vp);
	return 0;
}
