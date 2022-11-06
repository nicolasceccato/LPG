#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que Leia N valores inteiros (N é informado pelo usuário) e em seguida leia uma
sequência de N valores inteiros. O programa deve alocar uma estrutura usando um ponteiro p (int **p),
e deve armazenar os valores digitados e seus divisores conforme a figura a seguir. Repare que as
alocações devem respeitar as quantidades de valores armazenados (é preciso calcular a quantidade de
divisores de cada número para saber o espaço necessário). Ao final, percorra a estrutura e mostre cada
valor e seus respectivos divisores, a faça a liberação da memória. */

int main(int argc, char *argv[]) {
	int n, **p, i, j, ndiv, valor;
	printf("Digite quantas linha deseja: ");
	scanf("%i", &n);
	
	p = (int**)malloc(sizeof(int *)*n);
	
	for ( i = 0; i < n; i++){
		p[i]=(int*)malloc(sizeof(int));
	}
	for (i = 0; i < n; i++){
		printf("qual valor vc quer os divisores na %ia linha? ",i+1);
		scanf("%i", &p[i][0]);
	
		ndiv = 0;
		valor = p[i][0];
		
		for (j = 1; j <=valor;j++){
			if (valor %j == 0){
				ndiv++;
				p[i] = (int *)realloc(p[i], sizeof(int)*(ndiv+1));
				p[i][ndiv]=j;
				
			}
		}
		ndiv++;
		p[i] = (int*)realloc(p[i], sizeof(int)*(ndiv+1));
		p[i][ndiv] = 0;
	}
	for (i = 0; i < n; i++){
		for (j = 0; p[i][j] != 0; j++){
			printf("%3i ", p[i][j]);
		}
		printf("%3i ", p[i][j]);
		printf("\n");
	}
		
	
	
	
	return 0;
}
