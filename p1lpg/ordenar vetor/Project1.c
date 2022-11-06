#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#define CAPACIDADE 11
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[CAPACIDADE];
	int i;
	
	srand(time(0));	

	for(i = 0; i < CAPACIDADE; i++){
		v[i] = rand() % 6;
	}
	
	printf("\nVetor original:\n");
	for(i = 0; i < CAPACIDADE; i++){
		printf("%i ", v[i]);
	}
	int aux;
	for(i = 0; i < CAPACIDADE/2; i++){
		aux = v[i];
		v[i] = v[CAPACIDADE -1 -i];
		v[CAPACIDADE -1 -i] = aux;
	}
	printf("\nVetor invertido:\n");
	for(i = 0; i < CAPACIDADE; i++){
		printf("%i ", v[i]);
	}
	
	
	return 0;
}
