#include <stdio.h>
#include <stdlib.h>

/* Fa�a uma fun��o que receba um par�metro (por valor) com o total de minutos passados ao longo do dia
e receba tamb�m dois par�metros (refer�ncia) no qual deve preencher com o valor da hora e do minuto
corrente. Fa�a um programa que leia do teclado quantos minutos se passaram desde meia-noite e
imprima a hora corrente (use a sua fun��o).
void cacula_hora(int totalMinutos, int *ph, int *pm); */
void calcula_hora(int totalMinutos, int *ph, int *pm){
	*ph = totalMinutos / 60;
	*pm = totalMinutos % 60;
	
}
int main(int argc, char *argv[]) {
	int tempo, hora, minuto;
	
	scanf("%i", &tempo);
	
	calcula_hora(tempo, &hora, &minuto);
	
	printf("%ih:%im", hora, minuto);
	
	return 0;
}
