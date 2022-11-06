#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void trim( char srt[] );

int main(int argc, char *argv[]) {
	
	char srt[50];
	printf("digite uma string ");
	gets(srt);
	
	printf("%s\n", srt);
	
	
	trim(srt);
	return 0;
}
void trim( char srt[] ){

	int i, cont = 0;
	char srt1[50];

	for (i = 0; srt[i] != '\0'; i++){
		if (((srt [i] >= 65) && srt [i] <= 90)||((srt [i] >= 97) && srt [i] <= 122)){
			srt1[cont] == srt[i]; 
			cont++;		
		}
			
		
	}	
	printf("%s\n", srt1);
}
