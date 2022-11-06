#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int eh_digito(char c){
	int valor, i;
	if (c < '0' || c > '9'){
		return 0;
	}else{
		return 1;
	}
}
int main(int argc, char *argv[]) {
	char c;
	
	printf("Digite um char: ");
	scanf(" %c", &c);
	
	
	int convert;
	if (eh_digito(c)){
		convert = c - 48;
		printf("\no char digitado representa o inteiro: %i\n", c - 48);
		
	}else{
		printf("\no char digitado representa NAO eh um digito\n");
	}
	return 0;
}
