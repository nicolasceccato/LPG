#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float somador (int n){
	float soma = 0;
	if (n == 1){
		return 1;
	}else{
		return ((1/n) + somador (n-1));
	}	
	} 


int main(int argc, char *argv[]) {
	int termos;
	
	printf("digite a quantidade de termos que deseja: ");
	scanf("%i", &termos);
	
	printf("a soma dos %i termos eh igual a : %.6f",termos, somador(termos) );
	
	return 0;
}
