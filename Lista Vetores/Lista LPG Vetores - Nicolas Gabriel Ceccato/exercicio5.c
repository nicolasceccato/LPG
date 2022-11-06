#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
5 � Fazer um programa que crie um vetor que contenha o n�mero de dias de cada m�s (veja exemplo
abaixo). O usu�rio dever� digitar um valor inteiro que representa o n�mero de dias que se passaram
desde o in�cio de 2022 e o programa deve dizer que data (dia e m�s) de 2022 este valor representa.
Caso o usu�rio digite um n�mero inv�lido (negativo, zero ou maior que 365), o programa dever� pedir
que ele digite novamente.
 */

int main(int argc, char *argv[]) {
	
	int dias_mes [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int n;
	do{
		
		printf("digite uma quantidade de numeros para saber qual dia e mes de 2022 ele representa: ");
		scanf("%i", &n);
		
	}while (n <= 0 || n > 365);
	int soma_dias_mes_anterior;
	int i, mes;
	int soma_dias = 0;
	for (i = 0; n > soma_dias; i++){
		
		soma_dias = soma_dias + dias_mes [i];
		mes = i;		
		soma_dias_mes_anterior = soma_dias - dias_mes[i];	
	}
	
	//printf ("%i e %i", soma_dias, soma_dias_mes_anterior );
	
	int dia_do_mes = n - (soma_dias_mes_anterior);
	
	printf ("o numero digitado representa o dia %i/%i/2022\n", dia_do_mes,mes);
	return 0;
}
