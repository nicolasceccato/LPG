#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void apaga(char str[], char c){
	int i, j;
	for (i = 0, j = 0; str[i] != '\0'; i++){
		if (str[i] != c){
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	printf(" %s", str);
	
	
}
int main(int argc, char *argv[]) {
	char str[50], c;
	
	printf("Digite uma string ");
	scanf(" %s", str);
	
	printf("Digite um char ");
	scanf(" %c", &c);
	
	apaga(str,c);
	return 0;
}
