#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Escreva um programa que determine o maior valor de um vetor bem como sua posição no vetor (índice).
Tal processamento deve ser feito em uma função que recebe o vetor (do tipo float) e sua capacidade, e
“retorna” o maior elemento e sua posição.
void max_vetor(float vet[], int tam, float *pMax, int *pIndice); */
void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
	float aux;
	*pMax = vet[0];
	
	int i;
	
	for (i = 0; i < tam ; i++){
		if(vet[i] > *pMax){
			*pMax = vet[i];
			*pIndice = i;
		
		}
	}
}
int main(int argc, char *argv[]) {
	float *v, maximo;
	int i, n, indice;
	
	printf("quantos termos tera o vetor? ");
	scanf("%i", &n);
	
	v = malloc (sizeof(float)*n);
	
	srand(time(0));
	
	for (i = 0; i < n; i++){
		v[i] = rand() % 100;
	}
	for (i = 0; i < n; i++){
		printf("%f ", v[i]);
	}
	max_vetor(v, n, &maximo, &indice);
	printf("maior valor = %.2f\nIndice = %i", maximo, indice);
	return 0;
}
