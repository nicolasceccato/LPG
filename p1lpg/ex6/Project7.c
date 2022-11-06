#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int eh_primo(int x){
	int i, cont = 0;
	
	for (i = 1; i <= x; i++ ){
		if (x % i == 0){
			cont++;
		}
	}
	if (cont == 2){
		printf("\n%i eh primo\n", x);
		return 1;
	}else{
		return 0;
	}
	
}

int soma_primos(int v[], int n){
	int i, x, soma = 0;
	
	for (i = 0; i < n; i++){
		x = v[i];
		if(eh_primo(x)){
			soma = soma + x;
		}
	}
	return soma; 	
}
int main(int argc, char *argv[]) {
	int n = MAX, i;
	int v[n];
	
	srand(time(0));
	
	for(i = 0; i < n; i++){
		v[i] = rand()%100;
	}
	printf("v[%i]: ", n);
	
	for(i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
	printf("\na soma dos numeros primos do vetor eh igual a: %i\n", soma_primos(v,n));
	
	return 0;
}
