#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que armazene o nome dos doze meses do ano em um vetor de ponteiros
para o tipo char. Ap�s isto, pergunte ao usu�rio qual o n�mero do m�s que ele nasceu e mostre
o nome do m�s por extenso usando as strings armazenadas no vetor de ponteiros.
 */

int main(int argc, char *argv[]) {
	char **s;
	
	int n, i, j, q;
	
	printf("quantos termos terermos? ");
	scanf("%i", &n);
	
	s = (char*)malloc(sizeof(char*)*n);
	
	for (i = 0; i < n; i++){
		s[i] = (char*)malloc(sizeof(char));
		printf("digite o %io termo: ", i+1);
		scanf(" %s", s[i]);
	}
	for (i = 0; i< n; i++){
		printf("%s ", s[i]);
	}
	printf("qual mes nasceu?: ");
	scanf("%i", &j);
	
	printf("\nvc nasceu em %s\n", s[j-1]);
	return 0;
}
