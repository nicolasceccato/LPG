#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibo (int n){
	int atual, ultimo = 1, penultimo = 1;
	int i;
	
	printf ("1 : 1\n");
	printf ("2 : 1\n");
	for (i = 3; i <= n ; i++){
		atual = penultimo + ultimo;
		ultimo = penultimo;
		penultimo = atual;
		printf ("%i : %i\n",i, atual);
		
	}
	return 0;
}
	
int main(int argc, char *argv[]) {
	int x;
	
	printf("quantos termos deseja na serie de fibonacci? ");
	scanf("%i", &x);
	
	fibo (x);
	return 0;
}
