#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fatorial (int n){
	int i;
	float fat = 1;
	for (i = 1; i <= n; i++ ){
		fat = i * fat;
	}
	return fat;
}
float somatoria (int n){
	int i;
	float soma = 0;
	
	for (i = 0; i <= n; i++ ){
		soma = soma + 1.0/fatorial(i);
	}
	return soma;
}
int main(int argc, char *argv[]) {
	int n;
	
	printf("digite o valor desejado: ");
	scanf("%i", &n);
	
	float t = somatoria(n);
	
	printf("\n%f\n", t);
	return 0;
}
