#include <stdio.h>
#include <stdlib.h>

/* Fa�a uma fun��o que recebe um vetor e sua capacidade como par�metros e retorna o somat�rio dos
n�meros primos contidos no vetor. Recomenda-se utilizar a fun��o de verifica��o (se um n�mero � primo
ou n�o) j� implemetada. Prot�tipo:
int soma_primos(int v[], int n);
 */
void gera_vetor(int v[], int n);
void mostra_vetor(int v[], int n);
int soma_primos(int v[], int n);

int main(int argc, char *argv[]) {
	int m;
	printf("Digite quantos termos deseja em um vetor: \n");
	scanf("%i", &m);
	
	int vetor[m];
	
	gera_vetor(vetor, m);
	printf("\n");
	mostra_vetor(vetor, m);
	printf("\n");
	
	int t = soma_primos(vetor, m);
	printf("a soma dos termos primos do vetor resulta em: %i\n", t);
	
	return 0;
}
	

void gera_vetor(int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("Digite o %i termo do vetor: \n", i+1);
		scanf("%i", &v[i]);
	}
	
}
void mostra_vetor(int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%i ", v[i]);
			
	}
}
int soma_primos(int v[], int n){
	int i, j, somador = 0;
	
	for (i = 0; i < n; i++){
		
		int divisores = 0;
		
		if (v[i] > 1){
		
			for(j = 1; j <= v[i]; j++){
			
			
				if (v[i] % j == 0){
				
					divisores++;
				
				}
			}
		}
		
		if (divisores == 2){
			somador += v[i];
		}
		
		
	}
	
	return somador;
}


