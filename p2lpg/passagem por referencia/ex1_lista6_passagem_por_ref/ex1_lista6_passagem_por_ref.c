#include <stdio.h>
#include <stdlib.h>

/* Fa�a uma fun��o que recebe dois n�meros, a e b. A fun��o deve incrementar a e decrementar b.

 */
void inc_dec (int *a, int *b){
	(*a)++;
	(*b)--;
	
}
	
	
int main(int argc, char *argv[]) {
	int x, y;
	
	scanf("%i%i", &x, &y);
	
	inc_dec(&x, &y);
	
	printf("x = %i\ny = %i", x, y);
	return 0;
}
