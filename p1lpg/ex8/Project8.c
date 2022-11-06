#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAP 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void busca_todos(int v[], int n, int chave, int indices[]){
	int i, j;
	/*for (i = 0; i < n; i++){
		indices[i] = -1;
	}
	*/
	j = 0;
	for (i = 0; i < n; i++){
		if( v[i] == chave){
			indices[j] = i;
			j++;
			}
	}
	
	for (i = j; i < n; i++){
		indices[i] = -1;
	}
	printf("vetor v[%i]: ", n);
	for (i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
	printf("\n");
	printf("vetor indices[%i]: ", n);
	for (i = 0; i < n; i++){
		printf("%i ", indices[i]);
	}	
}

int main(int argc, char *argv[]) {
	int n = CAP, chave;
	int v[n], in [n];
	
	srand(time(0));
	int i;
	
	for (i=0; i<n ;i++){
		v[i]= rand() % 11;
	}
	printf("vetor v[%i]: ", n);
	for (i=0; i<n ;i++){
		printf("%i ", v[i]);
	}
	printf("\n");
	printf("digite a chave a ser buscada: \n");
	scanf("%i", &chave);
	
	busca_todos(v, n, chave, in);
	
	return 0;
}
