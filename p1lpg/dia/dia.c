#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i, n;
	
	printf("Digite um numero de dias: ");
	scanf("%i", &n);
	int soma = 0;
	int mes = 0;
	int anterior = 0;
	for (i = 0; soma < n ; i++){
		anterior = soma;
		soma = soma + v[i];
		mes = i;
		
		
	}
	int dia = n - anterior;
	
	printf("\n%i/%i/%i\n", dia,mes,2022);
	return 0;
}
