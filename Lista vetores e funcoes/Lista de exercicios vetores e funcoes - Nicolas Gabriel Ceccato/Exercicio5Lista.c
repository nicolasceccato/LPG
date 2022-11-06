#include <stdio.h>
#include <stdlib.h>

/* Implemente a versão recursiva da função que faz a busca sequencial em um vetor. Protótipo da função:
int busca_seq_rec(int v[], int n, int chave); */

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite quantos termos tera o vetor: ");
	scanf("%i", &n);
	
	int v[n];
	
	gera_vetor(v, n);
	mostra_vetor(v, n);

	int chave;
	
	printf("\ndigite a chave a ser buscada: ");
	scanf("%i", &chave);
	
	int t = busca_seq_rec(v, n, chave);
	
	if (t == -1){
		printf("\nchave n encontrada no vetor\n");
	}else{
		printf("\nchave encontrada no indice %i\n", t);
	}
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
int busca_seq_rec(int v[], int n, int chave){
	
	if (n < 0){
		return -1;
	}
	
	if (v[n] == chave){
		return n;
	}else{
		return busca_seq_rec(v, n - 1, chave);
	}
}
	
	

