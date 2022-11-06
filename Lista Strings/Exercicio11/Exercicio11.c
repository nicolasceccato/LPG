#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void apaga_char(char str[], char cha);
int main(int argc, char *argv[]) {
	char str[50], cha;
	
	printf("digite uma string ");
	scanf(" %s", str);
	
	printf("digite um char ");
	scanf(" %c", &cha);
	
	printf("\nstring original: %s\n", str);
	printf("\nchar: %c\n", cha);
	
	apaga_char(str, cha);
	
	
	return 0;
}
void apaga_char(char str[], char cha){
	int i, j;
	for(i = 0, j = 0; str[i] != '\0'; i++){
		if (str[i] != cha){
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	printf("\nstring modificada: %s\n", str);
}
