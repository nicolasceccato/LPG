#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe dois vetores de mesma capacidade n e compara se os mesmos são iguais,
ou seja, se contêm os mesmos valores e na mesma ordem. A função deve ser booleana, ou seja, se forem
iguais retorna 1, caso contrário retorna 0. */

void gera_vetor (float c[], int n);
void mostra_vetor (float c[], int n);
int vetores_iguais(float a[], float b[], int n);

int main(int argc, char *argv[]) {
	int n;
	
	printf("digite quantos termos terão os vetores: ");
	scanf("%i", &n);
	
	float vetorA[n], vetorB[n];
	
	gera_vetor(vetorA, n);
	
	gera_vetor(vetorB, n);	
	
	mostra_vetor (vetorA, n);
	
	mostra_vetor (vetorB, n);
	
	int t = vetores_iguais(vetorA, vetorB, n);
	
	if (t == 1){
		
		printf("\nos dois vetores sao iguais\n");
	
	}else{
		if (t == 0){
			printf ("\nos vetores sao diferentes\n");
		}
	}		
	
	
	return 0;
}
void gera_vetor (float c[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("digite o %i termo do vetor: ", i+1);
		scanf("%f", &c[i]);
	}
	
}
void mostra_vetor (float c[], int n){
	int i;
	for (i = 0; i < n; i++){
		
		printf("%.2f ", c[i]);
		
	}
	printf("\n");
}
int vetores_iguais(float a[], float b[], int n){
	int i, cont = 0;
	for (i = 0; i < n; i++){
		if (a[i] == b[i]){
			cont++;
		}
	}		
	if (cont == n){
		return 1;	
	}else{
			return 0;
		}
	}


