#include <stdio.h>
#include <stdlib.h>

/*  Fa�a um programa que Leia N valores inteiros (N � informado pelo usu�rio) e em seguida leia uma
sequ�ncia de N valores inteiros. O programa deve alocar uma estrutura usando um ponteiro p (int **p),
e deve armazenar os valores digitados e seus divisores conforme a figura a seguir. Repare que as
aloca��es devem respeitar as quantidades de valores armazenados (� preciso calcular a quantidade de
divisores de cada n�mero para saber o espa�o necess�rio). Ao final, percorra a estrutura e mostre cada
valor e seus respectivos divisores, a fa�a a libera��o da mem�ria. */

int main(int argc, char *argv[]) {
	int **p, n, i, j, ndiv, valor;
	printf("digite um inteiro: ");
	scanf("%i", &n);
	
	p = (int**)malloc(sizeof(int*)*n);
	for (i = 0; i < n; i++){
		p[i] = (int*)malloc(sizeof(int));
	}
	for (i = 0; i < n; i++){
		printf("qual o valor da %ia linha ?: ",i+1);
		scanf("%i", &p[i][0]);
		
		ndiv=0;
		for (j = 1; j <= p[i][0];j++){
			if (p[i][0] % j == 0){
				ndiv++;
				p = realloc (p, sizeof(int)*(ndiv+1));
				p[i][ndiv] = j;
			}
		}
		ndiv++;
		p[i] = realloc(p, sizeof(int)*(ndiv+1));
		p[i][ndiv]=0;
	
	}
	
	for (i = 0; i <n; i++){
		for (j = 0; p[i][j] != 0; j++){
			printf("%3i ", p[i][j]);
		}
		printf("%3i ", p[i][j]);
		printf("\n");
	}

	return 0;
}
