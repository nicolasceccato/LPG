#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int busca_seq_rec(int v[], int n, int chave){
	int i;
	
	for (i = 0; i < n; i++){
		if (v[i] == chave){
			return i;
		}
	}
	return -1;

}
int main(int argc, char *argv[]) {
	int n = 10;
	int v[10];
	
	srand(time(0));
	int i;
	for(i = 0; i < n; i++){
		v[i] = rand() % 11;
	}
	for(i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
	printf("\n");
	int chave;
	printf("\ndigite a chave a ser buscada: \n");
	scanf("%i", &chave);
	
	int t = busca_seq_rec(v,n,chave);
	
	if (t < 0){
		printf("chave NAO encontrada no vetor\n");
	}else{
		printf("chave encontrada no indice : %i\n", t);
	}
	return 0;
}
