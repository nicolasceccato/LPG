#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fatorial (int n);
float somatoria (int n);
int main(int argc, char *argv[]) {
	int numero;
	
	printf("Digite o numero de termos q deseja: ");
	scanf("%i", &numero);
	
	float soma = somatoria(numero);
	printf("\npara %i termos : %f\n", numero, soma);
	
	return 0;
}
float fatorial (int n){
	int i, fat = 1;
	
	for (i = 1; i <= n; i++){
		fat = fat*i;
	}
	return fat;
}

float somatoria (int n){
	float soma = 0;
	int i;
	
	for (i = 0; i <= n; i++){
		soma = soma + 1.0/fatorial(i);  
	}
	return soma;
}
