#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
	int j;
	*pMax = vet[0];
	*pIndice = 0;
	for (j = 1; j < tam; j++){
		if (vet[j] > *pMax){
			*pMax = vet[j];
			*pIndice = j;
		}
	}
	
}
int main(int argc, char *argv[]) {
	float v[5] = {0 , 1 ,2 ,5 , -8};
	float maior;
	int i;
	
	max_vetor(v, 5, &maior, &i);
	
	printf("\no maior valor do vetor eh igual a %f e esta localizado no indice %i\n", maior, i);
	return 0;
}
