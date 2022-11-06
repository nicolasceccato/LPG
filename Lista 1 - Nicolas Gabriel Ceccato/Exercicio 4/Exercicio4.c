#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	
	do{
		
		printf("Digite o numero de valores (n > 0) que deseja: ");
		scanf("%i", &n);
		
	}while(n <= 0);
	
	int cont_par = 0, cont_impar = 0, valor, cont_positivo = 0, cont_negativo = 0; 
	
	for (i = 1; i <= n; i++){
	
		printf("Digite o %i valor: ", i);
		scanf ("%i", &valor);
		
		if (valor % 2 == 0){
			cont_par++;
		}
		else{
			cont_impar++;
		}
		if (valor > 0){
			cont_positivo++;
			
		}
		if (valor < 0){
			cont_negativo++;
		}
	}
	printf ("%i valor(es) par(es)\n", cont_par);
	printf ("%i valor(es) impar(es)\n", cont_impar);
	printf ("%i valor(es) positivo(s)\n", cont_positivo);
	printf ("%i valor(es) negativo(s)\n", cont_negativo);
	
		
	return 0;
}
