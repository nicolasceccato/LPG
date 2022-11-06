#include <stdio.h>
#include <stdlib.h>  // biblioteca que contém função rand/srand
#include <time.h>

#define MAX 1000
int gera_vetor (int V[], int X){
	int i;
	srand(time(0));
	for (i = 0; i < X ; i++){
		V[i] = rand()%1000;
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
int busca_binaria (int V[], int X, int chave ){
	int meio, fim = X - 1, inicio = 0, cont = 0;
	
	do{
		cont++;
		meio = (inicio + fim)/2;
		
		if (V[meio] == chave){
			printf("\niterações: %i\n", cont);
			return meio;
		}
		if (V[meio] < chave){
			inicio = meio + 1;
		}
		if (V[meio] > chave){
			fim = meio -1;
		}
		
	}while (inicio <= fim);
	printf("\niteracoes: %i\n", cont);
	return -1;
}
int main(){

	int v[MAX];
	
	
	gera_vetor(v, MAX);
	
	printf("Vetor original:\n");
	
	mostra_vetor(v, MAX);
	
	ordena_vetor(v, MAX);
	
	printf("\nVetor ordenado:\n");
	
	mostra_vetor(v, MAX);

	int chave;
	
	printf("digite qual valor deseja encontrar no vetor: ");
	scanf("%i", &chave);
	
	int indice = busca_binaria(v, MAX, chave);
	
	if (indice == -1){
		printf("chave nao encontrada no vetor\n");
	}else{
		printf("\nchave encontrada em indice: %i\n", indice);
	
	return 0;
	}
}

