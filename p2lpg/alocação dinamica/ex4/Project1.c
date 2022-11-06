#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia uma certa quantidade de inteiros que s�o armazenados num vetor v. A
quantidade deve ser definida pelo usu�rio, e o programa aloca espa�o para v. O programa deve
armazenar os valores positivos em um vetor vp e o valores negativos no vetor vn. Como as quantidades
de valores positivos e negativos s�o desconhecidas, o espa�o para vp e vn deve ser alocado
dinamicamente. Os vetores vp e vn n�o devem conter zeros. Ao final, imprima os tr�s vetores. Pode ser
feito com malloc() ou com realloc().  */
int printar (int *v, int t){
	int i;
	for(i = 0; i < t;i++){
		printf("%i ", v[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int *v, *vn = NULL, *vp = NULL, i, total, neg = 0, pos = 0;
	
	printf("quantos valores tera o vetor: ");
	scanf("%i", &total);
	
	v = (int *)malloc(sizeof(int)*total);
	
	for (i = 0; i < total; i++){
		printf("digite o %i termo do vetor: ",i+1);
		scanf("%i", &v[i]);
		
		if (v[i] > 0){
			pos = pos + 1;
			vp = realloc (vp, sizeof(int)*pos);
			vp[pos-1] = v[i];
		}else{
			if(v[i] < 0){
				neg = neg +1;
				vn = realloc (vn, sizeof(int)*neg);
				vn [neg-1] = v[i];
			}
		}
	}

	printar(v,total);
	printar(vp,pos);
	printar(vn,neg);
	return 0;
}
