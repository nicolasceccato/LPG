#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, k;
	
	do{
	
	printf ("Digite a partir de qual numero deseja calcular os numeros primos : ");
	scanf("%i", &k);
	
	
	}while(k < 0);
	
	do{
	
	printf ("Digite a quantidade de primos que deseja : ");
	scanf("%i", &n);
	
	
	}while(n < 1);
	
	int x, j = 0;
	
	for (x = k; j < n; x++)	{
		
		int i, cont = 0;
		
		for (i = 1; i <= x; i++){
		
			if (x % i == 0){
			cont++;
			}
			
		}
		
		if (cont == 2){
			printf ("%i : %i\n", j+1, x);
			j++;
		}
		
		
			
	}
		
	
	
	
	
	
	
	return 0;
}
