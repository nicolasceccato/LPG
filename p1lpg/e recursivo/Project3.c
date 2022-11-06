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
	if (n == 0){
		return 1;
	}else{
		return n*fatorial(n-1);	
	}
	
}

float somatoria (int n){
	if (n == 0){
		return 1;
	}else{
		return 1.0/fatorial(n) + somatoria(n-1);
	}
}
