#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[50];
	
	printf("digite uma string de digitos: ");
	scanf(" %s", str);
	
	int i, soma = 0;
	
	for(i = 0; str[i] != '\0'; i++){
		printf("\n%i termo : %i\n",i+1,  str[i]-48);	
		soma = soma + (str[i] - 48);
	}
	printf("\na soma dos inteiros convertidos eh igual a %i\n", soma);
	return 0;
}
