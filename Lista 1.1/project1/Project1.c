#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, k;
	
	printf("digite n e k: ");
	scanf("%i%i", &n, &k);
	
	int x, j = 0;
	
	for (x = k; j < n; x++){

		int cont = 0, i;
		
		for(i = 1; i <= x; i++){
			
			if (x % i == 0){
				cont++;
			}
					
		}
		if (cont == 2){
			j++;
			printf("%i : %i\n", j, x);
			
			
		}
	}

	return 0;
}
