#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	do{
		
		printf("Digite o numero de casos de teste que deseja (n > 0): ");
		scanf("%i", &n);
		
	} while (n <= 0);
	
	
	int i;
	float n1, n2, n3, total, media;
	
	for (i = 1; i <= n; i++){
		printf("\n");
		printf ("digite as 3 notas para o %i caso de teste: ", i);
		scanf ("%f%f%f", &n1, &n2, &n3);
		total = (n1*2)+(n2*3)+(n3*5);
		media = total/10;
		printf("\n");
		printf ("%.1f\n", media);
		
	}
	
	return 0;
}
