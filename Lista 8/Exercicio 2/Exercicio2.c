#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que armazene o nome dos doze meses do ano em um vetor de ponteiros
para o tipo char. Ap�s isto, pergunte ao usu�rio qual o n�mero do m�s que ele nasceu e mostre
o nome do m�s por extenso usando as strings armazenadas no vetor de ponteiros.
*/

int main(){
	char *vp[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	int n;
	
	printf("Em que mes, de 1 a 12, voce nasceu? ");
	scanf("%i", &n);
	
	printf("\nvoce nasceu em %s\n", vp[n-1]);
	
	return 0;
}
