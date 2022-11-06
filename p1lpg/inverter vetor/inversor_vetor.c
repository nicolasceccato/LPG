#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAP 11
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[CAP], i, aux;
	
	srand(time(0));
	
	for (i = 0; i < CAP; i++){
		v[i] = i;
	}
	printf("\n");
	for (i = 0; i < CAP; i++){
		printf("%i ", v[i]);
	}

	
	for (i = 0; i < CAP/2; i++) {
		aux = v[i];
		v[i] = v[CAP-1-i];
		v[CAP-1-i] = aux;
	}
	printf("\n");
	for (i = 0; i < CAP; i++){
		printf("%i ", v[i]);
	}


	return 0;
}
