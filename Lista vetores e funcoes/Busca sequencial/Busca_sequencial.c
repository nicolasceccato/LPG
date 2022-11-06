#include <stdio.h>
#include <stdlib.h>  // biblioteca que contém função rand/srand
#include <time.h>

#define MAX 10
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
int busca_sequencial_no_vetor (int V[], int X, int chave){
	int i;
	for (i=0; i < X; i++){
		if(V[i] == chave){
			return i;
			
		}
	}
	return -1;
		
}


int main(){

	int v[MAX];
	
	
	gera_vetor(v, MAX);
	
	printf("Vetor original:\n");
	
	mostra_vetor(v, MAX);
	
	int chave;
	
	printf("digite qual valor deseja encontrar no vetor: ");
	scanf("%i", &chave);
	 
	int indice = busca_sequencial_no_vetor(v, MAX, chave);
	
	if (indice == -1){
		printf("chave nao encontrada no vetor\n");
	}else{
		printf("\nchave encontrada em indice: %i\n", indice);	
	}
	
	return 0;
	}

