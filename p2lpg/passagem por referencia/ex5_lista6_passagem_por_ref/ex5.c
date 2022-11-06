#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Escreva uma função que recebe um vetor e sua capacidade como parâmetros e precisa “retornar” o
maior e o menor valores do vetor.*/
void max_min(int vet[], int tam, int *pMin, int *pMax){
	int i;
	*pMax = vet[0];
	*pMin = vet[0];
	for (i = 1; i < tam; i++){
		if (vet[i] > *pMax){
			*pMax = vet[i];
		}if (vet[i] < *pMin){
			*pMin = vet[i];
		}
	}	
}

int main(int argc, char *argv[]) {
	int *v;
	int n, menor, maior;
	
	printf("quantos termos deseja que o vetor tenha? ");
	scanf("%i", &n);
	
	v = malloc(sizeof(int)*n);
	
	int i;
	srand(time(0));
	for (i = 0; i < n; i++){
		v[i]= rand()%101;
	}
	
	
	for (i = 0 ; i < n; i++){
		printf("%i ",v[i]);
	} 
	max_min(v, n, &menor, &maior);
	
	printf("\nmenor = %i\nmaior = %i\n", menor, maior);
	return 0;
}
