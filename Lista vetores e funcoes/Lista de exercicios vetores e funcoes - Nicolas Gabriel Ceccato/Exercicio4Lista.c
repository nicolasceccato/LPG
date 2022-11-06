#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe um vetor v, sua capacidade n e uma chave de busca. A função também
recebe um vetor que vai armazenar os índices em que a chave se encontra em v. A função deve fazer a
busca de maneira sequencial e armazenar os índices em que a chave se encontra e preencher o resto do
vetor com -1. Os vetores v e indices devem ter a mesma capacidade. Protótipo da função:
void busca_todos(int v[], int n, int chave, int indices[]); */

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite quantos termos tera o vetor: ");
	scanf("%i", &n);
	
	int v[n], indices[n];
	
	gera_vetor(v, n);
	mostra_vetor(v, n);

	int chave;
	
	printf("\ndigite a chave a ser buscada: ");
	scanf("%i", &chave);
	
	busca_todos(v, n, chave, indices);
	
	
	return 0;
}
void gera_vetor(int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("digite o %i termo do vetor: ", i+1);
		scanf("%i", &v[i]);
	}
}

void mostra_vetor(int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%i ", v[i]);	
	}
}
void busca_todos(int v[], int n, int chave, int indices[]){
	int i, j;
	
	for (j = 0; j < n; j++){
		indices[j] = -1;
	
	}
	j = 0;
	for (i = 0; i < n; i++){
		if (v[i] == chave){
			
			indices[j] = i;
			j++;
			}
		
		}
	
	
	for (j = 0; j < n; j++){
		printf("%i ", indices[j]);
	}
}
