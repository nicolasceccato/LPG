#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	
	do{
	
	printf("digite dois valores inteiros para criar um intervalo: ");
	scanf("%i%i", &x, &y);
	
	}while(x == y);
	
	int i, soma_impar = 0;
	if (x > y){
		
		for (i = y+1; i < x; i++){
			if(i % 2 != 0){
				soma_impar = soma_impar + i;
			}
			
		}
		
	}
	else{
		
		for (i = x+1; i < y; i++){
			if(i % 2 != 0){
				soma_impar = soma_impar + i;
			}
			
		}
		
	}
	printf ("%i\n", soma_impar);
	return 0;
}
