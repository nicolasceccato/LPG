#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe um vetor v e um inteiro n. A função deve gerar o n termos de sequência de
Fibonacci dentro de v. Protótipo da função:
void vetor_fibonacci(int v[], int n);*/
void vetor_fibonacci(int v[], int n);
int main(int argc, char *argv[]) {
	int m;
	printf("digite quantos termos deseja imprimir da sequencia de fibonacci: \n");
	scanf("%i", &m);
	
	int vetor[m];
	
	vetor_fibonacci(vetor, m);
	
	return 0;
}
void vetor_fibonacci(int v[], int n){
	int i;
	v[0] = 1;
	v[1] = 1;
	
	for (i = 2; i < n; i++){
		v[i] = v[i - 1] + v[i - 2];
	}
	for (i = 0; i < n; i++){
		printf("%i termo: %i\n", i+1, v[i]);
	}
}
