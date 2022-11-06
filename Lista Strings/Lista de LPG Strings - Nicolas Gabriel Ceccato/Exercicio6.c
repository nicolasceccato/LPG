#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int verifica(char str[], int n);
int main(int argc, char *argv[]) {
	char str[50];
	
	printf("digite uma string ");
	scanf(" %s", str);
	
	int i;
	
	for (i = 0; str[i] != 0; i++);
	
	int n = i-1;
			
	if(verifica (str, n)){
		printf("\na string possui apenas digitos\n");
	}else{
		printf("\na string possui outros caracteres alem de digitos\n");
	}
	//printf("%i", n)		;
	return 0;
}
int verifica(char str[], int n){
	int i;
	
	for(i = 0; i <= n; i++){
		if ((str[i] < 48) || (str[i] > 57)){
			return 0;
		}
	}return 1;
	
}
