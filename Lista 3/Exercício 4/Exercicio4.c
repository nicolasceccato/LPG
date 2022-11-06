#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int soma_impar (int x, int y){
	int i, soma = 0;
	if (x >= y){
		
		for (i = y + 1; i < x; i++){
			if (i % 2 != 0){
				soma = soma + i;
			}
			
		}
		
		return soma;
		}
	
	if (x <= y){
		
		for (i = x + 1; i < y; i++){
			if (i % 2 != 0){
				soma = soma + i;
			}
		}
		return soma;
	}	
		
	}
	

int main(int argc, char *argv[]) {
	int a, b;
	printf("Digite um valor: ");
	scanf("%i", &a);
	printf("Digite um valor: ");
	scanf("%i", &b);
	
	printf ("%i", soma_impar(a, b));
	
	return 0;
}
