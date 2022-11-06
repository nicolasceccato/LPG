#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1 [100] = "abacaxi";
	char str2 [100] = "chortela";
	int i;
	
	for (i = 0; str1[i] != '\0'; i++);
	
	int j;
	
	for (j = 0; str2[j] != '\0'; j++){
		str1[i+j] = str2[j];
	}
	str1[i+j] = '\0';
	
	printf("\n%s\n", str1);			
		
	
	return 0;
}
