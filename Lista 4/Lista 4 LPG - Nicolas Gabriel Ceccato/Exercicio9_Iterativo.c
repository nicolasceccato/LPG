#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float somador (int n){
	float i, soma = 0;
	for (i = 1; i <= n; i++){
		soma = soma + (1/i);
		
	} 
	return soma;
}
int main(int argc, char *argv[]) {
	int termos;
	printf("digite a quantidade de termos que deseja: ");
	scanf("%i", &termos);
	
	printf("a soma dos %i termos eh igual a : %.3f",termos, somador(termos) );
	
	return 0;
}
