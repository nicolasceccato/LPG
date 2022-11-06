#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str [50];
	
	printf("digite uma string: ");
	scanf(" %s", str);
	printf("\n%s\n", str);
	
	int i;
	for (i = 0; str[i] != '\0'; i++){
		if ((str [i] >= 'a') &&(str [i] <= 'z')){
			str[i] = str [i] - 32;
		}
	}
	printf("\n%s\n", str);
	
	return 0;
}
