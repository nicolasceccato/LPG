#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ordena (int v[], int n){
	int i, j, i_menor;
	
	for (i = 0; i < n - 1; i++){
		i_menor = i;
		for (j = i+1; j < n; j++){
			if (v[j] < v[i_menor]){
				i_menor = j;
			}
			
		}
	
		int aux = v [i];
		v[i] = v[i_menor];
		v[i_menor] = aux;
	}
	printf("\nVetor ordenado : \n");
	for(i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
	
}
int busca (int v[], int n, int chave){
	int ini = 0, fim = n-1, meio, cont =0;
	do{
		meio = (ini + fim)/2;
		cont++;
		
		if (v[meio] == chave){
			printf("\nchave encontrada apos %i iteracoes\n", cont);
			return meio;
		}else{
			if (v[meio] < chave){
				ini = meio + 1; 
			}else{
				fim = meio - 1 ;
			}
		}
		
	} while (ini <= fim);
	return -1;
}
int main(int argc, char *argv[]) {
	int i, n = 10;
	int v[n];
	
	srand(time(0));
	
	for (i = 0; i < n; i++){
		v[i] = rand() % 11;	
	}
	printf("Vetor original: \n");
	for (i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
	
	ordena (v, n);
	
	
	int chave;
	printf ("\ndigite a chave a ser encontrada: ");
	scanf("%i", &chave);
	
	int t = busca(v,n,chave);
	
	if (t == -1){
		printf("chave n encontrada no vetor \n");
		
	}else{
		printf("chave encontrada em %i\n", t);
	}
return 0;
}
