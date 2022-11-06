#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Escreva uma fun��o que recebe um vetor float v e sua capacidade n, e retorne o endere�o de um vetor
alocado dinamicamente, cujo conte�do seja o mesmo de v, ou seja, a fun��o retorna um clone do vetor
v. Fa�a o programa principal com a entrada de dados (ou um vetor fixo), chame a fun��o e mostre o
vetor resultante na tela. Prot�tipo da fun��o:
float *clone( float *v, int n ); */
float *clone( float *v, int n ){
	int i;
	float *v2;
	v2 = (float *)malloc(sizeof(float)*n);
	
	for (i = 0; i < n; i++){
		v2[i] = v[i];
	}
	return v2;
	
}
int main(int argc, char *argv[]) {
	int n, i;
	
	printf("quantos termos terao no vetor?\n");
	scanf("%i", &n);
	
	float v[n], *address;
	
	srand(time(0));
	
	for (i = 0; i < n; i++){
		v[i] = rand () % 11;	
	}
	printf("\nvetor original\n");
	for (i = 0; i < n; i++){
		printf ("%.2f ", v[i]);	
	}

	printf("\n\n");
	address =  clone( v, n );
	
	printf ("o endereco do novo vetor eh de %i ate %i\n", &address[0], &address[n-1]);
	for (i = 0; i < n; i++){
		printf ("%i ", &address[i]);
	}
	printf("\nvetor alocado dinamicamente\n");
	for (i = 0; i < n; i++){
		printf ("%.2f ", address[i]);
	
	}
	free (address);
	return 0;
}
