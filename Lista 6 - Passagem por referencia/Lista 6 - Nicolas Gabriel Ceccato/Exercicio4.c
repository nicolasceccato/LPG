#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cacula_hora(int totalMinutos, int *ph, int *pm){
	
	*ph = totalMinutos/60;
	*pm = (totalMinutos%60)/60;
	
	
}
int main(int argc, char *argv[]) {
	int tempo, horas, minutos;
	
	printf("Digite quanto tempo se passou ");
	scanf("%i", &tempo);
	
	cacula_hora(tempo, &horas, &minutos);
	
	printf("\no tempo %i representa %i horas e %i minutos\n", tempo, horas, minutos);

	return 0;
}
