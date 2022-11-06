#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Escreva uma função que recebe um vetor float v e sua capacidade n, e retorne o endereço de um vetor
alocado dinamicamente, cujo conteúdo seja o mesmo de v, ou seja, a função retorna um clone do vetor
v. Faça o programa principal com a entrada de dados (ou um vetor fixo), chame a função e mostre o
vetor resultante na tela. Protótipo da função:
float *clone( float *v, int n );
 */
float *clone( float *v, int n ){
	int i;
	float *v2;
	v2 = malloc (sizeof(float)*n);
	for (i = 0; i < n; i++){
		v2[i] = v[i];
	}
	return v2;
}
void printar (float *v, int t){
	int i;
	for (i = 0; i < t; i++){
		printf("%f ", v[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int n, i;
	
	printf("quantos termos tera o vetor? ");
	scanf("%i", &n);
	float v[n], *v2;
	srand(time(0));
	
	for (i = 0; i < n; i++){
		v[i] = rand () % 10;
	}
	printar(v,n);
	v2 = clone (v,n);
	printar(v2,n);
	
	printf("endereço de v: %i\n", &v);
	printf("endereço de v2: %i\n", v2);
	return 0;
}
