#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fatorial (int n);
float valor (int n);

int main(int argc, char *argv[]) {
	int qtd;
	
	printf("digite a quantidade de termos: ");
	scanf("%i", &qtd);
	
	
	printf("o valor eh: %f", valor (qtd));
	return 0;
}

float fatorial(int n){
	if (n == 0 ){
		return 1;
	}else{
		return (n*(n-1));
	}
}
float valor (int n){
	
	if (n == 0){
		return 1;
	}else{
		
		return (valor(n-1) + (1.0/fatorial(n)));
		
	}
}
