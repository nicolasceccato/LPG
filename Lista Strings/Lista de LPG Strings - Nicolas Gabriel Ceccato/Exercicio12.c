#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int compara (char str1[], char str2[]);

int main(int argc, char *argv[]) {
	char str1[50], str2 [50];
	
	printf("digite uma string: ");
	scanf(" %s", str1);
	
	printf("digite outra string: ");
	scanf(" %s", str2);
	
	int t = compara (str1, str2);
	
	if ( t == 0){
		printf ("\nas strings sao iguais\n");
		
	}else{
		if (t > 0){
			printf("\nstr1 eh maior que str2\n");
		}else{
			printf("\nstr1 eh menor que str2\n");
	}
	}
	return 0;
}
int compara (char str1[], char str2[]){
	int i, j, soma = 0;
	
	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
		
			if (str1[i] == str2[i]){
				soma = soma + 0;
			}
			if (str1[i] > str2[i]){
				soma = soma + 1;
			}
			if (str1[i] < str2[i]){
				soma = soma - 1;
			}
			
		}
		if (soma == 0){
			return 0;
		} else if(soma < 0){
			return -1;
		} else if (soma > 0){
			return 1;
		}
			
	}
	

