#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
2 – Escreva um programa que leia um vetor A de 10 elementos reais. Após isso,
 construa e imprima um outro vetor B formado da seguinte maneira:
- os elementos de índice par são os correspondentes de A divididos por 2;
- os elementos de índice ímpar são os correspondentes de A multiplicados por 3
*/

int main(int argc, char *argv[]) {
	int a [10];
	int b [10];
	int i;
	
	for (i = 0; i < 10; i++){
		printf ("digite o %i valor do vetor a: ", i+1);
		scanf("%i", &a[i]);
		
		if (i % 2 == 0){
			b[i] = a[i]/2;
		}else{
			b[i] = a[i]*3;
		}
		
	}
	for (i = 0; i < 10; i++){
		printf ("%i ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		printf ("%i ", b[i]);
	}
		
	return 0;
}
