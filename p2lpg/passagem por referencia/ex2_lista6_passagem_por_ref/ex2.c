#include <stdio.h>
#include <stdlib.h>

/* Escreva uma fun��o que troca os valores entre duas vari�veis do tipo float. Fa�a um programa que leia
duas vari�veis e mostre seus valores na tela. Em seguida, troque os valores (usando a fun��o) e mostre
novamente os valores.
void troca_valor(float *x, float *y); */
void troca_valor(float *x, float *y){
	
	float aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
	
}
int main(int argc, char *argv[]) {
	float a, b;
	scanf("%f%f", &a, &b);
	printf("a = %f\nb = %f\n", a, b);
	troca_valor(&a, &b);
	
	printf("a = %f\nb = %f", a, b);
	return 0;
}
