#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void concatena( char str1[], char str2[] );
int main(int argc, char *argv[]) {
	char nome1[50] = "roberto";
	char nome2[50] = "carlos";
	
	printf("\n %s\n", nome1);
	printf("\n %s\n", nome2);
	
	concatena( nome1, nome2);
	
 
	return 0;
}
void concatena( char str1[], char str2[] ){
	
	int i, j;
	
	for (i = 0; str1[i] != '\0'; i++);
			
	for (j = 0; str2[j] != '\0'; j++){
		
		str1[i+j] = str2[j];
	}
	str1[i+j] = '\0';
	
	
	
	printf("\n %s\n", str1);
	
	


}
