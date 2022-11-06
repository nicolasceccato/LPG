#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, f;
	
	printf("digite as horas de inicio e fim de jogo: ");
	scanf("%i%i", &i,&f);
	
	if (f == i){
		
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	if (f > i){
		
		printf("O JOGO DUROU %i HORA(S)", f-i);
	}
	if (f < i){
		
		printf("O JOGO DUROU %i HORA(S)", (24-i+f));
	
	}
	
	
	return 0;
}
