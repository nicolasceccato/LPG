#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inc_dec (int *a, int *b){
	
	*a += 1;
	*b -= 1;
	
}
int main(int argc, char *argv[]) {
	int x, y;
	
	printf("digite dois valores x e y: ");
	scanf("%i%i", &x, &y);
	
	printf("\nOs valores de x e y sao:\n");
	printf("\nx = %i\n", x);
	printf("\ny = %i\n", y);
	
	inc_dec(&x, &y);
	
	printf("\nOs valores atualizados de x e y sao:\n");
	printf("\nx = %i\n", x);
	printf("\ny = %i\n", y);
	return 0;
}
