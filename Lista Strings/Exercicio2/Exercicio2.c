#include <stdio.h>
#include <stdlib.h>
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void verifica_char_na_string (char str[], char cha);
int main(int argc, char *argv[]) {
	char s[10], c;
	
	printf ("digite uma string: ");
	scanf(" %s", s);
	
	printf("digite um char: ");
	scanf(" %c", &c);
	
	verifica_char_na_string (s, c);
	
	return 0;
}

void verifica_char_na_string (char str[], char cha){
	int i, soma = 0;
	
	for (i = 0; str[i] != '\0' ; i++){
		if (str[i] == cha){
			soma++;
			
		}
	}
		if (soma > 0){
			printf("\no char esta contido %i vezes na string\n", soma);
		
		}else{
			printf("\no char nao esta contido na string\n");
		}
			
	 
	return 0;
}

