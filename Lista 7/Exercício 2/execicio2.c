#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva uma função que recebe como parâmetros uma string s e um inteiro n, e retorna nova string nova
contendo s repetida n vezes. Por exemplo, s = “Abc” e n = 4 tem como resultado a string
“AbcAbcAbcAbc”. Faça o programa principal chamando a função. Protótipo da função:
char *repetidor( char *s, int n ); */
char *repetidor( char *s, int n ){
	int i, q;
	char *s2;
	
	for (q = 0; s[q] != '\0'; q++);
	int x = q;
	s2 = (char *)malloc(sizeof(char)*n*x);
	int j = 0;
	
	for (i = 0; i < n*x; i++){
		s2[i] = s[j];
		j++;
		
		if(j == x){
			j = 0;
		}
	}
	s2[n*x] = '\0';
	/*for (i = 0; i < n*x; i++){
		printf ("%c", s2[i]);
	}*/
	
	return s2;	
	
}
int main(int argc, char *argv[]) {
	int n, i;
	char *s1;
	printf("quantos termos tera a string? ");
	scanf("%i", &n);
	char str[n];
	for (i = 0; i < n; i++){
		printf("Digite o %i termo da string: ", i+1);
		scanf(" %c", &str[i]);	
	}
	str[i] = '\0';
	
	int vezes;
	printf("quantas vezes voce quer que a string se repita ");
	scanf("%i", &vezes);
	
	s1 = repetidor(str, vezes);
	
	
	printf("\n%s\n", s1);
	

	
	free(s1);
	return 0;
}
