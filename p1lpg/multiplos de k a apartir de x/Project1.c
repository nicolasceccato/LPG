#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int soma_especial(int n, int k, int x);
int main(int argc, char *argv[]) {
	int n, k, x;
	
	printf("Digite n, k e x\n");
	scanf("%i%i%i", &n, &k, &x);
	
	int somador = soma_especial(n,k,x);
	
	printf("\nA soma dos %i termos que sao multiplos de %i a partir de %i eh igual a : %i\n", n, k, x, somador);
	
	return 0;
}
int soma_especial(int n, int k, int x){
	int i, soma = 0, cont = 0;
	
	for(i = x+1; cont < n; i++){
			if(i % k == 0){
				cont++;
				soma = soma + i;
			}
	}
	return soma;
		
}
