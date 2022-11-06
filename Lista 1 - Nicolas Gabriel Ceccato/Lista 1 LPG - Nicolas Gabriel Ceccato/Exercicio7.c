#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	do{
		printf("digite o numero de casos de teste que deseja (n > 0): ");
		scanf("%i", &n);
		
		
	}while (n <= 0);
	
	int i, j, x, y, soma_impar = 0;
	
	for (i = 1; i <= n; i++){
		
		printf ("digite dois valores para serem um intervalo: ");
		scanf("%i%i", &x, &y);
		
		if (x > y){
			for (j = y + 1;j < x; j++){
				if(j % 2 != 0){
					soma_impar = soma_impar + j;
				}
			}
			
		}
		
		else{
			for (j = x + 1;j < y; j++){
				if(j % 2 != 0){
					soma_impar = soma_impar + j;
				}
			}
			
		}
		printf("%i\n", soma_impar);
		soma_impar = 0; 
	}
	
	return 0;
}
