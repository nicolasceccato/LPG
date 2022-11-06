#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
3 – Escreva um programa que:
• leia um conjunto A de 20 valores numéricos e armazene-os em um vetor;
• calcule e imprima o valor de S, onde:
S = (A1 – A20)2 + (A2 – A19)2 + ......+ (A10 – A11)2

 10
ou seja, S = ?(Ai – A21-i)
*/

int main(int argc, char *argv[]) {
	float a [20], s, soma = 0;
	int i;
	
	for (i=0;i<20;i++){
		printf("Digite o %i valor do vetor: ", i+1);
		scanf("%f", &a[i]);
	}
	for (i=0 ; i < 10; i++){
		s = (a[i]-a[20-i])*(a[i]-a[20-i]);
		soma = soma + s;
	}
	printf ("o valor de s eh: %f\n", soma);
	return 0;
}
