#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe como parâmetros uma string s e um inteiro n, e retorna nova string nova
contendo s repetida n vezes. Por exemplo, s = “Abc” e n = 4 tem como resultado a string
“AbcAbcAbcAbc”. Faça o programa principal chamando a função. Protótipo da função:
char *repetidor( char *s, int n ); */
char *repetidor( char *s, int n ){
	int i, q, j = 0;
	char *s2;
	
	for (q = 0; s[q] != '\0'; q++);
	
	s2 = (char *)malloc(sizeof(char)*n*q);
	
	for (i = 0; i < n*q; i++){
		s2[i] = s[j];
		j++;
		if(j == q){
			j = 0;
		}
	}
	s2[n*q] = '\0';
	return s2;
	
}
int main(int argc, char *argv[]) {
	char *str, *str2;
	int i, n;
	printf("Digite quantos termos tera sua string: ");
	scanf(" %i",&n );
	
	str = (char*)malloc(sizeof(char)*n);
	
	printf("digite sua string: ");
	scanf("%s", str);
	
	int v;
	
	printf("\nquantas vezes vc quer repetir a string? ");
	scanf("%i",&v);
	
	str2 = repetidor (str, v);
	
	printf("\nstring repetida :  %s", str2);
	
	
	return 0;
}
