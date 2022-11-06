#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que utilize os argumentos argv e argc. O programa dever� receber dois
n�meros e apresentar a soma dos dois. Veja que para isto voc� dever� ter tamb�m uma fun��o
que transforme uma string em um inteiro, pois o tipo de argv � char; logo voc� ir� receber
strings e dever� transform�-las em inteiros antes de som�-las. */

int main(int argc, char *argv[]) {
	int i, soma = 0;
	for (i = 0; i < argc; i++){
		soma += atoi(argv[i]);
	}
	printf("\n a soma resultante eh igual a %i\n", soma);
	return 0;
}
