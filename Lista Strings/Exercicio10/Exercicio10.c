#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inverte (char str[]);
int main(int argc, char *argv[]) {
	char str[50];
	
	printf("digite uma string ");
	scanf(" %s", str);
	
	printf("\n\%s\n", str);

	inverte(str);
	
	return 0;
}
void inverte (char str[]){
	int i;
	for (i = 0; str[i] != '\0'; i++);
	int n = i - 1;
	char aux;
	
	for (i = 0; i <= n/2; i++){
		aux = str[i];
		str[i] = str [n - i];
		str[n-i] = aux;
		
	}
	printf("\n\%s\n", str);		
	
}

