#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v [6] [6];
	int i, j;
	
	for (i = 0; i < 6; i++){
		//v[i][j] = 1;
		for (j = 0; j < 6; j++){
			v [i][j] = 1;
		}

	}
	
	for (i = 0; i < 6; i++){

		for (j = 0; j < 6; j++){

			printf("%3i ", v[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
	for (i = 1; i < 5; i++){
	//	v[i][j] = 1;
		for (j = 1; j < 5; j++){
			v [i][j] = 2;
		}

	}
	
	for (i = 0; i < 6; i++){

		for (j = 0; j < 6; j++){

			printf("%3i ", v[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
	for (i = 2; i < 4; i++){
	//	v[i][j] = 0;
		for (j = 2; j < 4; j++){
			v [i][j] = 3;
		}

	}
	
	for (i = 0; i < 6; i++){

		for (j = 0; j < 6; j++){

			printf("%3i ", v[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
