#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
4 � Fa�a um programa que leia um conjunto de 5 n�meros inteiros que devem ser digitados pelo
usu�rio. Ap�s isso, mostre os valores na tela, uns ao lado dos outros. Em seguida, fa�a com que os
n�meros sejam invertidos de posi��o, ou seja, que o primeiro fique armazenado no lugar do �ltimo, o
segundo no lugar do pen�ltimo e assim por diante. Ao final, mostre novamente na tela os valores
contidos no vetor, uns ao lado dos outros.
Dica: use uma vari�vel auxiliar para fazer a troca de posi��es.
// Exemplo abaixo troca os valores armazenados em V[0] e V[1] de lugar
auxiliar=V[0];
V[0]=V[1]
V[1]=auxiliar;
*/

int main(int argc, char *argv[]) {
int i, v [5];

for (i=0;i<5;i++){
	printf("digite o %i valor do vetor: ", i+1);
	scanf("%i", &v[i]);
}
for (i=0;i<5;i++){
	printf("%i ", v[i]);
}
printf("\n");

int auxiliar2 = v[4];

v[4] = v[0];
v[0] = auxiliar2;

auxiliar2 = v[3];

v[3] = v[1];
v[1] = auxiliar2;

for (i=0;i<5;i++){
	printf("%i ", v[i]);
}
	
	
	return 0;
}
