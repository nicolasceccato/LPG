#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float somador (int n){
	int i;
	float termo = 1, ex = 1;
	
	for (i=1; i<=n;i++){
		termo = termo * (1.0/i);
		ex = ex + termo;
	}
	return ex;
}
int main(int argc, char *argv[]) {
	
	int numero_de_termos;
	
	printf("digite quantos termos deseja: ");
	scanf("%i", &numero_de_termos);
	
	printf("o valor de e com %i iteracoes eh igual a %f\n", numero_de_termos, somador(numero_de_termos));
	
	return 0;
}
