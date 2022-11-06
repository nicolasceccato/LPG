#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int somador (int n){
	int i, soma = 0;
	
	for (i = 1; i <= n; i++){
		soma = soma + i;
	}
	
	return soma;
	
}
int main(int argc, char *argv[]) {
	int termos;
	
	printf ("digite a quantidade de termos que deseja: ");
	scanf ("%i", &termos);
	
	printf("a soma de todos os %i termos eh igual a: %i", termos, somador(termos));
	
	
	return 0;
}
