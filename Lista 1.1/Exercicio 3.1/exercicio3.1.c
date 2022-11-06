#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, x;
	float e_x = 1, termo = 1;
	
	printf("digite o expoente e quantos termos deseja jacobau: ");
	scanf("%i%i", &x, &n);
	
	for (i = 1; i <= n; i++){
		
		termo = termo * x / i;
		e_x = e_x + termo;
				
	}
	printf("jacobau, o valor de e elevado a %i com %i iteracoes eh igual a %f\n", x, n, e_x);
	
	
	return 0;
}
