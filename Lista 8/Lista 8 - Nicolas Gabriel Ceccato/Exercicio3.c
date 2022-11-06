#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que utilize os argumentos argv e argc. O programa deverá receber dois
números e apresentar a soma dos dois. Veja que para isto você deverá ter também uma função
que transforme uma string em um inteiro, pois o tipo de argv é char; logo você irá receber
strings e deverá transformá-las em inteiros antes de somá-las. */

int main(int argc, char *argv[]) {
	int i, soma = 0;
	for (i = 0; i < argc; i++){
		soma += atoi(argv[i]);
	}
	printf("\n a soma resultante eh igual a %i\n", soma);
	return 0;
}
