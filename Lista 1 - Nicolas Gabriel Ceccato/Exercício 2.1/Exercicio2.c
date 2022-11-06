#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a1, b1, c1, a2, b2, c2;
	
	printf("digite três lados de um triângulo: ");
	scanf("%lf%lf%lf", &a1, &b1, &c1);
	
	while (a1 <= 0){
		
		printf("valor invalido para o primeiro valor. digite um numero maior que zero:\n ");
		scanf("%lf", &a1);
		
	}
	while (b1 <= 0){
		
		printf("valor invalido para o segundo valor. digite um numero maior que zero:\n ");
		scanf("%lf", &b1);
		
	}
	while (c1 <= 0){
		
		printf("valor invalido para o terceiro valor. digite um numero maior que zero:\n ");
		scanf("%lf", &c1);
		
	}
	
	if (a1 > b1)
	
	
	
	return 0;
}
