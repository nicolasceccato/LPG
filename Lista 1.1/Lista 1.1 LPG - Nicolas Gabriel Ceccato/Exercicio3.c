#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x;
	int n, i, j;


	printf("Digite x e a quantidade de termos n: ");
	scanf("%f%d", &x, &n);

	float e_x = 1; // inicializa somat�rio com zero
	
	//for( i = 0 ; i <= n ; i++ ){ // gera os termos
	
	float termo = 1;
		
	for( j = 1 ; j <= n ; j++ ){
		
		termo = termo * x / j;
		e_x = e_x + termo; // Acumula termo no somat�rio	
		}
	
	
	printf("e elevado a %.3f = %.8f\n", x, e_x);
	
	
	return 0;
}
