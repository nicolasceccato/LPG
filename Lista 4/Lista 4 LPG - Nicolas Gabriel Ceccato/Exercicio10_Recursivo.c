#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float somador (int n){

	if (n == 0 || n == 1 ) {
		return 1;
	}else
	{	return (1.0/(n* somador (n-1)));
			
		
	}		
}

int main(int argc, char *argv[]) {
	int termos;
	printf ("digite a quantidade de termos que deseja: ");
	scanf("%i", &termos);
	
	float x = somador (termos);
	printf("a somatoria dos %i termos resulta em: %f", termos, x);
	return 0;
}
