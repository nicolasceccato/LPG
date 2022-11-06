#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void max_min(int vet[], int tam, int *pMin, int *pMax){
	*pMax = vet[0];
	int i;
	for(i = 1; i < tam; i++){
		if (vet[i] > *pMax){
			*pMax = vet[i];
		}
	}
	
	*pMin = vet[0];
	
	for(i = 1; i < tam; i++){
		if (vet[i] < *pMin){
			*pMin = vet[i];
		}
	}
	
}

int main(int argc, char *argv[]) {
	int v[5] = {-7, -3, -22, -1, -5};
	int n = 5;
	int maior, menor;
	
	max_min (v,n,&menor,&maior);
	
	printf("\no maior valor eh %i e o menor %i\n", maior, menor);
	return 0;
}
