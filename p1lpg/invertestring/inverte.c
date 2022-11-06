#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[50];
	
	printf("digite uma string: ");
	scanf(" %s", str);
	
	printf("%s", str);
	printf("\n");
	printf("\n");
	int i, aux;
	
	for (i = 0; str[i] != '\0'; i++);
	
	int n = i;
	
	for (i = 0; i < n/2; i++){
		aux = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = aux;
	}
	printf("%s", str);
	return 0;
}
