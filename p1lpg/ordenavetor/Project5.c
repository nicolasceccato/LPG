#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void mostra_vetor(int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
}
void ordena_vetor(int v[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++){
		int i_menor = i;
		for (j = i + 1; j < n; j++){
			if (v[j] < v [i_menor]){
				i_menor = j;
				
			}
		}
		int aux = v[ i];
		v[i] = v[i_menor];
		v[i_menor] = aux;	
	}
	
}
int busca_vetor(int v[], int n, int chave){
	int ini = 0, fim = n-1, meio;
	do{
		meio = (ini + fim)/2;
		if (v [ meio] == chave){
			return meio;
			
		}else{
			if (v[meio] < chave){
				ini = meio+ 1;
			}else{
				fim = meio - 1;
			}
		}
	}while(ini <= fim);
	return -1;
}
int main(){

	int v[MAX] = {6, 9, 4, -3, 17, 22, 13, 81, 44, 32};
	printf("Vetor original:\n");
	mostra_vetor(v, MAX);
	ordena_vetor(v, MAX);
	printf("Vetor ordenado:\n");
	mostra_vetor(v, MAX);
	
	printf("\n");
	int chave;
	printf("digite a chave a ser buscada no vetor ");
	scanf("%i", &chave);
	int t = busca_vetor(v, MAX, chave);
	
	if (t == -1){
		printf("chave n encontrada\n");
	}else{
		printf("chave encontrada em %i\n ", t);
	}
	return 0;
}
