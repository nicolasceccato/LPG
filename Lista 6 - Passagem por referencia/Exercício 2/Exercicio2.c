#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void troca_valor(float *x, float *y){
	float aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
}
int main(int argc, char *argv[]) {
	float a, b;
	
	printf("Digite dois valores a e b:");
	scanf("%f%f", &a, &b);
	
	printf("\nOs valores a e b sao:\n");
	printf("a = %.2f\n", a);
	printf("b = %.2f\n", b);
	
	troca_valor(&a, &b);
	
	printf("\nOs valores de a e b apos a inversao sao:\n");
	printf("a = %.2f\n", a);
	printf("b = %.2f\n", b);
	
	
	return 0;
}
