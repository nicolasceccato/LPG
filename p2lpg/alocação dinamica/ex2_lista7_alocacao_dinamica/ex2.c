#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe como parâmetros uma string s e um inteiro n, e retorna nova string nova
contendo s repetida n vezes. Por exemplo, s = “Abc” e n = 4 tem como resultado a string
“AbcAbcAbcAbc”. Faça o programa principal chamando a função. Protótipo da função:
char *repetidor( char *s, int n ); */
char *repetidor( char *s, int n ){
	char *c2;
	int i, t = 0;
	for (i = 0; s[i] != '\0'; i++){
		t++;
	}
	
	c2 = (char *)malloc (sizeof(char) *n*t);
	int q = 0;
	for (i = 0; i < (n*t); i++){
		c2[i]=s[q];
		q++;
		if(q == t){
			q = 0;
		}
	}
	c2[i] = '\0';
	for (i = 0; i < (n*t); i++){
		printf(" %c ", c2[i]);
	}
	return c2;
}
int main(int argc, char *argv[]) {
	char string[10], *c;
	
	printf("digite uma string: ");
	scanf(" %s", string);
	int n,i;
	
	printf("quantas repeticoes: ");
	scanf("%i", &n);
	c = repetidor(string, n);
	printf("\n");
	printf("%s\n", c);
	for (i = 0; c[i] != '\0'; i++){
		printf("%c", c[i]);
	}
	
	return 0;
}
