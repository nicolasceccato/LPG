#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int eh_primo (int x){
	int i, cont = 0;
	
	for(i = 1; i <= x; i++){
		if(x % i == 0){
			cont++;
		}
	}
	if (cont == 2){
		return 1;
	}else{
		return 0;
	}
	
}
int soma_primos(int v[], int n){
	int i, soma = 0;
	for ( i = 0; i < n ; i++){
		if (eh_primo(v[i])){
			soma += v[i];
		}
	}
	return soma;
}
int main(int argc, char *argv[]) {
	int n, i;
	printf("Digite n: ");
	scanf("%i", &n);
	int v[n];
	
	srand(time(0));
	
	for (i = 0; i < n ; i++){
		v[i] = rand() % 10;
	}
	for (i = 0; i < n ; i++){
		printf ("%i ", v[i]);
	}
	
	printf("\nA soma dos primos contidos em v[i] eh igual a: %i\n", soma_primos(v,n));
	
	return 0;
}
