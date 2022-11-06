#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que receba um parâmetro (por valor) com o total de minutos passados ao longo do dia
e receba também dois parâmetros (referência) no qual deve preencher com o valor da hora e do minuto
corrente. Faça um programa que leia do teclado quantos minutos se passaram desde meia-noite e
imprima a hora corrente (use a sua função).
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
