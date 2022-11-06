#include <stdio.h>
#define MAX 10
int gera_vetor (int V[], int X){
	int i;
	for (i = 0; i < X ; i++){
		printf("digite o %i numero do vetor: ", i+1);
		scanf("%i", &V[i]);
	}
}
int mostra_vetor (int V[], int X){
	int i;
	for (i = 0; i < X; i++ ){
		printf("%i ", V[i]);
	}
}
int ordena_vetor (int V[],int X){
	int i, j;
	for (i = 0; i < X - 1; i++){
		int i_menor = i;
		for (j = i+1; j < X; j++){
			if (V[j] < V[i_menor]){
				i_menor = j;
				
			}
			
		}
	if (i != i_menor){
		int aux = V[i];
		V[i] = V[i_menor];
		V[i_menor] = aux;
	}	
		
	}
	return 0;
}
int main(){

	int v[MAX];
	
	
	gera_vetor(v, MAX);
	
	printf("Vetor original:\n");
	
	mostra_vetor(v, MAX);
	
	ordena_vetor(v, MAX);
	
	printf("\nVetor ordenado:\n");
	
	mostra_vetor(v, MAX);
	
	return 0;
	}

