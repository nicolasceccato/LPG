#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
1 – Dado o vetor V, definido por:
int V[100];
 Faça um programa que execute os seguintes passos
a) preencha todos os elementos do vetor com o valor 71;
b) mostre os 100 valores contidos no vetor, uns ao lado dos outros
c) preencha o vetor com os números inteiros 1, 2, 3..., 100;
d) mostre os 100 valores contidos no vetor, uns embaixo dos outros
e) preencha o vetor: com 1 em V[i], caso i seja um quadrado perfeito, e com 0 nos demais casos.
f) mostre os 100 valores contidos no vetor, uns ao lado dos outros
 */

int main(int argc, char *argv[]) {
	
	int v[100], i;
	
	for (i = 0; i < 100; i++){
		v[i] = 71;
		
	}
	for (i = 0; i < 100; i++){
		printf ("%i ",v[i]);
		
	}
	printf("\n");
	
	for (i = 0; i < 100; i++){
		v[i] = i+1;
		
	}
	for (i = 0; i < 100; i++){
		printf ("%i\n",v[i]);
		
	}
	printf("\n");
	for (i = 0; i < 100; i++){
		v[i] = 0;
		
	}
	for (i = 0; i < 10; i++){
		v[i*i] = 1;
		
	}
	for (i = 0; i < 100; i++){
		printf ("%i ",v[i]);
	
	}
	return 0;
}
